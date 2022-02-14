
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_va {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_bo_va*,int) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_vm*,int *) ;
 int FUNC_3 (struct amdgpu_vm*) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_vm*) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_3,
        struct amdgpu_vm *VAR_4,
        struct amdgpu_bo_va *VAR_5,
        uint32_t VAR_6)
{
 int VAR_7;

 if (!FUNC_3(VAR_4))
  return;

 VAR_7 = FUNC_2(VAR_3, VAR_4, ((void*)0));
 if (VAR_7)
  goto error;

 if (VAR_6 == VAR_0 ||
     VAR_6 == VAR_1) {
  VAR_7 = FUNC_1(VAR_3, VAR_5, 0);
  if (VAR_7)
   goto error;
 }

 VAR_7 = FUNC_4(VAR_3, VAR_4);

error:
 if (VAR_7 && VAR_7 != -VAR_2)
  FUNC_0("Couldn't update BO_VA (%d)\n", VAR_7);
}
