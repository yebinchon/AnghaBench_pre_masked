
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_fence_context {scalar_t__ context; } ;
struct drm_gem_object {int resv; } ;
struct dma_resv_list {int shared_count; int * shared; } ;
struct dma_fence {scalar_t__ context; } ;


 int FUNC_0 (struct dma_fence*,int) ;
 struct dma_fence* FUNC_1 (int ) ;
 struct dma_resv_list* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct dma_fence* FUNC_4 (int ,int ) ;

int FUNC_5(struct drm_gem_object *VAR_0,
  struct msm_fence_context *VAR_1, bool VAR_2)
{
 struct dma_resv_list *VAR_3;
 struct dma_fence *VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = FUNC_2(VAR_0->resv);
 if (!VAR_3 || (VAR_3->shared_count == 0)) {
  VAR_4 = FUNC_1(VAR_0->resv);

  if (VAR_4 && (VAR_4->context != VAR_1->context)) {
   VAR_6 = FUNC_0(VAR_4, 1);
   if (VAR_6)
    return VAR_6;
  }
 }

 if (!VAR_2 || !VAR_3)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->shared_count; VAR_5++) {
  VAR_4 = FUNC_4(VAR_3->shared[VAR_5],
      FUNC_3(VAR_0->resv));
  if (VAR_4->context != VAR_1->context) {
   VAR_6 = FUNC_0(VAR_4, 1);
   if (VAR_6)
    return VAR_6;
  }
 }

 return 0;
}
