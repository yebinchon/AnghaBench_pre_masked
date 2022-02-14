
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int ulMinRPM; int ulMaxRPM; scalar_t__ bNoFan; } ;
struct TYPE_4__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {struct amdgpu_device* adev; TYPE_2__ thermal_controller; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int VAR_5 ;
 int FUNC_5 (struct pp_hwmgr*,int ) ;
 int FUNC_6 (struct pp_hwmgr*) ;

int FUNC_7(struct pp_hwmgr *VAR_6, uint32_t VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_6->adev;
 uint32_t VAR_9;
 uint32_t VAR_10;
 int VAR_11 = 0;

 if (VAR_6->thermal_controller.fanInfo.bNoFan ||
     VAR_7 == 0 ||
     (VAR_7 < VAR_6->thermal_controller.fanInfo.ulMinRPM) ||
     (VAR_7 > VAR_6->thermal_controller.fanInfo.ulMaxRPM))
  return -1;

 if (FUNC_0(VAR_2))
  VAR_11 = FUNC_6(VAR_6);

 if (!VAR_11) {
  VAR_10 = FUNC_4((struct amdgpu_device *)VAR_6->adev);
  VAR_9 = 60 * VAR_10 * 10000 / (8 * VAR_7);
  FUNC_3(VAR_4, 0, VAR_5,
    FUNC_1(FUNC_2(VAR_4, 0, VAR_5),
     VAR_0, VAR_3,
     VAR_9));
 }
 return FUNC_5(VAR_6, VAR_1);
}
