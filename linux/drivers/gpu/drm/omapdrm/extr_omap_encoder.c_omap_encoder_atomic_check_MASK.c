
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_encoder {int output; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct drm_crtc_state {int adjusted_mode; int mode; } ;
struct drm_connector_state {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *,int *) ;
 struct omap_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_3(struct drm_encoder *VAR_2,
         struct drm_crtc_state *VAR_3,
         struct drm_connector_state *VAR_4)
{
 struct omap_encoder *VAR_5 = FUNC_2(VAR_2);
 enum drm_mode_status VAR_6;

 VAR_6 = FUNC_1(VAR_5->output,
        &VAR_3->mode,
        &VAR_3->adjusted_mode);
 if (VAR_6 != VAR_1) {
  FUNC_0(VAR_2->dev->dev, "invalid timings: %d\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
