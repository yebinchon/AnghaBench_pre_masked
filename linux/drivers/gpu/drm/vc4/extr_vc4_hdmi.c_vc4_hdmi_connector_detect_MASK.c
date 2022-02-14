
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_dev {TYPE_1__* hdmi; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {int hpd_active_low; int cec_adap; int ddc; scalar_t__ hpd_gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 struct vc4_dev* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_5(struct drm_connector *VAR_4, bool VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct vc4_dev *VAR_7 = FUNC_4(VAR_6);

 if (VAR_7->hdmi->hpd_gpio) {
  if (FUNC_3(VAR_7->hdmi->hpd_gpio) ^
      VAR_7->hdmi->hpd_active_low)
   return VAR_2;
  FUNC_1(VAR_7->hdmi->cec_adap);
  return VAR_3;
 }

 if (FUNC_2(VAR_7->hdmi->ddc))
  return VAR_2;

 if (FUNC_0(VAR_0) & VAR_1)
  return VAR_2;
 FUNC_1(VAR_7->hdmi->cec_adap);
 return VAR_3;
}
