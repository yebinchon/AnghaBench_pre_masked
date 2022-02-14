
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_drm_private {int * dsi; int num_encoders; struct drm_encoder** encoders; int hdmi; int num_connectors; struct drm_encoder** connectors; } ;
struct mdp4_kms {struct drm_device* dev; } ;
struct drm_encoder {int possible_crtcs; } ;
struct drm_device {TYPE_1__* dev; struct msm_drm_private* dev_private; } ;
struct drm_connector {int possible_crtcs; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;



 int VAR_1 ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_3 (struct drm_device*) ;
 struct drm_encoder* FUNC_4 (struct drm_device*) ;
 struct drm_encoder* FUNC_5 (struct drm_device*,struct device_node*) ;
 struct drm_encoder* FUNC_6 (struct drm_device*,struct device_node*,struct drm_encoder*) ;
 int FUNC_7 (int ,struct drm_device*,struct drm_encoder*) ;
 int FUNC_8 (int ,struct drm_device*,struct drm_encoder*) ;
 struct device_node* FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct mdp4_kms *VAR_2,
      int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct msm_drm_private *VAR_5 = VAR_4->dev_private;
 struct drm_encoder *VAR_6;
 struct drm_connector *VAR_7;
 struct device_node *VAR_8;
 int VAR_9;
 int VAR_10;

 switch (VAR_3) {
 case 129:




  VAR_8 = FUNC_9(VAR_4->dev->of_node, 0, 0);
  if (!VAR_8)
   return 0;

  VAR_6 = FUNC_5(VAR_4, VAR_8);
  if (FUNC_1(VAR_6)) {
   FUNC_0(VAR_4->dev, "failed to construct LCDC encoder\n");
   return FUNC_2(VAR_6);
  }


  VAR_6->possible_crtcs = 1 << VAR_0;

  VAR_7 = FUNC_6(VAR_4, VAR_8, VAR_6);
  if (FUNC_1(VAR_7)) {
   FUNC_0(VAR_4->dev, "failed to initialize LVDS connector\n");
   return FUNC_2(VAR_7);
  }

  VAR_5->encoders[VAR_5->num_encoders++] = VAR_6;
  VAR_5->connectors[VAR_5->num_connectors++] = VAR_7;

  break;
 case 128:
  VAR_6 = FUNC_4(VAR_4);
  if (FUNC_1(VAR_6)) {
   FUNC_0(VAR_4->dev, "failed to construct DTV encoder\n");
   return FUNC_2(VAR_6);
  }


  VAR_6->possible_crtcs = 1 << 1;

  if (VAR_5->hdmi) {

   VAR_10 = FUNC_8(VAR_5->hdmi, VAR_4, VAR_6);
   if (VAR_10) {
    FUNC_0(VAR_4->dev, "failed to initialize HDMI: %d\n", VAR_10);
    return VAR_10;
   }
  }

  VAR_5->encoders[VAR_5->num_encoders++] = VAR_6;

  break;
 case 130:

  VAR_9 = 0;

  if (!VAR_5->dsi[VAR_9])
   break;

  VAR_6 = FUNC_3(VAR_4);
  if (FUNC_1(VAR_6)) {
   VAR_10 = FUNC_2(VAR_6);
   FUNC_0(VAR_4->dev,
    "failed to construct DSI encoder: %d\n", VAR_10);
   return VAR_10;
  }


  VAR_6->possible_crtcs = 1 << VAR_0;
  VAR_5->encoders[VAR_5->num_encoders++] = VAR_6;

  VAR_10 = FUNC_7(VAR_5->dsi[VAR_9], VAR_4, VAR_6);
  if (VAR_10) {
   FUNC_0(VAR_4->dev, "failed to initialize DSI: %d\n",
    VAR_10);
   return VAR_10;
  }

  break;
 default:
  FUNC_0(VAR_4->dev, "Invalid or unsupported interface\n");
  return -VAR_1;
 }

 return 0;
}
