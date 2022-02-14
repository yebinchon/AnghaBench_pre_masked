
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fimd_context {int win_updated; scalar_t__ i80_if; TYPE_6__* driver_data; int dev; scalar_t__ regs; scalar_t__ suspended; } ;
struct TYPE_11__ {unsigned int x; unsigned int y; int w; } ;
struct TYPE_10__ {unsigned int h; unsigned int w; unsigned int x; unsigned int y; } ;
struct TYPE_8__ {struct drm_framebuffer* fb; } ;
struct exynos_drm_plane_state {TYPE_5__ src; TYPE_4__ crtc; TYPE_2__ base; } ;
struct TYPE_7__ {int state; } ;
struct exynos_drm_plane {unsigned int index; TYPE_1__ base; } ;
struct exynos_drm_crtc {struct fimd_context* ctx; } ;
struct drm_framebuffer {unsigned int* pitches; TYPE_3__* format; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_12__ {scalar_t__ has_shadowcon; } ;
struct TYPE_9__ {unsigned int* cpp; } ;


 int FUNC_0 (int ,char*,unsigned int,...) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 unsigned long FUNC_5 (unsigned int) ;
 unsigned long FUNC_6 (unsigned int) ;
 unsigned long FUNC_7 (unsigned int) ;
 unsigned long FUNC_8 (unsigned int) ;
 unsigned long FUNC_9 (unsigned int) ;
 unsigned long FUNC_10 (unsigned int) ;
 unsigned long FUNC_11 (unsigned int) ;
 unsigned long FUNC_12 (unsigned int) ;
 unsigned long FUNC_13 (unsigned int) ;
 unsigned long FUNC_14 (unsigned int) ;
 unsigned long FUNC_15 (unsigned int) ;
 unsigned long FUNC_16 (unsigned int) ;
 scalar_t__ FUNC_17 (unsigned int,int ) ;
 scalar_t__ FUNC_18 (unsigned int,int ) ;
 scalar_t__ FUNC_19 (unsigned int,int ) ;
 int FUNC_20 (int *,int) ;
 scalar_t__ FUNC_21 (struct drm_framebuffer*,int ) ;
 int FUNC_22 (struct fimd_context*,unsigned int,int) ;
 int FUNC_23 (struct fimd_context*,unsigned int,int) ;
 int FUNC_24 (struct fimd_context*,unsigned int) ;
 int FUNC_25 (struct fimd_context*,unsigned int,struct drm_framebuffer*,int ) ;
 struct exynos_drm_plane_state* FUNC_26 (int ) ;
 int FUNC_27 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_28(struct exynos_drm_crtc *VAR_0,
         struct exynos_drm_plane *VAR_1)
{
 struct exynos_drm_plane_state *VAR_2 =
    FUNC_26(VAR_1->base.state);
 struct fimd_context *VAR_3 = VAR_0->ctx;
 struct drm_framebuffer *VAR_4 = VAR_2->base.fb;
 dma_addr_t VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13 = VAR_1->index;
 unsigned int VAR_14 = VAR_4->format->cpp[0];
 unsigned int VAR_15 = VAR_4->pitches[0];

 if (VAR_3->suspended)
  return;

 VAR_8 = VAR_2->src.x * VAR_14;
 VAR_8 += VAR_2->src.y * VAR_15;


 VAR_5 = FUNC_21(VAR_4, 0) + VAR_8;
 VAR_6 = (unsigned long)VAR_5;
 FUNC_27(VAR_6, VAR_3->regs + FUNC_19(VAR_13, 0));


 VAR_7 = VAR_15 * VAR_2->crtc.h;
 VAR_6 = (unsigned long)(VAR_5 + VAR_7);
 FUNC_27(VAR_6, VAR_3->regs + FUNC_17(VAR_13, 0));

 FUNC_0(VAR_3->dev,
     "start addr = 0x%lx, end addr = 0x%lx, size = 0x%lx\n",
     (unsigned long)VAR_5, VAR_6, VAR_7);
 FUNC_0(VAR_3->dev, "ovl_width = %d, ovl_height = %d\n",
     VAR_2->crtc.w, VAR_2->crtc.h);


 VAR_11 = VAR_15 - (VAR_2->crtc.w * VAR_14);
 VAR_12 = VAR_2->crtc.w * VAR_14;
 VAR_6 = FUNC_13(VAR_11) |
  FUNC_15(VAR_12) |
  FUNC_14(VAR_11) |
  FUNC_16(VAR_12);
 FUNC_27(VAR_6, VAR_3->regs + FUNC_18(VAR_13, 0));


 VAR_6 = FUNC_5(VAR_2->crtc.x) |
  FUNC_7(VAR_2->crtc.y) |
  FUNC_6(VAR_2->crtc.x) |
  FUNC_8(VAR_2->crtc.y);
 FUNC_27(VAR_6, VAR_3->regs + FUNC_1(VAR_13));

 VAR_9 = VAR_2->crtc.x + VAR_2->crtc.w;
 if (VAR_9)
  VAR_9--;
 VAR_10 = VAR_2->crtc.y + VAR_2->crtc.h;
 if (VAR_10)
  VAR_10--;

 VAR_6 = FUNC_9(VAR_9) | FUNC_11(VAR_10) |
  FUNC_10(VAR_9) | FUNC_12(VAR_10);

 FUNC_27(VAR_6, VAR_3->regs + FUNC_2(VAR_13));

 FUNC_0(VAR_3->dev,
     "osd pos: tx = %d, ty = %d, bx = %d, by = %d\n",
     VAR_2->crtc.x, VAR_2->crtc.y, VAR_9, VAR_10);


 if (VAR_13 != 3 && VAR_13 != 4) {
  u32 VAR_16 = FUNC_4(VAR_13);
  if (VAR_13 == 0)
   VAR_16 = FUNC_3(VAR_13);
  VAR_6 = VAR_2->crtc.w * VAR_2->crtc.h;
  FUNC_27(VAR_6, VAR_3->regs + VAR_16);

  FUNC_0(VAR_3->dev, "osd size = 0x%x\n",
      (unsigned int)VAR_6);
 }

 FUNC_25(VAR_3, VAR_13, VAR_4, VAR_2->src.w);


 if (VAR_13 != 0)
  FUNC_24(VAR_3, VAR_13);

 FUNC_23(VAR_3, VAR_13, 1);

 if (VAR_3->driver_data->has_shadowcon)
  FUNC_22(VAR_3, VAR_13, 1);

 if (VAR_3->i80_if)
  FUNC_20(&VAR_3->win_updated, 1);
}
