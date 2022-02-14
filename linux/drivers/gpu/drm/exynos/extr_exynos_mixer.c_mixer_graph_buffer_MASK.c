
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
struct mixer_context {int reg_slock; } ;
struct TYPE_10__ {int normalized_zpos; unsigned int pixel_blend_mode; int alpha; struct drm_framebuffer* fb; } ;
struct TYPE_9__ {int x; int y; int h; int w; } ;
struct TYPE_7__ {unsigned int x; unsigned int y; } ;
struct exynos_drm_plane_state {int h_ratio; int v_ratio; TYPE_5__ base; TYPE_4__ src; TYPE_2__ crtc; } ;
struct TYPE_6__ {int state; } ;
struct exynos_drm_plane {unsigned int index; TYPE_1__ base; } ;
struct drm_framebuffer {int* pitches; TYPE_3__* format; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int format; int* cpp; scalar_t__ has_alpha; } ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int VAR_5 ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct drm_framebuffer*,int ) ;
 int FUNC_13 (struct mixer_context*,unsigned int,unsigned int,int ) ;
 int FUNC_14 (struct mixer_context*,unsigned int,unsigned int,int) ;
 int FUNC_15 (struct mixer_context*,int ,int) ;
 int FUNC_16 (struct mixer_context*,int ,int ,int ) ;
 int FUNC_17 (struct mixer_context*) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 struct exynos_drm_plane_state* FUNC_20 (int ) ;

__attribute__((used)) static void FUNC_21(struct mixer_context *VAR_6,
          struct exynos_drm_plane *VAR_7)
{
 struct exynos_drm_plane_state *VAR_8 =
    FUNC_20(VAR_7->base.state);
 struct drm_framebuffer *VAR_9 = VAR_8->base.fb;
 unsigned int VAR_10 = VAR_8->base.normalized_zpos + 1;
 unsigned long VAR_11;
 unsigned int VAR_12 = VAR_7->index;
 unsigned int VAR_13 = 0, VAR_14 = 0;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17;
 dma_addr_t VAR_18;
 unsigned int VAR_19;
 u32 VAR_20;

 if (VAR_9->format->has_alpha)
  VAR_17 = VAR_8->base.pixel_blend_mode;
 else
  VAR_17 = VAR_0;

 switch (VAR_9->format->format) {
 case 129:
 case 133:
  VAR_19 = VAR_2;
  break;

 case 130:
 case 134:
  VAR_19 = VAR_1;
  break;

 case 131:
  VAR_19 = VAR_4;
  break;

 case 128:
 case 132:
 default:
  VAR_19 = VAR_3;
  break;
 }


 VAR_13 = VAR_8->h_ratio == (1 << 15);
 VAR_14 = VAR_8->v_ratio == (1 << 15);

 VAR_15 = VAR_8->crtc.x;
 VAR_16 = VAR_8->crtc.y;


 VAR_18 = FUNC_12(VAR_9, 0)
  + (VAR_8->src.x * VAR_9->format->cpp[0])
  + (VAR_8->src.y * VAR_9->pitches[0]);

 FUNC_18(&VAR_6->reg_slock, VAR_11);


 FUNC_16(VAR_6, FUNC_1(VAR_12),
  FUNC_5(VAR_19), VAR_5);


 FUNC_15(VAR_6, FUNC_3(VAR_12),
   VAR_9->pitches[0] / VAR_9->format->cpp[0]);

 VAR_20 = FUNC_11(VAR_8->src.w);
 VAR_20 |= FUNC_8(VAR_8->src.h);
 VAR_20 |= FUNC_9(VAR_13);
 VAR_20 |= FUNC_10(VAR_14);
 FUNC_15(VAR_6, FUNC_4(VAR_12), VAR_20);


 VAR_20 = FUNC_6(VAR_15);
 VAR_20 |= FUNC_7(VAR_16);
 FUNC_15(VAR_6, FUNC_2(VAR_12), VAR_20);


 FUNC_15(VAR_6, FUNC_0(VAR_12), VAR_18);

 FUNC_14(VAR_6, VAR_12, VAR_10, 1);
 FUNC_13(VAR_6, VAR_12, VAR_17, VAR_8->base.alpha);

 FUNC_19(&VAR_6->reg_slock, VAR_11);

 FUNC_17(VAR_6);
}
