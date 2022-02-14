
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sun4i_tcon {TYPE_2__* crtc; TYPE_1__* dev; } ;
struct drm_encoder {int possible_crtcs; } ;
struct sun4i_lvds {struct drm_encoder encoder; int connector; scalar_t__ panel; } ;
struct drm_device {int dev; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_4__ {int crtc; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 struct sun4i_lvds* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct drm_encoder*,struct drm_bridge*,int *) ;
 int FUNC_4 (int *,struct drm_encoder*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct drm_device*,int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct drm_encoder*) ;
 int FUNC_9 (struct drm_encoder*,int *) ;
 int FUNC_10 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_11 (int ,int,int ,scalar_t__*,struct drm_bridge**) ;
 int FUNC_12 (scalar_t__,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_13(struct drm_device *VAR_8, struct sun4i_tcon *VAR_9)
{
 struct drm_encoder *VAR_10;
 struct drm_bridge *VAR_11;
 struct sun4i_lvds *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_2(VAR_8->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;
 VAR_10 = &VAR_12->encoder;

 VAR_13 = FUNC_11(VAR_9->dev->of_node, 1, 0,
       &VAR_12->panel, &VAR_11);
 if (VAR_13) {
  FUNC_1(VAR_8->dev, "No panel or bridge found... LVDS output disabled\n");
  return 0;
 }

 FUNC_9(&VAR_12->encoder,
          &VAR_7);
 VAR_13 = FUNC_10(VAR_8,
          &VAR_12->encoder,
          &VAR_6,
          VAR_1,
          ((void*)0));
 if (VAR_13) {
  FUNC_0(VAR_8->dev, "Couldn't initialise the lvds encoder\n");
  goto err_out;
 }


 VAR_12->encoder.possible_crtcs = FUNC_7(&VAR_9->crtc->crtc);

 if (VAR_12->panel) {
  FUNC_5(&VAR_12->connector,
      &VAR_5);
  VAR_13 = FUNC_6(VAR_8, &VAR_12->connector,
      &VAR_4,
      VAR_0);
  if (VAR_13) {
   FUNC_0(VAR_8->dev, "Couldn't initialise the lvds connector\n");
   goto err_cleanup_connector;
  }

  FUNC_4(&VAR_12->connector,
        &VAR_12->encoder);

  VAR_13 = FUNC_12(VAR_12->panel, &VAR_12->connector);
  if (VAR_13) {
   FUNC_0(VAR_8->dev, "Couldn't attach our panel\n");
   goto err_cleanup_connector;
  }
 }

 if (VAR_11) {
  VAR_13 = FUNC_3(VAR_10, VAR_11, ((void*)0));
  if (VAR_13) {
   FUNC_0(VAR_8->dev, "Couldn't attach our bridge\n");
   goto err_cleanup_connector;
  }
 }

 return 0;

err_cleanup_connector:
 FUNC_8(&VAR_12->encoder);
err_out:
 return VAR_13;
}
