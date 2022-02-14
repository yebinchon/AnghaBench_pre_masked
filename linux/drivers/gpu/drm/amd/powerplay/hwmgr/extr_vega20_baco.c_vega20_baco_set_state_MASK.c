
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {scalar_t__ adev; } ;
struct amdgpu_device {int dummy; } ;
typedef enum BACO_STATE { ____Placeholder_BACO_STATE } BACO_STATE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct pp_hwmgr*,int ) ;
 scalar_t__ FUNC_4 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_5 (struct pp_hwmgr*,int ,int ) ;
 int FUNC_6 (struct pp_hwmgr*,int*) ;

int FUNC_7(struct pp_hwmgr *VAR_8, enum BACO_STATE VAR_9)
{
 struct amdgpu_device *VAR_10 = (struct amdgpu_device *)(VAR_8->adev);
 enum BACO_STATE VAR_11;
 uint32_t VAR_12;

 FUNC_6(VAR_8, &VAR_11);

 if (VAR_11 == VAR_9)

  return 0;

 if (VAR_9 == VAR_0) {
  VAR_12 = FUNC_1(VAR_5, 0, VAR_7);
  VAR_12 |= 0x80000000;
  FUNC_2(VAR_5, 0, VAR_7, VAR_12);


  if(FUNC_4(VAR_8, VAR_3, 0))
   return -VAR_2;

 } else if (VAR_9 == VAR_1) {
  if (FUNC_3(VAR_8, VAR_4))
   return -VAR_2;
  if (!FUNC_5(VAR_8, VAR_6,
           FUNC_0(VAR_6)))
   return -VAR_2;
 }

 return 0;
}
