
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shmob_drm_plane {scalar_t__* dma; TYPE_1__* format; } ;
struct drm_gem_cma_object {scalar_t__ paddr; } ;
struct drm_framebuffer {int* pitches; scalar_t__* offsets; } ;
struct TYPE_2__ {int bpp; scalar_t__ yuv; } ;


 struct drm_gem_cma_object* FUNC_0 (struct drm_framebuffer*,int) ;

__attribute__((used)) static void FUNC_1(struct shmob_drm_plane *VAR_0,
      struct drm_framebuffer *VAR_1,
      int VAR_2, int VAR_3)
{
 struct drm_gem_cma_object *VAR_4;
 unsigned int VAR_5;

 VAR_5 = VAR_0->format->yuv ? 8 : VAR_0->format->bpp;
 VAR_4 = FUNC_0(VAR_1, 0);
 VAR_0->dma[0] = VAR_4->paddr + VAR_1->offsets[0]
         + VAR_3 * VAR_1->pitches[0] + VAR_2 * VAR_5 / 8;

 if (VAR_0->format->yuv) {
  VAR_5 = VAR_0->format->bpp - 8;
  VAR_4 = FUNC_0(VAR_1, 1);
  VAR_0->dma[1] = VAR_4->paddr + VAR_1->offsets[1]
          + VAR_3 / (VAR_5 == 4 ? 2 : 1) * VAR_1->pitches[1]
          + VAR_2 * (VAR_5 == 16 ? 2 : 1);
 }
}
