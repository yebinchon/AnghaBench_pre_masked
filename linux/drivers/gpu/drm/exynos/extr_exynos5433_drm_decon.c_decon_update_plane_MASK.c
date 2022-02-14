
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_14__ {int y; unsigned int w; int h; scalar_t__ x; } ;
struct TYPE_13__ {unsigned int h; } ;
struct TYPE_9__ {struct drm_framebuffer* fb; } ;
struct exynos_drm_plane_state {TYPE_7__ crtc; TYPE_6__ src; TYPE_2__ base; } ;
struct TYPE_8__ {int state; } ;
struct exynos_drm_plane {unsigned int index; TYPE_1__ base; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_12__ {TYPE_4__ mode; } ;
struct exynos_drm_crtc {TYPE_5__ base; struct decon_context* ctx; } ;
struct drm_framebuffer {unsigned int* pitches; TYPE_3__* format; } ;
struct decon_context {int out_type; scalar_t__ addr; } ;
typedef unsigned int dma_addr_t ;
struct TYPE_10__ {unsigned int* cpp; } ;


 unsigned int FUNC_0 (unsigned int,int,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_11 (int) ;
 unsigned int FUNC_12 (int) ;
 unsigned int FUNC_13 (int) ;
 int VAR_2 ;
 int FUNC_14 (struct decon_context*,int ,int ,int ) ;
 int FUNC_15 (struct decon_context*,unsigned int,struct drm_framebuffer*) ;
 unsigned int FUNC_16 (struct drm_framebuffer*,int ) ;
 struct exynos_drm_plane_state* FUNC_17 (int ) ;
 int FUNC_18 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_19(struct exynos_drm_crtc *VAR_3,
          struct exynos_drm_plane *VAR_4)
{
 struct exynos_drm_plane_state *VAR_5 =
    FUNC_17(VAR_4->base.state);
 struct decon_context *VAR_6 = VAR_3->ctx;
 struct drm_framebuffer *VAR_7 = VAR_5->base.fb;
 unsigned int VAR_8 = VAR_4->index;
 unsigned int VAR_9 = VAR_7->format->cpp[0];
 unsigned int VAR_10 = VAR_7->pitches[0];
 dma_addr_t VAR_11 = FUNC_16(VAR_7, 0);
 u32 VAR_12;

 if (VAR_3->base.mode.flags & VAR_0) {
  VAR_12 = FUNC_1(VAR_5->crtc.x) |
   FUNC_2(VAR_5->crtc.y / 2);
  FUNC_18(VAR_12, VAR_6->addr + FUNC_3(VAR_8));

  VAR_12 = FUNC_1(VAR_5->crtc.x + VAR_5->crtc.w - 1) |
   FUNC_2((VAR_5->crtc.y + VAR_5->crtc.h) / 2 - 1);
  FUNC_18(VAR_12, VAR_6->addr + FUNC_4(VAR_8));
 } else {
  VAR_12 = FUNC_1(VAR_5->crtc.x) | FUNC_2(VAR_5->crtc.y);
  FUNC_18(VAR_12, VAR_6->addr + FUNC_3(VAR_8));

  VAR_12 = FUNC_1(VAR_5->crtc.x + VAR_5->crtc.w - 1) |
    FUNC_2(VAR_5->crtc.y + VAR_5->crtc.h - 1);
  FUNC_18(VAR_12, VAR_6->addr + FUNC_4(VAR_8));
 }

 VAR_12 = FUNC_13(0xff) | FUNC_12(0xff) |
  FUNC_11(0xff);
 FUNC_18(VAR_12, VAR_6->addr + FUNC_5(VAR_8));

 VAR_12 = FUNC_13(0x0) | FUNC_12(0x0) |
  FUNC_11(0x0);
 FUNC_18(VAR_12, VAR_6->addr + FUNC_6(VAR_8));

 FUNC_18(VAR_11, VAR_6->addr + FUNC_7(VAR_8));

 VAR_12 = VAR_11 + VAR_10 * VAR_5->src.h;
 FUNC_18(VAR_12, VAR_6->addr + FUNC_8(VAR_8));

 if (!(VAR_6->out_type & VAR_1))
  VAR_12 = FUNC_0(VAR_10 - VAR_5->crtc.w * VAR_9, 27, 14)
   | FUNC_0(VAR_5->crtc.w * VAR_9, 13, 0);
 else
  VAR_12 = FUNC_0(VAR_10 - VAR_5->crtc.w * VAR_9, 29, 15)
   | FUNC_0(VAR_5->crtc.w * VAR_9, 14, 0);
 FUNC_18(VAR_12, VAR_6->addr + FUNC_9(VAR_8));

 FUNC_15(VAR_6, VAR_8, VAR_7);


 FUNC_14(VAR_6, FUNC_10(VAR_8), VAR_2, ~0);
}
