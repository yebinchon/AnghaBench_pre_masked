
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct pp_hwmgr*,int ,int ,int ) ;

__attribute__((used)) static uint32_t FUNC_3(struct pp_hwmgr *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_0, 0, VAR_2);

 FUNC_2(VAR_3, VAR_5,
   0, VAR_1);

 return FUNC_0(VAR_0, 0, VAR_2);
}
