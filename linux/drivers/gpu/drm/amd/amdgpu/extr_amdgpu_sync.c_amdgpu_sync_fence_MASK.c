
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int context; } ;
struct amdgpu_sync_entry {int explicit; int fence; int node; } ;
struct amdgpu_sync {int fences; int last_vm_update; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct amdgpu_sync*,struct dma_fence*,int) ;
 scalar_t__ FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (int *,struct dma_fence*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,struct dma_fence*) ;
 int VAR_3 ;
 int FUNC_4 (struct dma_fence*) ;
 int FUNC_5 (int ,int *,int ) ;
 struct amdgpu_sync_entry* FUNC_6 (int ,int ) ;

int FUNC_7(struct amdgpu_device *VAR_4, struct amdgpu_sync *VAR_5,
        struct dma_fence *VAR_6, bool VAR_7)
{
 struct amdgpu_sync_entry *VAR_8;

 if (!VAR_6)
  return 0;
 if (FUNC_3(VAR_4, VAR_6) &&
     FUNC_1(VAR_6) == VAR_0)
  FUNC_2(&VAR_5->last_vm_update, VAR_6);

 if (FUNC_0(VAR_5, VAR_6, VAR_7))
  return 0;

 VAR_8 = FUNC_6(VAR_3, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->explicit = VAR_7;

 FUNC_5(VAR_5->fences, &VAR_8->node, VAR_6->context);
 VAR_8->fence = FUNC_4(VAR_6);
 return 0;
}
