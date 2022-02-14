
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {scalar_t__ adev; } ;
struct amdgpu_device {int dummy; } ;
typedef enum BACO_STATE { ____Placeholder_BACO_STATE } BACO_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;

int FUNC_1(struct pp_hwmgr *VAR_5, enum BACO_STATE *VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)(VAR_5->adev);
 uint32_t VAR_8;

 VAR_8 = FUNC_0(VAR_3, 0, VAR_4);

 if (VAR_8 & VAR_0)

  *VAR_6 = VAR_1;
 else
  *VAR_6 = VAR_2;
 return 0;
}
