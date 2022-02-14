
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int vscan; int flags; } ;
struct drm_crtc {int dummy; } ;
struct armada_crtc {TYPE_1__* variant; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int has_spu_adv_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 struct armada_crtc* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static enum drm_mode_status FUNC_1(struct drm_crtc *VAR_12,
 const struct drm_display_mode *VAR_13)
{
 struct armada_crtc *VAR_14 = FUNC_0(VAR_12);

 if (VAR_13->vscan > 1)
  return VAR_10;

 if (VAR_13->flags & VAR_2)
  return VAR_8;

 if (VAR_13->flags & VAR_3)
  return VAR_7;


 if (!VAR_14->variant->has_spu_adv_reg &&
     VAR_13->flags & VAR_4)
  return VAR_9;

 if (VAR_13->flags & (VAR_0 | VAR_5 |
      VAR_1))
  return VAR_6;

 return VAR_11;
}
