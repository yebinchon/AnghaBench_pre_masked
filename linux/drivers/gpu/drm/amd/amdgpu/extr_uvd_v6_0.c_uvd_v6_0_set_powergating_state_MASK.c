
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef enum amd_powergating_state { ____Placeholder_amd_powergating_state } amd_powergating_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_3,
       enum amd_powergating_state VAR_4)
{







 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_3;
 int VAR_6 = 0;

 FUNC_0(VAR_2, VAR_1);

 if (VAR_4 == VAR_0) {
  FUNC_2(VAR_5);
 } else {
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6)
   goto out;
 }

out:
 return VAR_6;
}
