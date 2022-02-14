
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int TDPODLimit; } ;
struct pp_hwmgr {int default_power_limit; int power_limit; int smu_lock; TYPE_1__ platform_descriptor; scalar_t__ od_enabled; int pm_en; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, uint32_t *VAR_2, bool VAR_3)
{
 struct pp_hwmgr *VAR_4 = VAR_1;

 if (!VAR_4 || !VAR_4->pm_en ||!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_4->smu_lock);

 if (VAR_3) {
  *VAR_2 = VAR_4->default_power_limit;
  if (VAR_4->od_enabled) {
   *VAR_2 *= (100 + VAR_4->platform_descriptor.TDPODLimit);
   *VAR_2 /= 100;
  }
 }
 else
  *VAR_2 = VAR_4->power_limit;

 FUNC_1(&VAR_4->smu_lock);

 return 0;
}
