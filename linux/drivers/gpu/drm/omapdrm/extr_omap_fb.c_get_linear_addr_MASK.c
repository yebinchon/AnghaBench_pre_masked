
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct plane {scalar_t__ dma_addr; } ;
struct omap_framebuffer {struct plane* planes; } ;
struct drm_framebuffer {int* pitches; scalar_t__* offsets; } ;
struct drm_format_info {int* cpp; int hsub; int vsub; } ;


 struct omap_framebuffer* FUNC_0 (struct drm_framebuffer*) ;

__attribute__((used)) static u32 FUNC_1(struct drm_framebuffer *VAR_0,
  const struct drm_format_info *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct omap_framebuffer *VAR_5 = FUNC_0(VAR_0);
 struct plane *VAR_6 = &VAR_5->planes[VAR_2];
 u32 VAR_7;

 VAR_7 = VAR_0->offsets[VAR_2]
        + (VAR_3 * VAR_1->cpp[VAR_2] / (VAR_2 == 0 ? 1 : VAR_1->hsub))
        + (VAR_4 * VAR_0->pitches[VAR_2] / (VAR_2 == 0 ? 1 : VAR_1->vsub));

 return VAR_6->dma_addr + VAR_7;
}
