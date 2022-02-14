
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int alpha; unsigned int pixel_blend_mode; } ;
struct exynos_drm_plane_state {TYPE_2__ base; } ;
struct TYPE_4__ {int state; } ;
struct exynos_drm_plane {TYPE_1__ base; } ;
struct drm_framebuffer {scalar_t__ width; TYPE_3__* format; } ;
struct decon_context {int dev; scalar_t__ addr; struct exynos_drm_plane* planes; } ;
struct TYPE_6__ {int format; int * cpp; scalar_t__ has_alpha; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,int ) ;




 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_2 (struct decon_context*,scalar_t__,int ,unsigned long) ;
 int FUNC_3 (struct decon_context*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (struct decon_context*,unsigned int,unsigned int,unsigned int) ;
 unsigned long FUNC_5 (scalar_t__) ;
 struct exynos_drm_plane_state* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct decon_context *VAR_13, unsigned int VAR_14,
     struct drm_framebuffer *VAR_15)
{
 struct exynos_drm_plane VAR_16 = VAR_13->planes[VAR_14];
 struct exynos_drm_plane_state *VAR_17 =
  FUNC_6(VAR_16.base.state);
 unsigned int VAR_18 = VAR_17->base.alpha;
 unsigned int VAR_19;
 unsigned long VAR_20;

 if (VAR_15->format->has_alpha)
  VAR_19 = VAR_17->base.pixel_blend_mode;
 else
  VAR_19 = VAR_0;

 VAR_20 = FUNC_5(VAR_13->addr + FUNC_0(VAR_14));
 VAR_20 &= VAR_10;

 switch (VAR_15->format->format) {
 case 129:
  VAR_20 |= VAR_4;
  VAR_20 |= VAR_11;
  VAR_20 |= VAR_7;
  break;
 case 130:
  VAR_20 |= VAR_3;
  VAR_20 |= VAR_11;
  VAR_20 |= VAR_7;
  break;
 case 128:
  VAR_20 |= VAR_5;
  VAR_20 |= VAR_12;
  VAR_20 |= VAR_7;
  break;
 case 131:
 default:
  VAR_20 |= VAR_6;
  VAR_20 |= VAR_12;
  VAR_20 |= VAR_7;
  break;
 }

 FUNC_1(VAR_13->dev, "cpp = %u\n", VAR_15->format->cpp[0]);
 if (VAR_15->width < VAR_1) {
  VAR_20 &= ~VAR_9;
  VAR_20 |= VAR_8;
 }
 FUNC_2(VAR_13, FUNC_0(VAR_14), ~VAR_2, VAR_20);

 if (VAR_14 > 0) {
  FUNC_4(VAR_13, VAR_14, VAR_18, VAR_19);
  FUNC_3(VAR_13, VAR_14, VAR_18, VAR_19);
 }
}
