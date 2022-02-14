
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct etnaviv_gpu {void* hangcheck_dma_addr; int sched; } ;
struct etnaviv_gem_submit {int out_fence; struct etnaviv_gpu* gpu; } ;
struct drm_sched_job {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct drm_sched_job*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct drm_sched_job*) ;
 int FUNC_5 (struct etnaviv_gem_submit*) ;
 int FUNC_6 (struct etnaviv_gpu*) ;
 void* FUNC_7 (struct etnaviv_gpu*,int ) ;
 struct etnaviv_gem_submit* FUNC_8 (struct drm_sched_job*) ;

__attribute__((used)) static void FUNC_9(struct drm_sched_job *VAR_1)
{
 struct etnaviv_gem_submit *VAR_2 = FUNC_8(VAR_1);
 struct etnaviv_gpu *VAR_3 = VAR_2->gpu;
 u32 VAR_4;
 int VAR_5;





 if (FUNC_0(VAR_2->out_fence))
  return;






 VAR_4 = FUNC_7(VAR_3, VAR_0);
 VAR_5 = VAR_4 - VAR_3->hangcheck_dma_addr;
 if (VAR_5 < 0 || VAR_5 > 16) {
  VAR_3->hangcheck_dma_addr = VAR_4;
  return;
 }


 FUNC_4(&VAR_3->sched, VAR_1);

 if(VAR_1)
  FUNC_1(VAR_1);


 FUNC_5(VAR_2);
 FUNC_6(VAR_3);

 FUNC_2(&VAR_3->sched);


 FUNC_3(&VAR_3->sched, 1);
}
