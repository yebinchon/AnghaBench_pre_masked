
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* primary; } ;
struct shmob_drm_crtc {scalar_t__* dma; TYPE_2__* format; struct drm_crtc crtc; } ;
struct drm_gem_cma_object {scalar_t__ paddr; } ;
struct drm_framebuffer {int* pitches; scalar_t__* offsets; } ;
struct TYPE_4__ {int bpp; scalar_t__ yuv; } ;
struct TYPE_3__ {struct drm_framebuffer* fb; } ;


 struct drm_gem_cma_object* FUNC_0 (struct drm_framebuffer*,int) ;

__attribute__((used)) static void FUNC_1(struct shmob_drm_crtc *VAR_0,
     int VAR_1, int VAR_2)
{
 struct drm_crtc *VAR_3 = &VAR_0->crtc;
 struct drm_framebuffer *VAR_4 = VAR_3->primary->fb;
 struct drm_gem_cma_object *VAR_5;
 unsigned int VAR_6;

 VAR_6 = VAR_0->format->yuv ? 8 : VAR_0->format->bpp;
 VAR_5 = FUNC_0(VAR_4, 0);
 VAR_0->dma[0] = VAR_5->paddr + VAR_4->offsets[0]
        + VAR_2 * VAR_4->pitches[0] + VAR_1 * VAR_6 / 8;

 if (VAR_0->format->yuv) {
  VAR_6 = VAR_0->format->bpp - 8;
  VAR_5 = FUNC_0(VAR_4, 1);
  VAR_0->dma[1] = VAR_5->paddr + VAR_4->offsets[1]
         + VAR_2 / (VAR_6 == 4 ? 2 : 1) * VAR_4->pitches[1]
         + VAR_1 * (VAR_6 == 16 ? 2 : 1);
 }
}
