
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int forced_level; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
typedef enum radeon_dpm_forced_level { ____Placeholder_radeon_dpm_forced_level } radeon_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;

int FUNC_3(struct radeon_device *VAR_3,
       enum radeon_dpm_forced_level VAR_4)
{
 int VAR_5;

 if (VAR_4 == VAR_1) {
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5)
   return VAR_5;
 } else if (VAR_4 == VAR_2) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5)
   return VAR_5;
 } else if (VAR_4 == VAR_0) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 VAR_3->pm.dpm.forced_level = VAR_4;

 return 0;
}
