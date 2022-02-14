
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_4__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct amdgpu_device {TYPE_2__ mman; } ;
struct TYPE_3__ {int bdev; } ;
struct amdgpu_bo {struct amdgpu_bo* parent; TYPE_1__ tbo; } ;


 int FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (struct amdgpu_ring*,int ,int ,int ,int *,struct dma_fence**,int,int) ;
 struct amdgpu_device* FUNC_3 (int ) ;

int FUNC_4(struct amdgpu_bo *VAR_0, struct dma_fence **VAR_1)

{
 struct amdgpu_device *VAR_2 = FUNC_3(VAR_0->tbo.bdev);
 struct amdgpu_ring *VAR_3 = VAR_2->mman.buffer_funcs_ring;
 uint64_t VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = FUNC_0(VAR_0->parent);

 return FUNC_2(VAR_3, VAR_4, VAR_5,
      FUNC_1(VAR_0), ((void*)0), VAR_1,
      1, 0);
}
