
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vega10_hwmgr {TYPE_3__* smu_features; } ;
struct TYPE_4__ {scalar_t__ bNoFan; } ;
struct TYPE_5__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {struct amdgpu_device* adev; TYPE_2__ thermal_controller; struct vega10_hwmgr* backend; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct amdgpu_device*) ;
 int VAR_5 ;
 int FUNC_3 (struct pp_hwmgr*,int*) ;

int FUNC_4(struct pp_hwmgr *VAR_6, uint32_t *VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_6->adev;
 struct vega10_hwmgr *VAR_9 = VAR_6->backend;
 uint32_t VAR_10;
 uint32_t VAR_11;
 int VAR_12 = 0;

 if (VAR_6->thermal_controller.fanInfo.bNoFan)
  return -1;

 if (VAR_9->smu_features[VAR_2].supported) {
  VAR_12 = FUNC_3(VAR_6, VAR_7);
 } else {
  VAR_10 =
   FUNC_0(FUNC_1(VAR_4, 0, VAR_5),
       VAR_0,
       VAR_3);

  if (VAR_10 == 0)
   return -VAR_1;

  VAR_11 = FUNC_2((struct amdgpu_device *)VAR_6->adev);

  *VAR_7 = 60 * VAR_11 * 10000 / VAR_10;
 }

 return VAR_12;
}
