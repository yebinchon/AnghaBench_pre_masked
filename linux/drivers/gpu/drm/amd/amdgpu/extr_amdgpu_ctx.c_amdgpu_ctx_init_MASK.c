
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct drm_sched_rq {int dummy; } ;
struct drm_file {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_13__ {struct drm_sched_rq* sched_rq; } ;
struct amdgpu_ring {TYPE_4__ sched; int adev; } ;
struct TYPE_12__ {unsigned int num_vcn_inst; int harvest_config; unsigned int num_enc_rings; TYPE_2__* inst; } ;
struct TYPE_18__ {TYPE_8__* inst; } ;
struct TYPE_10__ {struct amdgpu_ring* ring; } ;
struct TYPE_16__ {unsigned int num_instances; TYPE_6__* instance; } ;
struct TYPE_14__ {unsigned int num_compute_rings; struct amdgpu_ring* compute_ring; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_3__ vcn; TYPE_9__ uvd; TYPE_1__ vce; TYPE_7__ sdma; TYPE_5__ gfx; int vram_lost_counter; int gpu_reset_counter; } ;
struct amdgpu_ctx_entity {int sequence; int entity; struct amdgpu_ctx_entity* fences; } ;
struct amdgpu_ctx {int init_priority; struct amdgpu_ctx_entity* fences; struct amdgpu_ctx_entity** entities; int guilty; int override_priority; void* vram_lost_counter; void* reset_counter; void* reset_counter_query; int lock; int ring_lock; int refcount; struct amdgpu_device* adev; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;
struct TYPE_17__ {struct amdgpu_ring* ring_enc; struct amdgpu_ring ring; } ;
struct TYPE_15__ {struct amdgpu_ring ring; } ;
struct TYPE_11__ {struct amdgpu_ring ring_jpeg; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring_dec; } ;





 unsigned int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_0 (struct drm_file*,int) ;
 unsigned int FUNC_1 () ;
 unsigned int VAR_8 ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct drm_sched_rq**,unsigned int,int *) ;
 void* FUNC_5 (unsigned int,int,int ) ;
 int FUNC_6 (struct amdgpu_ctx_entity*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct amdgpu_ctx*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_9,
      enum drm_sched_priority VAR_10,
      struct drm_file *VAR_11,
      struct amdgpu_ctx *VAR_12)
{
 unsigned VAR_13 = FUNC_1();
 unsigned VAR_14, VAR_15, VAR_16;
 int VAR_17;

 if (VAR_10 < 0 || VAR_10 >= VAR_2)
  return -VAR_4;

 VAR_17 = FUNC_0(VAR_11, VAR_10);
 if (VAR_17)
  return VAR_17;

