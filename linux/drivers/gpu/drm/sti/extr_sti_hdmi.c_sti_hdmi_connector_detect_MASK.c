
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hdmi_connector {struct sti_hdmi* hdmi; } ;
struct sti_hdmi {int notifier; scalar_t__ hpd; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sti_hdmi_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_3(struct drm_connector *VAR_3, bool VAR_4)
{
 struct sti_hdmi_connector *VAR_5
  = FUNC_2(VAR_3);
 struct sti_hdmi *VAR_6 = VAR_5->hdmi;

 FUNC_0("\n");

 if (VAR_6->hpd) {
  FUNC_0("hdmi cable connected\n");
  return VAR_1;
 }

 FUNC_0("hdmi cable disconnected\n");
 FUNC_1(VAR_6->notifier, VAR_0);
 return VAR_2;
}
