
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct fimd_context {TYPE_4__* driver_data; struct exynos_drm_plane* planes; } ;
struct TYPE_7__ {unsigned int alpha; unsigned int pixel_blend_mode; } ;
struct exynos_drm_plane_state {TYPE_3__ base; } ;
struct TYPE_5__ {int state; } ;
struct exynos_drm_plane {TYPE_1__ base; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct TYPE_8__ {scalar_t__ has_limited_fmt; } ;
struct TYPE_6__ {int format; scalar_t__ has_alpha; } ;







 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct fimd_context*,int ,int ,int ) ;
 int FUNC_2 (struct fimd_context*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (struct fimd_context*,unsigned int,unsigned int,unsigned int) ;
 struct exynos_drm_plane_state* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct fimd_context *VAR_16, unsigned int VAR_17,
    struct drm_framebuffer *VAR_18, int VAR_19)
{
 struct exynos_drm_plane VAR_20 = VAR_16->planes[VAR_17];
 struct exynos_drm_plane_state *VAR_21 =
  FUNC_4(VAR_20.base.state);
 uint32_t VAR_22 = VAR_18->format->format;
 unsigned int VAR_23 = VAR_21->base.alpha;
 u32 VAR_24 = VAR_13;
 unsigned int VAR_25;

 if (VAR_18->format->has_alpha)
  VAR_25 = VAR_21->base.pixel_blend_mode;
 else
  VAR_25 = VAR_0;





 if (VAR_16->driver_data->has_limited_fmt && !VAR_17) {
  if (VAR_22 == 132)
   VAR_22 = 128;
 }

 switch (VAR_22) {
 case 131:
  VAR_24 |= VAR_5;
  VAR_24 |= VAR_10;
  VAR_24 |= VAR_12;
  break;
 case 129:
  VAR_24 |= VAR_2;
  VAR_24 |= VAR_14;
  VAR_24 |= VAR_8;
  break;
 case 130:
  VAR_24 |= VAR_3;
  VAR_24 |= VAR_14;
  VAR_24 |= VAR_8;
  break;
 case 128:
  VAR_24 |= VAR_4;
  VAR_24 |= VAR_15;
  VAR_24 |= VAR_8;
  break;
 case 132:
 default:
  VAR_24 |= VAR_6;
  VAR_24 |= VAR_15;
  VAR_24 |= VAR_8;
  break;
 }
 if (VAR_19 < VAR_1) {
  VAR_24 &= ~VAR_11;
  VAR_24 |= VAR_9;
 }
 FUNC_1(VAR_16, FUNC_0(VAR_17), ~VAR_7, VAR_24);


 if (VAR_17 != 0) {
  FUNC_3(VAR_16, VAR_17, VAR_23, VAR_25);
  FUNC_2(VAR_16, VAR_17, VAR_23, VAR_25);
 }
}
