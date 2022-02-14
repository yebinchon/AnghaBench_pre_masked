
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct mixer_context {int reg_slock; int flags; } ;
struct TYPE_10__ {int normalized_zpos; int alpha; struct drm_framebuffer* fb; } ;
struct TYPE_9__ {int w; int x; int h; int y; } ;
struct TYPE_8__ {int w; int h; int y; int x; } ;
struct exynos_drm_plane_state {int h_ratio; int v_ratio; TYPE_5__ base; TYPE_4__ crtc; TYPE_3__ src; } ;
struct TYPE_6__ {int state; } ;
struct exynos_drm_plane {int index; TYPE_1__ base; } ;
struct drm_framebuffer {scalar_t__ modifier; int* pitches; int height; TYPE_2__* format; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {scalar_t__ format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (struct drm_framebuffer*,int) ;
 int FUNC_4 (struct mixer_context*,int ,unsigned int,int) ;
 int FUNC_5 (struct mixer_context*,int ) ;
 int FUNC_6 (struct mixer_context*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 struct exynos_drm_plane_state* FUNC_10 (int ) ;
 int FUNC_11 (struct mixer_context*,int ,int) ;
 int FUNC_12 (struct mixer_context*,int ,int ,int ) ;
 int FUNC_13 (struct mixer_context*) ;

__attribute__((used)) static void FUNC_14(struct mixer_context *VAR_28,
       struct exynos_drm_plane *VAR_29)
{
 struct exynos_drm_plane_state *VAR_30 =
    FUNC_10(VAR_29->base.state);
 struct drm_framebuffer *VAR_31 = VAR_30->base.fb;
 unsigned int VAR_32 = VAR_30->base.normalized_zpos + 1;
 unsigned long VAR_33;
 dma_addr_t VAR_34[2], VAR_35[2];
 bool VAR_36, VAR_37;
 u32 VAR_38;

 VAR_37 = (VAR_31->format->format == VAR_1);
 VAR_36 = (VAR_31->modifier == VAR_0);

 VAR_34[0] = FUNC_3(VAR_31, 0);
 VAR_35[0] = FUNC_3(VAR_31, 1);

 if (FUNC_9(VAR_2, &VAR_28->flags)) {
  if (VAR_36) {
   VAR_34[1] = VAR_34[0] + 0x40;
   VAR_35[1] = VAR_35[0] + 0x40;
  } else {
   VAR_34[1] = VAR_34[0] + VAR_31->pitches[0];
   VAR_35[1] = VAR_35[0] + VAR_31->pitches[1];
  }
 } else {
  VAR_34[1] = 0;
  VAR_35[1] = 0;
 }

 FUNC_7(&VAR_28->reg_slock, VAR_33);


 VAR_38 = (FUNC_9(VAR_2, &VAR_28->flags) ? ~0 : 0);
 FUNC_12(VAR_28, VAR_14, VAR_38, VAR_16);


 VAR_38 = (VAR_37 ? VAR_20 : VAR_19);
 VAR_38 |= (VAR_36 ? VAR_18 : VAR_17);
 FUNC_12(VAR_28, VAR_14, VAR_38, VAR_15);


 FUNC_11(VAR_28, VAR_13, FUNC_0(VAR_31->pitches[0]) |
  FUNC_1(VAR_31->height));

 FUNC_11(VAR_28, VAR_12, FUNC_0(VAR_31->pitches[1]) |
  FUNC_1(VAR_31->height / 2));

 FUNC_11(VAR_28, VAR_24, VAR_30->src.w);
 FUNC_11(VAR_28, VAR_22,
   FUNC_2(VAR_30->src.x));
 FUNC_11(VAR_28, VAR_8, VAR_30->crtc.w);
 FUNC_11(VAR_28, VAR_6, VAR_30->crtc.x);

 if (FUNC_9(VAR_2, &VAR_28->flags)) {
  FUNC_11(VAR_28, VAR_21, VAR_30->src.h / 2);
  FUNC_11(VAR_28, VAR_23, VAR_30->src.y / 2);
  FUNC_11(VAR_28, VAR_5, VAR_30->crtc.h / 2);
  FUNC_11(VAR_28, VAR_7, VAR_30->crtc.y / 2);
 } else {
  FUNC_11(VAR_28, VAR_21, VAR_30->src.h);
  FUNC_11(VAR_28, VAR_23, VAR_30->src.y);
  FUNC_11(VAR_28, VAR_5, VAR_30->crtc.h);
  FUNC_11(VAR_28, VAR_7, VAR_30->crtc.y);
 }

 FUNC_11(VAR_28, VAR_11, VAR_30->h_ratio);
 FUNC_11(VAR_28, VAR_27, VAR_30->v_ratio);

 FUNC_11(VAR_28, VAR_9, VAR_10);


 FUNC_11(VAR_28, VAR_26, VAR_34[0]);
 FUNC_11(VAR_28, VAR_4, VAR_34[1]);
 FUNC_11(VAR_28, VAR_25, VAR_35[0]);
 FUNC_11(VAR_28, VAR_3, VAR_35[1]);

 FUNC_4(VAR_28, VAR_29->index, VAR_32, 1);
 FUNC_5(VAR_28, VAR_30->base.alpha);

 FUNC_8(&VAR_28->reg_slock, VAR_33);

 FUNC_6(VAR_28);
 FUNC_13(VAR_28);
}
