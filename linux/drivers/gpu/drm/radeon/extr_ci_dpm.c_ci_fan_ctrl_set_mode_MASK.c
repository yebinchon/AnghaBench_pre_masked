
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ ucode_fan_control; } ;
struct TYPE_5__ {TYPE_1__ fan; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

void FUNC_4(struct radeon_device *VAR_0, u32 VAR_1)
{
 if (VAR_1) {

  if (VAR_0->pm.dpm.fan.ucode_fan_control)
   FUNC_2(VAR_0);
  FUNC_1(VAR_0, VAR_1);
 } else {

  if (VAR_0->pm.dpm.fan.ucode_fan_control)
   FUNC_3(VAR_0);
  else
   FUNC_0(VAR_0);
 }
}
