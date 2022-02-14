
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ bNoFan; } ;
struct TYPE_4__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {TYPE_2__ thermal_controller; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct pp_hwmgr*,int ) ;
 int FUNC_7 (struct pp_hwmgr*) ;

int FUNC_8(struct pp_hwmgr *VAR_10,
  uint32_t VAR_11)
{
 struct amdgpu_device *VAR_12 = VAR_10->adev;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint64_t VAR_15;

 if (VAR_10->thermal_controller.fanInfo.bNoFan)
  return 0;

 if (VAR_11 > 100)
  VAR_11 = 100;

 if (FUNC_0(VAR_6))
  FUNC_7(VAR_10);

 VAR_13 = FUNC_1(FUNC_3(VAR_7, 0, VAR_9),
        VAR_1, VAR_5);

 if (VAR_13 == 0)
  return -VAR_2;

 VAR_15 = (uint64_t)VAR_11 * VAR_13;
 FUNC_5(VAR_15, 100);
 VAR_14 = (uint32_t)VAR_15;

 FUNC_4(VAR_7, 0, VAR_8,
  FUNC_2(FUNC_3(VAR_7, 0, VAR_8),
   VAR_0, VAR_4, VAR_14));

 return FUNC_6(VAR_10, VAR_3);
}
