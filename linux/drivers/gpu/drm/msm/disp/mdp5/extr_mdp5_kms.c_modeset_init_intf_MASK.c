
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_drm_private {int * dsi; int hdmi; int edp; } ;
struct mdp5_kms {int cfg; struct mdp5_ctl_manager* ctlm; struct drm_device* dev; } ;
struct mdp5_interface {int type; int num; } ;
struct mdp5_ctl_manager {int dummy; } ;
struct mdp5_ctl {int dummy; } ;
struct mdp5_cfg_hw {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;



 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_4 (struct mdp5_kms*,struct mdp5_interface*,struct mdp5_ctl*) ;
 int FUNC_5 (struct mdp5_cfg_hw const*,int) ;
 struct mdp5_cfg_hw* FUNC_6 (int ) ;
 struct mdp5_ctl* FUNC_7 (struct mdp5_ctl_manager*,int) ;
 int FUNC_8 (int ,struct drm_device*,struct drm_encoder*) ;
 int FUNC_9 (int ,struct drm_device*,struct drm_encoder*) ;
 int FUNC_10 (int ,struct drm_device*,struct drm_encoder*) ;

__attribute__((used)) static int FUNC_11(struct mdp5_kms *VAR_1,
        struct mdp5_interface *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct msm_drm_private *VAR_4 = VAR_3->dev_private;
 struct mdp5_ctl_manager *VAR_5 = VAR_1->ctlm;
 struct mdp5_ctl *VAR_6;
 struct drm_encoder *VAR_7;
 int VAR_8 = 0;

 switch (VAR_2->type) {
 case 128:
  if (!VAR_4->edp)
   break;

  VAR_6 = FUNC_7(VAR_5, VAR_2->num);
  if (!VAR_6) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_6);
  if (FUNC_2(VAR_7)) {
   VAR_8 = FUNC_3(VAR_7);
   break;
  }

  VAR_8 = FUNC_9(VAR_4->edp, VAR_3, VAR_7);
  break;
 case 129:
  if (!VAR_4->hdmi)
   break;

  VAR_6 = FUNC_7(VAR_5, VAR_2->num);
  if (!VAR_6) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_6);
  if (FUNC_2(VAR_7)) {
   VAR_8 = FUNC_3(VAR_7);
   break;
  }

  VAR_8 = FUNC_10(VAR_4->hdmi, VAR_3, VAR_7);
  break;
 case 130:
 {
  const struct mdp5_cfg_hw *VAR_9 =
     FUNC_6(VAR_1->cfg);
  int VAR_10 = FUNC_5(VAR_9, VAR_2->num);

  if ((VAR_10 >= FUNC_0(VAR_4->dsi)) || (VAR_10 < 0)) {
   FUNC_1(VAR_3->dev, "failed to find dsi from intf %d\n",
    VAR_2->num);
   VAR_8 = -VAR_0;
   break;
  }

  if (!VAR_4->dsi[VAR_10])
   break;

  VAR_6 = FUNC_7(VAR_5, VAR_2->num);
  if (!VAR_6) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_6);
  if (FUNC_2(VAR_7)) {
   VAR_8 = FUNC_3(VAR_7);
   break;
  }

  VAR_8 = FUNC_8(VAR_4->dsi[VAR_10], VAR_3, VAR_7);
  break;
 }
 default:
  FUNC_1(VAR_3->dev, "unknown intf: %d\n", VAR_2->type);
  VAR_8 = -VAR_0;
  break;
 }

 return VAR_8;
}
