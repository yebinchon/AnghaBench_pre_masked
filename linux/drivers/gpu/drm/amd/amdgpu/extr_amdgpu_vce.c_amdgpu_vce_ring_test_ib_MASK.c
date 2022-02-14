
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct amdgpu_ring {TYPE_2__* adev; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_3__ {struct amdgpu_ring* ring; } ;
struct TYPE_4__ {TYPE_1__ vce; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (TYPE_2__*,int,int ,int ,struct amdgpu_bo**,int *,int *) ;
 int FUNC_1 (struct amdgpu_bo**) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 long FUNC_3 (struct amdgpu_ring*,int,struct amdgpu_bo*,int *) ;
 long FUNC_4 (struct amdgpu_ring*,int,int,struct dma_fence**) ;
 int FUNC_5 (struct dma_fence*) ;
 long FUNC_6 (struct dma_fence*,int,long) ;

int FUNC_7(struct amdgpu_ring *VAR_3, long VAR_4)
{
 struct dma_fence *VAR_5 = ((void*)0);
 struct amdgpu_bo *VAR_6 = ((void*)0);
 long VAR_7;


 if (VAR_3 != &VAR_3->adev->vce.ring[0])
  return 0;

 VAR_7 = FUNC_0(VAR_3->adev, 512, VAR_2,
          VAR_0,
          &VAR_6, ((void*)0), ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_3, 1, VAR_6, ((void*)0));
 if (VAR_7)
  goto error;

 VAR_7 = FUNC_4(VAR_3, 1, 1, &VAR_5);
 if (VAR_7)
  goto error;

 VAR_7 = FUNC_6(VAR_5, 0, VAR_4);
 if (VAR_7 == 0)
  VAR_7 = -VAR_1;
 else if (VAR_7 > 0)
  VAR_7 = 0;

error:
 FUNC_5(VAR_5);
 FUNC_2(VAR_6);
 FUNC_1(&VAR_6);
 return VAR_7;
}
