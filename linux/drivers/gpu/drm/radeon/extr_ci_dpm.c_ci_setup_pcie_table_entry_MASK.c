
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ci_single_dpm_table {TYPE_1__* dpm_levels; } ;
struct TYPE_2__ {size_t value; size_t param1; int enabled; } ;



__attribute__((used)) static void FUNC_0(struct ci_single_dpm_table* VAR_0,
          u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 VAR_0->dpm_levels[VAR_1].value = VAR_2;
 VAR_0->dpm_levels[VAR_1].param1 = VAR_3;
 VAR_0->dpm_levels[VAR_1].enabled = 1;
}
