
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_sched_entity {TYPE_2__* rq; } ;
struct drm_amdgpu_cs_chunk_ib {scalar_t__ ip_type; int flags; int ib_bytes; int va_start; int ring; int ip_instance; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_ring {TYPE_4__* funcs; } ;
struct amdgpu_ib {int length_dw; int flags; int gpu_addr; } ;
struct amdgpu_fpriv {struct amdgpu_vm vm; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_cs_parser {int nchunks; struct drm_sched_entity* entity; int ctx; TYPE_3__* job; struct amdgpu_cs_chunk* chunks; TYPE_1__* filp; } ;
struct amdgpu_cs_chunk {scalar_t__ chunk_id; scalar_t__ kdata; } ;
struct TYPE_8__ {scalar_t__ no_user_fence; scalar_t__ parse_cs; } ;
struct TYPE_7__ {int num_ibs; scalar_t__ uf_addr; int preamble_status; struct amdgpu_ib* ibs; } ;
struct TYPE_6__ {int sched; } ;
struct TYPE_5__ {struct amdgpu_fpriv* driver_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int FUNC_1 (int ,scalar_t__,int ,int ,struct drm_sched_entity**) ;
 int FUNC_2 (int ,struct drm_sched_entity*) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_vm*,int,struct amdgpu_ib*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 struct amdgpu_ring* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_8,
        struct amdgpu_cs_parser *VAR_9)
{
 struct amdgpu_fpriv *VAR_10 = VAR_9->filp->driver_priv;
 struct amdgpu_vm *VAR_11 = &VAR_10->vm;
 int VAR_12, VAR_13 = 0, VAR_14 = 0;
 struct amdgpu_ring *VAR_15;
 int VAR_16, VAR_17;

 for (VAR_16 = 0, VAR_17 = 0; VAR_16 < VAR_9->nchunks && VAR_17 < VAR_9->job->num_ibs; VAR_16++) {
  struct amdgpu_cs_chunk *VAR_18;
  struct amdgpu_ib *VAR_19;
  struct drm_amdgpu_cs_chunk_ib *VAR_20;
  struct drm_sched_entity *VAR_21;

  VAR_18 = &VAR_9->chunks[VAR_16];
  VAR_19 = &VAR_9->job->ibs[VAR_17];
  VAR_20 = (struct drm_amdgpu_cs_chunk_ib *)VAR_18->kdata;

  if (VAR_18->chunk_id != VAR_0)
   continue;

  if (VAR_20->ip_type == VAR_1 &&
      (VAR_7 || FUNC_4(VAR_8))) {
   if (VAR_20->flags & VAR_4) {
    if (VAR_20->flags & VAR_2)
     VAR_13++;
    else
     VAR_14++;
   }


   if (VAR_13 > 1 || VAR_14 > 1)
    return -VAR_6;
  }

  VAR_12 = FUNC_1(VAR_9->ctx, VAR_20->ip_type,
       VAR_20->ip_instance, VAR_20->ring,
       &VAR_21);
  if (VAR_12)
   return VAR_12;

  if (VAR_20->flags & VAR_3)
   VAR_9->job->preamble_status |=
    VAR_5;

  if (VAR_9->entity && VAR_9->entity != VAR_21)
   return -VAR_6;

  VAR_9->entity = VAR_21;

  VAR_15 = FUNC_5(VAR_21->rq->sched);
  VAR_12 = FUNC_3(VAR_8, VAR_11, VAR_15->funcs->parse_cs ?
       VAR_20->ib_bytes : 0, VAR_19);
  if (VAR_12) {
   FUNC_0("Failed to get ib !\n");
   return VAR_12;
  }

  VAR_19->gpu_addr = VAR_20->va_start;
  VAR_19->length_dw = VAR_20->ib_bytes / 4;
  VAR_19->flags = VAR_20->flags;

  VAR_17++;
 }


 VAR_15 = FUNC_5(VAR_9->entity->rq->sched);
 if (VAR_9->job->uf_addr && VAR_15->funcs->no_user_fence)
  return -VAR_6;

 return FUNC_2(VAR_9->ctx, VAR_9->entity);
}
