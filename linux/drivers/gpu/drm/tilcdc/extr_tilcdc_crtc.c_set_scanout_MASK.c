
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct tilcdc_drm_private {int rev; } ;
struct drm_gem_cma_object {int paddr; } ;
struct drm_framebuffer {int* offsets; int* pitches; TYPE_1__* format; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;
struct TYPE_4__ {int vdisplay; } ;
struct drm_crtc {int y; int x; TYPE_2__ mode; struct drm_device* dev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int* cpp; } ;


 int VAR_0 ;
 struct drm_gem_cma_object* FUNC_0 (struct drm_framebuffer*,int ) ;
 int FUNC_1 (struct drm_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_1, struct drm_framebuffer *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct tilcdc_drm_private *VAR_4 = VAR_3->dev_private;
 struct drm_gem_cma_object *VAR_5;
 dma_addr_t VAR_6, VAR_7;
 u64 VAR_8;

 VAR_5 = FUNC_0(VAR_2, 0);

 VAR_6 = VAR_5->paddr + VAR_2->offsets[0] +
  VAR_1->y * VAR_2->pitches[0] +
  VAR_1->x * VAR_2->format->cpp[0];

 VAR_7 = VAR_6 + (VAR_1->mode.vdisplay * VAR_2->pitches[0]);






 if (VAR_4->rev == 1)
  VAR_7 -= 1;

 VAR_8 = (u64)VAR_7 << 32 | VAR_6;
 FUNC_1(VAR_3, VAR_0, VAR_8);
}
