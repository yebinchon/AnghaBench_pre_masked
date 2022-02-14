
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {unsigned int w; unsigned int h; unsigned int x; unsigned int y; } ;
struct TYPE_9__ {unsigned long x; unsigned long y; } ;
struct TYPE_7__ {struct drm_framebuffer* fb; } ;
struct exynos_drm_plane_state {TYPE_5__ crtc; TYPE_4__ src; TYPE_2__ base; } ;
struct TYPE_6__ {int state; } ;
struct exynos_drm_plane {unsigned int index; TYPE_1__ base; } ;
struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct drm_framebuffer {unsigned int* pitches; unsigned int width; unsigned long height; TYPE_3__* format; } ;
struct decon_context {scalar_t__ regs; int dev; scalar_t__ suspended; } ;
struct TYPE_8__ {unsigned int* cpp; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 unsigned long FUNC_5 (unsigned int) ;
 unsigned long FUNC_6 (unsigned int) ;
 unsigned long FUNC_7 (unsigned int) ;
 unsigned long FUNC_8 (unsigned int) ;
 unsigned long FUNC_9 (int) ;
 unsigned long FUNC_10 (int) ;
 unsigned long FUNC_11 (int) ;
 unsigned long FUNC_12 (int) ;
 unsigned long FUNC_13 (int) ;
 unsigned long FUNC_14 (int) ;
 scalar_t__ FUNC_15 (unsigned int) ;
 scalar_t__ FUNC_16 (unsigned int) ;
 scalar_t__ FUNC_17 (unsigned int) ;
 scalar_t__ FUNC_18 (unsigned int) ;
 scalar_t__ FUNC_19 (unsigned int) ;
 scalar_t__ FUNC_20 (unsigned int) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_21 (struct decon_context*,unsigned int,int) ;
 int FUNC_22 (struct decon_context*,unsigned int) ;
 int FUNC_23 (struct decon_context*,unsigned int,struct drm_framebuffer*) ;
 scalar_t__ FUNC_24 (struct drm_framebuffer*,int ) ;
 unsigned long FUNC_25 (scalar_t__) ;
 struct exynos_drm_plane_state* FUNC_26 (int ) ;
 int FUNC_27 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_28(struct exynos_drm_crtc *VAR_4,
          struct exynos_drm_plane *VAR_5)
{
 struct exynos_drm_plane_state *VAR_6 =
    FUNC_26(VAR_5->base.state);
 struct decon_context *VAR_7 = VAR_4->ctx;
 struct drm_framebuffer *VAR_8 = VAR_6->base.fb;
 int VAR_9;
 unsigned long VAR_10, VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14 = VAR_5->index;
 unsigned int VAR_15 = VAR_8->format->cpp[0];
 unsigned int VAR_16 = VAR_8->pitches[0];

 if (VAR_7->suspended)
  return;
 VAR_10 = (unsigned long)FUNC_24(VAR_8, 0);
 FUNC_27(VAR_10, VAR_7->regs + FUNC_15(VAR_14));

 VAR_9 = (VAR_16 / VAR_15) - VAR_8->width;


 FUNC_27(VAR_8->width + VAR_9, VAR_7->regs + FUNC_18(VAR_14));
 FUNC_27(VAR_8->height, VAR_7->regs + FUNC_19(VAR_14));


 FUNC_27(VAR_6->src.x, VAR_7->regs + FUNC_16(VAR_14));
 FUNC_27(VAR_6->src.y, VAR_7->regs + FUNC_17(VAR_14));

 FUNC_0(VAR_7->dev, "start addr = 0x%lx\n",
   (unsigned long)VAR_10);
 FUNC_0(VAR_7->dev, "ovl_width = %d, ovl_height = %d\n",
   VAR_6->crtc.w, VAR_6->crtc.h);

 VAR_10 = FUNC_5(VAR_6->crtc.x) |
  FUNC_6(VAR_6->crtc.y);
 FUNC_27(VAR_10, VAR_7->regs + FUNC_1(VAR_14));

 VAR_12 = VAR_6->crtc.x + VAR_6->crtc.w;
 if (VAR_12)
  VAR_12--;
 VAR_13 = VAR_6->crtc.y + VAR_6->crtc.h;
 if (VAR_13)
  VAR_13--;

 VAR_10 = FUNC_7(VAR_12) | FUNC_8(VAR_13);

 FUNC_27(VAR_10, VAR_7->regs + FUNC_2(VAR_14));

 FUNC_0(VAR_7->dev, "osd pos: tx = %d, ty = %d, bx = %d, by = %d\n",
   VAR_6->crtc.x, VAR_6->crtc.y, VAR_12, VAR_13);


 VAR_11 = FUNC_11(0x0) |
   FUNC_10(0x0) |
   FUNC_9(0x0);

 FUNC_27(VAR_11, VAR_7->regs + FUNC_3(VAR_14));

 VAR_11 = FUNC_14(0xff) |
   FUNC_13(0xff) |
   FUNC_12(0xff);

 FUNC_27(VAR_11, VAR_7->regs + FUNC_4(VAR_14));

 FUNC_23(VAR_7, VAR_14, VAR_8);


 if (VAR_14 != 0)
  FUNC_22(VAR_7, VAR_14);


 VAR_10 = FUNC_25(VAR_7->regs + FUNC_20(VAR_14));
 VAR_10 |= VAR_3;
 VAR_10 |= VAR_2;
 FUNC_27(VAR_10, VAR_7->regs + FUNC_20(VAR_14));


 FUNC_21(VAR_7, VAR_14, 0);

 VAR_10 = FUNC_25(VAR_7->regs + VAR_0);
 VAR_10 |= VAR_1;
 FUNC_27(VAR_10, VAR_7->regs + VAR_0);
}
