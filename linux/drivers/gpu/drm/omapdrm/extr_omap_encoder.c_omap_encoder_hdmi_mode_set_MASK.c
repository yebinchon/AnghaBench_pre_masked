
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_encoder {struct omap_dss_device* output; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_3__ {int (* set_infoframe ) (struct omap_dss_device*,struct hdmi_avi_infoframe*) ;int (* set_hdmi_mode ) (struct omap_dss_device*,int) ;} ;
struct TYPE_4__ {TYPE_1__ hdmi; } ;


 int FUNC_0 (struct hdmi_avi_infoframe*,struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct omap_dss_device*,int) ;
 int FUNC_3 (struct omap_dss_device*,struct hdmi_avi_infoframe*) ;
 struct omap_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_0,
           struct drm_encoder *VAR_1,
           struct drm_display_mode *VAR_2)
{
 struct omap_encoder *VAR_3 = FUNC_4(VAR_1);
 struct omap_dss_device *VAR_4 = VAR_3->output;
 bool VAR_5;

 VAR_5 = FUNC_1(VAR_0);

 if (VAR_4->ops->hdmi.set_hdmi_mode)
  VAR_4->ops->hdmi.set_hdmi_mode(VAR_4, VAR_5);

 if (VAR_5 && VAR_4->ops->hdmi.set_infoframe) {
  struct hdmi_avi_infoframe VAR_6;
  int VAR_7;

  VAR_7 = FUNC_0(&VAR_6, VAR_0,
            VAR_2);
  if (VAR_7 == 0)
   VAR_4->ops->hdmi.set_infoframe(VAR_4, &VAR_6);
 }
}
