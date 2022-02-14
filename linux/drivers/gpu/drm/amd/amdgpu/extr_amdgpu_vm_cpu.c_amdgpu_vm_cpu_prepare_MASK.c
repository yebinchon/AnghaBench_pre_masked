
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct amdgpu_vm_update_params {TYPE_3__* vm; } ;
struct TYPE_4__ {int bo; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct TYPE_6__ {TYPE_2__ root; } ;


 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (struct dma_fence*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_vm_update_params *VAR_0, void *VAR_1,
     struct dma_fence *VAR_2)
{
 int VAR_3;




 VAR_3 = FUNC_0(VAR_0->vm->root.base.bo, VAR_1, 1);
 if (FUNC_2(VAR_3))
  return VAR_3;


 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_2, 1);
  if (FUNC_2(VAR_3))
   return VAR_3;
 }

 return 0;
}
