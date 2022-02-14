
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ucode_fan_control; } ;
struct TYPE_5__ {TYPE_1__ fan; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int ,int ) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_2);
 VAR_3 = FUNC_4(VAR_2, VAR_1, VAR_0);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_2(VAR_2, 1);
 if (VAR_3)
  return VAR_3;
 if (VAR_2->pm.dpm.fan.ucode_fan_control) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3)
   return VAR_3;
  VAR_3 = FUNC_5(VAR_2);
  if (VAR_3)
   return VAR_3;
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3)
   return VAR_3;
  FUNC_6(VAR_2);
 }

 return 0;
}
