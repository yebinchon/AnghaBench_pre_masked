
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu_table_context {TYPE_2__* power_play_table; } ;
struct smu_context {struct smu_table_context smu_table; } ;
struct TYPE_3__ {scalar_t__ format_revision; int structuresize; } ;
struct TYPE_4__ {TYPE_1__ sHeader; } ;
typedef TYPE_2__ ATOM_Vega20_POWERPLAYTABLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_2)
{
 ATOM_Vega20_POWERPLAYTABLE *VAR_3 = ((void*)0);
 struct smu_table_context *VAR_4 = &VAR_2->smu_table;

 VAR_3 = VAR_4->power_play_table;

 if (VAR_3->sHeader.format_revision < VAR_0) {
  FUNC_0("Unsupported PPTable format!");
  return -VAR_1;
 }

 if (!VAR_3->sHeader.structuresize) {
  FUNC_0("Invalid PowerPlay Table!");
  return -VAR_1;
 }

 return 0;
}
