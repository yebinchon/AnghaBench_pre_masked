
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_vm_update_params {int * pages_addr; struct amdgpu_vm* vm; struct amdgpu_device* adev; } ;
struct amdgpu_vm {TYPE_1__* update_funcs; } ;
struct amdgpu_device {int dummy; } ;
typedef int params ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* prepare ) (struct amdgpu_vm_update_params*,void*,struct dma_fence*) ;int (* commit ) (struct amdgpu_vm_update_params*,struct dma_fence**) ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_vm_update_params*,int,int,int,int) ;
 int FUNC_1 (struct amdgpu_vm_update_params*,int ,int) ;
 int FUNC_2 (struct amdgpu_vm_update_params*,void*,struct dma_fence*) ;
 int FUNC_3 (struct amdgpu_vm_update_params*,struct dma_fence**) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_3,
           struct dma_fence *VAR_4,
           dma_addr_t *VAR_5,
           struct amdgpu_vm *VAR_6,
           uint64_t VAR_7, uint64_t VAR_8,
           uint64_t VAR_9, uint64_t VAR_10,
           struct dma_fence **VAR_11)
{
 struct amdgpu_vm_update_params VAR_12;
 void *VAR_13 = VAR_1;
 int VAR_14;

 FUNC_1(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.adev = VAR_3;
 VAR_12.vm = VAR_6;
 VAR_12.pages_addr = VAR_5;


 if (!(VAR_9 & VAR_2))
  VAR_13 = VAR_0;

 VAR_14 = VAR_6->update_funcs->prepare(&VAR_12, VAR_13, VAR_4);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_0(&VAR_12, VAR_7, VAR_8 + 1, VAR_10, VAR_9);
 if (VAR_14)
  return VAR_14;

 return VAR_6->update_funcs->commit(&VAR_12, VAR_11);
}
