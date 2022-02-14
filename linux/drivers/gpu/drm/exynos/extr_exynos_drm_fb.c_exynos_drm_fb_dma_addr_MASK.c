
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_gem {scalar_t__ dma_addr; } ;
struct drm_framebuffer {scalar_t__* offsets; int * obj; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct exynos_drm_gem* FUNC_1 (int ) ;

dma_addr_t FUNC_2(struct drm_framebuffer *VAR_1, int VAR_2)
{
 struct exynos_drm_gem *VAR_3;

 if (FUNC_0(VAR_2 >= VAR_0))
  return 0;

 VAR_3 = FUNC_1(VAR_1->obj[VAR_2]);
 return VAR_3->dma_addr + VAR_1->offsets[VAR_2];
}
