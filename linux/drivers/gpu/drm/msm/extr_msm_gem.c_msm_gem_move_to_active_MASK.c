
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int active_list; } ;
struct msm_gem_object {scalar_t__ madv; int mm_list; struct msm_gpu* gpu; } ;
struct drm_gem_object {int resv; } ;
struct dma_fence {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct dma_fence*) ;
 int FUNC_2 (int ,struct dma_fence*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 struct msm_gem_object* FUNC_5 (struct drm_gem_object*) ;

void FUNC_6(struct drm_gem_object *VAR_1,
  struct msm_gpu *VAR_2, bool VAR_3, struct dma_fence *VAR_4)
{
 struct msm_gem_object *VAR_5 = FUNC_5(VAR_1);
 FUNC_0(VAR_5->madv != VAR_0);
 VAR_5->gpu = VAR_2;
 if (VAR_3)
  FUNC_1(VAR_1->resv, VAR_4);
 else
  FUNC_2(VAR_1->resv, VAR_4);
 FUNC_4(&VAR_5->mm_list);
 FUNC_3(&VAR_5->mm_list, &VAR_2->active_list);
}
