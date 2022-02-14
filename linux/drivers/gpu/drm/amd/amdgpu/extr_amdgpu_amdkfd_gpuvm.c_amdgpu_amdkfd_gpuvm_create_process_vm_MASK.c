
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgd_dev {int dummy; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_vm*) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_vm*,int ,unsigned int) ;
 struct amdgpu_device* FUNC_2 (struct kgd_dev*) ;
 int FUNC_3 (struct amdgpu_vm*,void**,struct dma_fence**) ;
 int FUNC_4 (struct amdgpu_vm*) ;
 struct amdgpu_vm* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,int) ;

int FUNC_7(struct kgd_dev *VAR_3, unsigned int VAR_4,
       void **VAR_5, void **VAR_6,
       struct dma_fence **VAR_7)
{
 struct amdgpu_device *VAR_8 = FUNC_2(VAR_3);
 struct amdgpu_vm *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;


 VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_0, VAR_4);
 if (VAR_10) {
  FUNC_6("Failed init vm ret %d\n", VAR_10);
  goto amdgpu_vm_init_fail;
 }


 VAR_10 = FUNC_3(VAR_9, VAR_6, VAR_7);
 if (VAR_10)
  goto init_kfd_vm_fail;

 *VAR_5 = (void *) VAR_9;

 return 0;

init_kfd_vm_fail:
 FUNC_0(VAR_8, VAR_9);
amdgpu_vm_init_fail:
 FUNC_4(VAR_9);
 return VAR_10;
}
