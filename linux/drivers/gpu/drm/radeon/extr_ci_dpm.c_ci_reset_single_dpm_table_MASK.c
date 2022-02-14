
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct ci_single_dpm_table {size_t count; TYPE_1__* dpm_levels; } ;
struct TYPE_2__ {int enabled; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct radeon_device *VAR_1,
          struct ci_single_dpm_table* VAR_2,
          u32 VAR_3)
{
 u32 VAR_4;

 VAR_2->count = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2->dpm_levels[VAR_4].enabled = 0;
}
