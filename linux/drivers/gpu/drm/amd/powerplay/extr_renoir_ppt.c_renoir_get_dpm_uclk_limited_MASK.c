
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_3__* clocks_table; } ;
struct smu_context {TYPE_1__ smu_table; } ;
struct TYPE_6__ {TYPE_2__* FClocks; } ;
struct TYPE_5__ {int Freq; } ;
typedef TYPE_3__ DpmClocks_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct smu_context *VAR_2, uint32_t *VAR_3, bool VAR_4)
{

 DpmClocks_t *VAR_5 = VAR_2->smu_table.clocks_table;

 if (!VAR_3 || !VAR_5)
  return -VAR_0;

 if (VAR_4)
  *VAR_3 = VAR_5->FClocks[VAR_1-1].Freq;
 else
  *VAR_3 = VAR_5->FClocks[0].Freq;

 return 0;

}
