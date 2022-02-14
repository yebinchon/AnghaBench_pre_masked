
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_dev {int dummy; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_vm*) ;
 struct amdgpu_device* FUNC_2 (struct kgd_dev*) ;
 int FUNC_3 (char*,void*) ;

void FUNC_4(struct kgd_dev *VAR_0, void *VAR_1)
{
 struct amdgpu_device *VAR_2 = FUNC_2(VAR_0);
        struct amdgpu_vm *VAR_3 = (struct amdgpu_vm *)VAR_1;

 if (FUNC_0(!VAR_0 || !VAR_1))
                return;

        FUNC_3("Releasing process vm %p\n", VAR_1);







 FUNC_1(VAR_2, VAR_3);
}
