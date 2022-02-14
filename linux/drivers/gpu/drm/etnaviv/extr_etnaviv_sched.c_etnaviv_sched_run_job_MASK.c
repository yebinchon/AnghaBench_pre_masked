
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct etnaviv_gem_submit {TYPE_3__* gpu; } ;
struct drm_sched_job {TYPE_2__* s_fence; } ;
struct dma_fence {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int error; } ;
struct TYPE_5__ {TYPE_1__ finished; } ;


 int FUNC_0 (int ,char*) ;
 struct dma_fence* FUNC_1 (struct etnaviv_gem_submit*) ;
 scalar_t__ FUNC_2 (int) ;
 struct etnaviv_gem_submit* FUNC_3 (struct drm_sched_job*) ;

__attribute__((used)) static struct dma_fence *FUNC_4(struct drm_sched_job *VAR_0)
{
 struct etnaviv_gem_submit *VAR_1 = FUNC_3(VAR_0);
 struct dma_fence *VAR_2 = ((void*)0);

 if (FUNC_2(!VAR_0->s_fence->finished.error))
  VAR_2 = FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1->gpu->dev, "skipping bad job\n");

 return VAR_2;
}
