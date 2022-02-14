
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct amdgpu_vm_update_params {unsigned int num_dw_left; TYPE_6__* job; int adev; TYPE_2__* vm; } ;
struct TYPE_9__ {int resv; } ;
struct TYPE_10__ {TYPE_3__ base; } ;
struct amdgpu_bo {TYPE_4__ tbo; } ;
struct TYPE_12__ {int sync; } ;
struct TYPE_11__ {struct amdgpu_bo* bo; } ;
struct TYPE_7__ {TYPE_5__ base; } ;
struct TYPE_8__ {TYPE_1__ root; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int,TYPE_6__**) ;
 int FUNC_1 (int ,int *,struct dma_fence*,int) ;
 int FUNC_2 (int ,int *,int ,void*,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_vm_update_params *VAR_1,
      void *VAR_2, struct dma_fence *VAR_3)
{
 struct amdgpu_bo *VAR_4 = VAR_1->vm->root.base.bo;
 unsigned int VAR_5 = VAR_0;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1->adev, VAR_5 * 4, &VAR_1->job);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_1->adev, &VAR_1->job->sync, VAR_3, 0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_1->adev, &VAR_1->job->sync, VAR_4->tbo.base.resv,
        VAR_2, 0);
 if (VAR_6)
  return VAR_6;

 VAR_1->num_dw_left = VAR_5;
 return 0;
}
