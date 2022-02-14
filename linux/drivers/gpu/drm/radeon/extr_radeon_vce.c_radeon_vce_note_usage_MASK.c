
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pm_method; scalar_t__ dpm_enabled; } ;
struct TYPE_4__ {int idle_work; } ;
struct radeon_device {TYPE_1__ pm; TYPE_2__ vce; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int,int) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct radeon_device *VAR_2)
{
 bool VAR_3 = 0;
 bool VAR_4 = !FUNC_0(&VAR_2->vce.idle_work);
 VAR_4 &= FUNC_4(&VAR_2->vce.idle_work,
         FUNC_1(VAR_1));

 if ((VAR_2->pm.pm_method == VAR_0) && VAR_2->pm.dpm_enabled) {

  VAR_3 = 0;
 }

 if (VAR_4 || VAR_3) {
  if ((VAR_2->pm.pm_method == VAR_0) && VAR_2->pm.dpm_enabled) {
   FUNC_2(VAR_2, 1);
  } else {
   FUNC_3(VAR_2, 53300, 40000);
  }
 }
}
