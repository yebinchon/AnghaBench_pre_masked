
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_drm_private {int num_encoders; struct drm_encoder** encoders; } ;
struct mdp5_kms {struct drm_device* dev; } ;
struct mdp5_interface {int dummy; } ;
struct mdp5_ctl {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_2 (struct drm_device*,struct mdp5_interface*,struct mdp5_ctl*) ;

__attribute__((used)) static struct drm_encoder *FUNC_3(struct mdp5_kms *VAR_0,
          struct mdp5_interface *VAR_1,
          struct mdp5_ctl *VAR_2)
{
 struct drm_device *VAR_3 = VAR_0->dev;
 struct msm_drm_private *VAR_4 = VAR_3->dev_private;
 struct drm_encoder *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_2);
 if (FUNC_1(VAR_5)) {
  FUNC_0(VAR_3->dev, "failed to construct encoder\n");
  return VAR_5;
 }

 VAR_4->encoders[VAR_4->num_encoders++] = VAR_5;

 return VAR_5;
}
