
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct oaktrail_hdmi_dev {int dummy; } ;
struct drm_psb_private {struct oaktrail_hdmi_dev* hdmi_priv; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum drm_connector_status
FUNC_2(struct drm_connector *VAR_4, bool VAR_5)
{
 enum drm_connector_status VAR_6;
 struct drm_device *VAR_7 = VAR_4->dev;
 struct drm_psb_private *VAR_8 = VAR_7->dev_private;
 struct oaktrail_hdmi_dev *VAR_9 = VAR_8->hdmi_priv;
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_1);
 FUNC_0("HDMI_HSR %x\n", VAR_10);

 if ((VAR_10 & VAR_0) != 0)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_3;

 return VAR_6;
}