 FUNC_8(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->adev = VAR_9;

 VAR_12->fences = FUNC_5(VAR_8 * VAR_13,
         sizeof(struct dma_fence*), VAR_6);
 if (!VAR_12->fences)
  return -VAR_5;

 VAR_12->entities[0] = FUNC_5(VAR_13,
       sizeof(struct amdgpu_ctx_entity),
       VAR_6);
 if (!VAR_12->entities[0]) {
  VAR_17 = -VAR_5;
  goto error_free_fences;
 }

 for (VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14) {
  struct amdgpu_ctx_entity *VAR_18 = &VAR_12->entities[0][VAR_14];

  VAR_18->sequence = 1;
  VAR_18->fences = &VAR_12->fences[VAR_8 * VAR_14];
 }
 for (VAR_14 = 1; VAR_14 < VAR_0; ++VAR_14)
  VAR_12->entities[VAR_14] = VAR_12->entities[VAR_14 - 1] +
   VAR_7[VAR_14 - 1];

 FUNC_7(&VAR_12->refcount);
 FUNC_10(&VAR_12->ring_lock);
 FUNC_9(&VAR_12->lock);

 VAR_12->reset_counter = FUNC_2(&VAR_9->gpu_reset_counter);
 VAR_12->reset_counter_query = VAR_12->reset_counter;
 VAR_12->vram_lost_counter = FUNC_2(&VAR_9->vram_lost_counter);
 VAR_12->init_priority = VAR_10;
 VAR_12->override_priority = VAR_3;

 for (VAR_14 = 0; VAR_14 < VAR_0; ++VAR_14) {
  struct amdgpu_ring *VAR_19[VAR_1];
  struct drm_sched_rq *VAR_20[VAR_1];
  unsigned VAR_21 = 0;
  unsigned VAR_22 = 0;

  switch (VAR_14) {
  case 134:
   VAR_19[0] = &VAR_9->gfx.gfx_ring[0];
   VAR_21 = 1;
   break;
  case 136:
   for (VAR_15 = 0; VAR_15 < VAR_9->gfx.num_compute_rings; ++VAR_15)
    VAR_19[VAR_15] = &VAR_9->gfx.compute_ring[VAR_15];
   VAR_21 = VAR_9->gfx.num_compute_rings;
   break;
  case 135:
   for (VAR_15 = 0; VAR_15 < VAR_9->sdma.num_instances; ++VAR_15)
    VAR_19[VAR_15] = &VAR_9->sdma.instance[VAR_15].ring;
   VAR_21 = VAR_9->sdma.num_instances;
   break;
  case 133:
   VAR_19[0] = &VAR_9->uvd.inst[0].ring;
   VAR_21 = 1;
   break;
  case 131:
   VAR_19[0] = &VAR_9->vce.ring[0];
   VAR_21 = 1;
   break;
  case 132:
   VAR_19[0] = &VAR_9->uvd.inst[0].ring_enc[0];
   VAR_21 = 1;
   break;
  case 130:
   for (VAR_15 = 0; VAR_15 < VAR_9->vcn.num_vcn_inst; ++VAR_15) {
    if (VAR_9->vcn.harvest_config & (1 << VAR_15))
     continue;
    VAR_19[VAR_21++] = &VAR_9->vcn.inst[VAR_15].ring_dec;
   }
   break;
  case 129:
   for (VAR_15 = 0; VAR_15 < VAR_9->vcn.num_vcn_inst; ++VAR_15) {
    if (VAR_9->vcn.harvest_config & (1 << VAR_15))
     continue;
    for (VAR_16 = 0; VAR_16 < VAR_9->vcn.num_enc_rings; ++VAR_16)
     VAR_19[VAR_21++] = &VAR_9->vcn.inst[VAR_15].ring_enc[VAR_16];
   }
   break;
  case 128:
   for (VAR_15 = 0; VAR_15 < VAR_9->vcn.num_vcn_inst; ++VAR_15) {
    if (VAR_9->vcn.harvest_config & (1 << VAR_15))
     continue;
    VAR_19[VAR_21++] = &VAR_9->vcn.inst[VAR_15].ring_jpeg;
   }
   break;
  }

  for (VAR_15 = 0; VAR_15 < VAR_21; ++VAR_15) {
   if (!VAR_19[VAR_15]->adev)
    continue;

   VAR_20[VAR_22++] = &VAR_19[VAR_15]->sched.sched_rq[VAR_10];
  }

  for (VAR_15 = 0; VAR_15 < VAR_7[VAR_14]; ++VAR_15)
   VAR_17 = FUNC_4(&VAR_12->entities[VAR_14][VAR_15].entity,
        VAR_20, VAR_22, &VAR_12->guilty);
  if (VAR_17)
   goto error_cleanup_entities;
 }

 return 0;

error_cleanup_entities:
 for (VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14)
  FUNC_3(&VAR_12->entities[0][VAR_14].entity);
 FUNC_6(VAR_12->entities[0]);

error_free_fences:
 FUNC_6(VAR_12->fences);
 VAR_12->fences = ((void*)0);
 return VAR_17;
}
