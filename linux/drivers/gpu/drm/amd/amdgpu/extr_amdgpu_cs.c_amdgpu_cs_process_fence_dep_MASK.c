
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_sched_fence {int scheduled; } ;
struct drm_sched_entity {int dummy; } ;
struct drm_amdgpu_cs_chunk_dep {int handle; int ring; int ip_instance; int ip_type; int ctx_id; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_fpriv {int dummy; } ;
struct amdgpu_ctx {int dummy; } ;
struct amdgpu_cs_parser {TYPE_2__* job; int adev; TYPE_1__* filp; } ;
struct amdgpu_cs_chunk {int length_dw; scalar_t__ chunk_id; scalar_t__ kdata; } ;
struct TYPE_4__ {int sync; } ;
struct TYPE_3__ {struct amdgpu_fpriv* driver_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 struct amdgpu_ctx* FUNC_2 (struct amdgpu_fpriv*,int ) ;
 int FUNC_3 (struct amdgpu_ctx*,int ,int ,int ,struct drm_sched_entity**) ;
 struct dma_fence* FUNC_4 (struct amdgpu_ctx*,struct drm_sched_entity*,int ) ;
 int FUNC_5 (struct amdgpu_ctx*) ;
 int FUNC_6 (int ,int *,struct dma_fence*,int) ;
 struct dma_fence* FUNC_7 (int *) ;
 int FUNC_8 (struct dma_fence*) ;
 struct drm_sched_fence* FUNC_9 (struct dma_fence*) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_cs_parser *VAR_2,
           struct amdgpu_cs_chunk *VAR_3)
{
 struct amdgpu_fpriv *VAR_4 = VAR_2->filp->driver_priv;
 unsigned VAR_5;
 int VAR_6, VAR_7;
 struct drm_amdgpu_cs_chunk_dep *VAR_8;

 VAR_8 = (struct drm_amdgpu_cs_chunk_dep *)VAR_3->kdata;
 VAR_5 = VAR_3->length_dw * 4 /
  sizeof(struct drm_amdgpu_cs_chunk_dep);

 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
  struct amdgpu_ctx *VAR_9;
  struct drm_sched_entity *VAR_10;
  struct dma_fence *VAR_11;

  VAR_9 = FUNC_2(VAR_4, VAR_8[VAR_6].ctx_id);
  if (VAR_9 == ((void*)0))
   return -VAR_1;

  VAR_7 = FUNC_3(VAR_9, VAR_8[VAR_6].ip_type,
       VAR_8[VAR_6].ip_instance,
       VAR_8[VAR_6].ring, &VAR_10);
  if (VAR_7) {
   FUNC_5(VAR_9);
   return VAR_7;
  }

  VAR_11 = FUNC_4(VAR_9, VAR_10, VAR_8[VAR_6].handle);
  FUNC_5(VAR_9);

  if (FUNC_0(VAR_11))
   return FUNC_1(VAR_11);
  else if (!VAR_11)
   continue;

  if (VAR_3->chunk_id == VAR_0) {
   struct drm_sched_fence *VAR_12;
   struct dma_fence *VAR_13 = VAR_11;

   VAR_12 = FUNC_9(VAR_11);
   VAR_11 = FUNC_7(&VAR_12->scheduled);
   FUNC_8(VAR_13);
  }

  VAR_7 = FUNC_6(VAR_2->adev, &VAR_2->job->sync, VAR_11, 1);
  FUNC_8(VAR_11);
  if (VAR_7)
   return VAR_7;
 }
 return 0;
}
