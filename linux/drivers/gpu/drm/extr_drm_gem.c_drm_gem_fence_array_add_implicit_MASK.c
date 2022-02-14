
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;
struct drm_gem_object {int resv; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*) ;
 struct dma_fence* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,unsigned int*,struct dma_fence***) ;
 int FUNC_3 (struct xarray*,struct dma_fence*) ;
 int FUNC_4 (struct dma_fence**) ;

int FUNC_5(struct xarray *VAR_0,
         struct drm_gem_object *VAR_1,
         bool VAR_2)
{
 int VAR_3;
 struct dma_fence **VAR_4;
 unsigned int VAR_5, VAR_6;

 if (!VAR_2) {
  struct dma_fence *VAR_7 =
   FUNC_1(VAR_1->resv);

  return FUNC_3(VAR_0, VAR_7);
 }

 VAR_3 = FUNC_2(VAR_1->resv, ((void*)0),
      &VAR_6, &VAR_4);
 if (VAR_3 || !VAR_6)
  return VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_3 = FUNC_3(VAR_0, VAR_4[VAR_5]);
  if (VAR_3)
   break;
 }

 for (; VAR_5 < VAR_6; VAR_5++)
  FUNC_0(VAR_4[VAR_5]);
 FUNC_4(VAR_4);
 return VAR_3;
}
