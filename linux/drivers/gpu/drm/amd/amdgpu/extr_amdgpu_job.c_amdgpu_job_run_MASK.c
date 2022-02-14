
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_sched_job {int sched; } ;
struct dma_fence {scalar_t__ error; } ;
struct amdgpu_ring {TYPE_3__* adev; } ;
struct TYPE_5__ {TYPE_1__* s_fence; } ;
struct amdgpu_job {scalar_t__ vram_lost_counter; int fence; int ibs; int num_ibs; int sync; TYPE_2__ base; } ;
struct TYPE_6__ {int vram_lost_counter; } ;
struct TYPE_4__ {struct dma_fence finished; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 struct dma_fence* FUNC_3 (int) ;
 int FUNC_4 (struct amdgpu_ring*,int ,int ,struct amdgpu_job*,struct dma_fence**) ;
 int FUNC_5 (struct amdgpu_job*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct dma_fence*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct dma_fence*,int ) ;
 struct amdgpu_job* FUNC_11 (struct drm_sched_job*) ;
 struct amdgpu_ring* FUNC_12 (int ) ;
 int FUNC_13 (struct amdgpu_job*) ;

__attribute__((used)) static struct dma_fence *FUNC_14(struct drm_sched_job *VAR_1)
{
 struct amdgpu_ring *VAR_2 = FUNC_12(VAR_1->sched);
 struct dma_fence *VAR_3 = ((void*)0), *VAR_4;
 struct amdgpu_job *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_11(VAR_1);
 VAR_4 = &VAR_5->base.s_fence->finished;

 FUNC_0(FUNC_6(&VAR_5->sync, ((void*)0)));

 FUNC_13(VAR_5);

 if (VAR_5->vram_lost_counter != FUNC_7(&VAR_2->adev->vram_lost_counter))
  FUNC_10(VAR_4, -VAR_0);

 if (VAR_4->error < 0) {
  FUNC_2("Skip scheduling IBs!\n");
 } else {
  VAR_6 = FUNC_4(VAR_2, VAR_5->num_ibs, VAR_5->ibs, VAR_5,
           &VAR_3);
  if (VAR_6)
   FUNC_1("Error scheduling IBs (%d)\n", VAR_6);
 }

 FUNC_9(VAR_5->fence);
 VAR_5->fence = FUNC_8(VAR_3);

 FUNC_5(VAR_5);

 VAR_3 = VAR_6 ? FUNC_3(VAR_6) : VAR_3;
 return VAR_3;
}
