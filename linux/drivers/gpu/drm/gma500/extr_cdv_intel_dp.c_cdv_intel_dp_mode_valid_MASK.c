
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct TYPE_6__ {int bpp; } ;
struct drm_psb_private {TYPE_3__ edp; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; int clock; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct cdv_intel_dp {TYPE_2__* panel_fixed_mode; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_5__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct TYPE_4__ {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct gma_encoder*) ;
 int FUNC_4 (struct gma_encoder*) ;
 struct gma_encoder* FUNC_5 (struct drm_connector*) ;
 scalar_t__ FUNC_6 (struct gma_encoder*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_7(struct drm_connector *VAR_4,
      struct drm_display_mode *VAR_5)
{
 struct gma_encoder *VAR_6 = FUNC_5(VAR_4);
 struct cdv_intel_dp *VAR_7 = VAR_6->dev_priv;
 int VAR_8 = FUNC_0(FUNC_4(VAR_6));
 int VAR_9 = FUNC_3(VAR_6);
 struct drm_psb_private *VAR_10 = VAR_4->dev->dev_private;

 if (FUNC_6(VAR_6) && VAR_7->panel_fixed_mode) {
  if (VAR_5->hdisplay > VAR_7->panel_fixed_mode->hdisplay)
   return VAR_3;
  if (VAR_5->vdisplay > VAR_7->panel_fixed_mode->vdisplay)
   return VAR_3;
 }



 if (!FUNC_6(VAR_6) &&
     (FUNC_1(VAR_5->clock, VAR_10->edp.bpp)
      > FUNC_2(VAR_8, VAR_9)))
  return VAR_0;

 if (FUNC_6(VAR_6)) {
     if (FUNC_1(VAR_5->clock, 24)
       > FUNC_2(VAR_8, VAR_9))
  return VAR_0;

 }
 if (VAR_5->clock < 10000)
  return VAR_1;

 return VAR_2;
}
