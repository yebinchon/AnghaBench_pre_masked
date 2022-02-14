
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct pp_hwmgr*,scalar_t__,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static uint32_t FUNC_4(struct pp_hwmgr *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;
 uint32_t VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_1(VAR_0, 0, VAR_2);

 VAR_6 = FUNC_2(VAR_3, VAR_5,
   0, VAR_1);

 if (VAR_6)
  FUNC_3("No response from smu\n");

 return FUNC_0(VAR_0, 0, VAR_2);
}
