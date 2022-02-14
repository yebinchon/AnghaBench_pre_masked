
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int resv; } ;
struct TYPE_3__ {scalar_t__ mem_type; int mm_node; } ;
struct ttm_buffer_object {TYPE_2__ base; TYPE_1__ mem; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_bo {int flags; scalar_t__ kfd_bo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (struct amdgpu_bo*,struct dma_fence*,int) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct amdgpu_bo*,int ,int ,struct dma_fence**) ;
 int FUNC_5 (struct dma_fence*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 struct amdgpu_bo* FUNC_8 (struct ttm_buffer_object*) ;

void FUNC_9(struct ttm_buffer_object *VAR_3)
{
 struct dma_fence *VAR_4 = ((void*)0);
 struct amdgpu_bo *VAR_5;
 int VAR_6;

 if (!FUNC_3(VAR_3))
  return;

 VAR_5 = FUNC_8(VAR_3);

 if (VAR_5->kfd_bo)
  FUNC_1(VAR_5);

 if (VAR_3->mem.mem_type != VAR_2 || !VAR_3->mem.mm_node ||
     !(VAR_5->flags & VAR_0))
  return;

 FUNC_6(VAR_3->base.resv, ((void*)0));

 VAR_6 = FUNC_4(VAR_5, VAR_1, VAR_3->base.resv, &VAR_4);
 if (!FUNC_0(VAR_6)) {
  FUNC_2(VAR_5, VAR_4, 0);
  FUNC_5(VAR_4);
 }

 FUNC_7(VAR_3->base.resv);
}
