
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
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ,int) ;

int FUNC_1(struct radeon_device *VAR_7,
       enum radeon_dpm_forced_level VAR_8)
{
 if (VAR_8 == VAR_5) {
  if (FUNC_0(VAR_7, VAR_1, 0) != VAR_3)
   return -VAR_0;

  if (FUNC_0(VAR_7, VAR_2, 1) != VAR_3)
   return -VAR_0;
 } else if (VAR_8 == VAR_6) {
  if (FUNC_0(VAR_7, VAR_2, 0) != VAR_3)
   return -VAR_0;

  if (FUNC_0(VAR_7, VAR_1, 1) != VAR_3)
   return -VAR_0;
 } else if (VAR_8 == VAR_4) {
  if (FUNC_0(VAR_7, VAR_2, 0) != VAR_3)
   return -VAR_0;

  if (FUNC_0(VAR_7, VAR_1, 0) != VAR_3)
   return -VAR_0;
 }

 VAR_7->pm.dpm.forced_level = VAR_8;

 return 0;
}
