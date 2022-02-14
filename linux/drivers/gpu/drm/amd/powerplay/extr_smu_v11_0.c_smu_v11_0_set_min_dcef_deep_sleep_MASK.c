
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dcefclk; } ;
struct smu_table_context {TYPE_1__ boot_values; } ;
struct smu_context {int pm_enabled; struct smu_table_context smu_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct smu_context*,int) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1)
{
 struct smu_table_context *VAR_2 = &VAR_1->smu_table;

 if (!VAR_1->pm_enabled)
  return 0;
 if (!VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_1,
       VAR_2->boot_values.dcefclk / 100);
}
