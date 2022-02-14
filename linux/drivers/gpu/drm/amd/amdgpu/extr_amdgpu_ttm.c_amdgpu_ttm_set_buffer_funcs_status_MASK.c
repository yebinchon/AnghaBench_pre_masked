
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct ttm_mem_type_manager {int size; int * move; } ;
struct drm_sched_rq {int dummy; } ;
struct TYPE_6__ {struct drm_sched_rq* sched_rq; } ;
struct amdgpu_ring {TYPE_2__ sched; } ;
struct TYPE_5__ {struct ttm_mem_type_manager* man; } ;
struct TYPE_8__ {int buffer_funcs_enabled; int entity; struct amdgpu_ring* buffer_funcs_ring; int initialized; TYPE_1__ bdev; } ;
struct TYPE_7__ {int real_vram_size; int visible_vram_size; } ;
struct amdgpu_device {TYPE_4__ mman; TYPE_3__ gmc; scalar_t__ in_gpu_reset; } ;


 int FUNC_0 (char*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct drm_sched_rq**,int,int *) ;

void FUNC_4(struct amdgpu_device *VAR_3, bool VAR_4)
{
 struct ttm_mem_type_manager *VAR_5 = &VAR_3->mman.bdev.man[VAR_2];
 uint64_t VAR_6;
 int VAR_7;

 if (!VAR_3->mman.initialized || VAR_3->in_gpu_reset ||
     VAR_3->mman.buffer_funcs_enabled == VAR_4)
  return;

 if (VAR_4) {
  struct amdgpu_ring *VAR_8;
  struct drm_sched_rq *VAR_9;

  VAR_8 = VAR_3->mman.buffer_funcs_ring;
  VAR_9 = &VAR_8->sched.sched_rq[VAR_0];
  VAR_7 = FUNC_3(&VAR_3->mman.entity, &VAR_9, 1, ((void*)0));
  if (VAR_7) {
   FUNC_0("Failed setting up TTM BO move entity (%d)\n",
      VAR_7);
   return;
  }
 } else {
  FUNC_2(&VAR_3->mman.entity);
  FUNC_1(VAR_5->move);
  VAR_5->move = ((void*)0);
 }


 if (VAR_4)
  VAR_6 = VAR_3->gmc.real_vram_size;
 else
  VAR_6 = VAR_3->gmc.visible_vram_size;
 VAR_5->size = VAR_6 >> VAR_1;
 VAR_3->mman.buffer_funcs_enabled = VAR_4;
}
