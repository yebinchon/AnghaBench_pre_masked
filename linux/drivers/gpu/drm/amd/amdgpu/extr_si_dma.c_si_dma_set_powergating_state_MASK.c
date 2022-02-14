
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;
typedef enum amd_powergating_state { ____Placeholder_amd_powergating_state } amd_powergating_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_2,
       enum amd_powergating_state VAR_3)
{
 u32 VAR_4;

 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_2;

 FUNC_0(VAR_1, 0x00002000);
 FUNC_0(VAR_0, 0x100010ff);

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
  FUNC_0(VAR_1, 0);

 return 0;
}
