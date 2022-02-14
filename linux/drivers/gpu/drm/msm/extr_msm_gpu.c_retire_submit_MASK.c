
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct msm_ringbuffer {TYPE_1__* memptrs; } ;
struct msm_gpu_submit_stats {int alwayson_end; int alwayson_start; int cpcycles_end; int cpcycles_start; } ;
struct msm_gpu {TYPE_3__* pdev; } ;
struct msm_gem_submit {int seqno; int nr_bos; int aspace; TYPE_2__* bos; } ;
struct msm_gem_object {int base; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct msm_gem_object* obj; } ;
struct TYPE_4__ {struct msm_gpu_submit_stats* stats; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct msm_gem_submit*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct msm_gem_submit*,int,int,int,int) ;

__attribute__((used)) static void FUNC_8(struct msm_gpu *VAR_1, struct msm_ringbuffer *VAR_2,
  struct msm_gem_submit *VAR_3)
{
 int VAR_4 = VAR_3->seqno % VAR_0;
 volatile struct msm_gpu_submit_stats *VAR_5;
 u64 VAR_6, VAR_7 = 0;
 int VAR_8;

 VAR_5 = &VAR_2->memptrs->stats[VAR_4];

 VAR_6 = (VAR_5->alwayson_end - VAR_5->alwayson_start) * 10000;
 FUNC_0(VAR_6, 192);


 if (VAR_6) {
  VAR_7 = (VAR_5->cpcycles_end - VAR_5->cpcycles_start) * 1000;
  FUNC_0(VAR_7, VAR_6);
 }

 FUNC_7(VAR_3, VAR_6, VAR_7,
  VAR_5->alwayson_start, VAR_5->alwayson_end);

 for (VAR_8 = 0; VAR_8 < VAR_3->nr_bos; VAR_8++) {
  struct msm_gem_object *VAR_9 = VAR_3->bos[VAR_8].obj;

  FUNC_2(&VAR_9->base);
  FUNC_4(&VAR_9->base, VAR_3->aspace);
  FUNC_1(&VAR_9->base);
 }

 FUNC_5(&VAR_1->pdev->dev);
 FUNC_6(&VAR_1->pdev->dev);
 FUNC_3(VAR_3);
}
