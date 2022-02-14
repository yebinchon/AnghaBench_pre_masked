
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int resv; } ;
struct dma_fence {int dummy; } ;


 struct dma_fence* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct drm_gem_object **VAR_0,
        int VAR_1,
        struct dma_fence **VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2[VAR_3] = FUNC_0(VAR_0[VAR_3]->resv);
}
