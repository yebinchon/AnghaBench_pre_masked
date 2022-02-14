
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int VAR_6 ;
 int FUNC_5 (struct pp_hwmgr*,int ) ;
 int FUNC_6 (struct pp_hwmgr*) ;

int FUNC_7(struct pp_hwmgr *VAR_7, uint32_t VAR_8)
{
 struct amdgpu_device *VAR_9 = VAR_7->adev;
 uint32_t VAR_10, VAR_11;
 int VAR_12 = 0;

 if (!VAR_8)
  return -VAR_1;

 if (FUNC_0(VAR_3)) {
  VAR_12 = FUNC_6(VAR_7);
  if (VAR_12)
   return VAR_12;
 }

 VAR_11 = FUNC_4((struct amdgpu_device *)VAR_7->adev);
 VAR_10 = 60 * VAR_11 * 10000 / (8 * VAR_8);
 FUNC_3(VAR_5, 0, VAR_6,
   FUNC_1(FUNC_2(VAR_5, 0, VAR_6),
    VAR_0, VAR_4,
    VAR_10));

 return FUNC_5(VAR_7, VAR_2);
}
