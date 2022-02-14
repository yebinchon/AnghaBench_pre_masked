
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int sd; unsigned int hd; } ;
struct TYPE_6__ {scalar_t__ pm_method; scalar_t__ dpm_enabled; TYPE_2__ dpm; } ;
struct TYPE_4__ {int idle_work; } ;
struct radeon_device {TYPE_3__ pm; TYPE_1__ uvd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int,int) ;
 int FUNC_4 (struct radeon_device*,unsigned int*,unsigned int*) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(struct radeon_device *VAR_2)
{
 bool VAR_3 = 0;
 bool VAR_4 = !FUNC_0(&VAR_2->uvd.idle_work);
 VAR_4 &= FUNC_5(&VAR_2->uvd.idle_work,
         FUNC_1(VAR_1));

 if ((VAR_2->pm.pm_method == VAR_0) && VAR_2->pm.dpm_enabled) {
  unsigned VAR_5 = 0, VAR_6 = 0;
  FUNC_4(VAR_2, &VAR_6, &VAR_5);
  if ((VAR_2->pm.dpm.sd != VAR_6) ||
      (VAR_2->pm.dpm.hd != VAR_5)) {
   VAR_2->pm.dpm.sd = VAR_6;
   VAR_2->pm.dpm.hd = VAR_5;


  }
 }

 if (VAR_4 || VAR_3) {
  if ((VAR_2->pm.pm_method == VAR_0) && VAR_2->pm.dpm_enabled) {
   FUNC_2(VAR_2, 1);
  } else {
   FUNC_3(VAR_2, 53300, 40000);
  }
 }
}
