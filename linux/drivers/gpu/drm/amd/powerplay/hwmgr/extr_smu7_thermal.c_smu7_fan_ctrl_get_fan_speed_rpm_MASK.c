
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int ucTachometerPulsesPerRevolution; scalar_t__ bNoFan; } ;
struct TYPE_4__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {scalar_t__ adev; int device; TYPE_2__ thermal_controller; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct amdgpu_device*) ;

int FUNC_2(struct pp_hwmgr *VAR_5, uint32_t *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;

 if (VAR_5->thermal_controller.fanInfo.bNoFan ||
     !VAR_5->thermal_controller.fanInfo.ucTachometerPulsesPerRevolution)
  return -VAR_3;

 VAR_7 = FUNC_0(VAR_5->device, VAR_0,
   VAR_1, VAR_4);

 if (VAR_7 == 0)
  return -VAR_2;

 VAR_8 = FUNC_1((struct amdgpu_device *)VAR_5->adev);

 *VAR_6 = 60 * VAR_8 * 10000 / VAR_7;

 return 0;
}
