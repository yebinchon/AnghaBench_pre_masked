
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ ucTachometerPulsesPerRevolution; int ulMinRPM; int ulMaxRPM; scalar_t__ bNoFan; } ;
struct TYPE_4__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {int device; scalar_t__ adev; TYPE_2__ thermal_controller; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct pp_hwmgr*,int ) ;
 int FUNC_4 (struct pp_hwmgr*) ;

int FUNC_5(struct pp_hwmgr *VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;

 if (VAR_5->thermal_controller.fanInfo.bNoFan ||
   (VAR_5->thermal_controller.fanInfo.
   ucTachometerPulsesPerRevolution == 0) ||
   VAR_6 == 0 ||
   (VAR_6 < VAR_5->thermal_controller.fanInfo.ulMinRPM) ||
   (VAR_6 > VAR_5->thermal_controller.fanInfo.ulMaxRPM))
  return 0;

 if (FUNC_1(VAR_3))
  FUNC_4(VAR_5);

 VAR_8 = FUNC_2((struct amdgpu_device *)VAR_5->adev);

 VAR_7 = 60 * VAR_8 * 10000 / (8 * VAR_6);

 FUNC_0(VAR_5->device, VAR_0,
    VAR_1, VAR_4, VAR_7);

 return FUNC_3(VAR_5, VAR_2);
}
