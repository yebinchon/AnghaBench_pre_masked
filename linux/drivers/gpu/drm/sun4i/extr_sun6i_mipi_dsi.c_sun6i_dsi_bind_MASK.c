
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int possible_crtcs; } ;
struct sun6i_dsi {TYPE_1__ encoder; int connector; int panel; int dev; struct sun4i_drv* drv; } ;
struct sun4i_drv {int dummy; } ;
struct drm_device {struct sun4i_drv* dev_private; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 struct sun6i_dsi* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct drm_device*,int *,int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (struct drm_device*,TYPE_1__*,int *,int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct device *VAR_7, struct device *VAR_8,
    void *VAR_9)
{
 struct drm_device *VAR_10 = VAR_9;
 struct sun4i_drv *VAR_11 = VAR_10->dev_private;
 struct sun6i_dsi *VAR_12 = FUNC_2(VAR_7);
 int VAR_13;

 if (!VAR_12->panel)
  return -VAR_2;

 VAR_12->drv = VAR_11;

 FUNC_7(&VAR_12->encoder,
          &VAR_6);
 VAR_13 = FUNC_8(VAR_10,
          &VAR_12->encoder,
          &VAR_5,
          VAR_1,
          ((void*)0));
 if (VAR_13) {
  FUNC_1(VAR_12->dev, "Couldn't initialise the DSI encoder\n");
  return VAR_13;
 }
 VAR_12->encoder.possible_crtcs = FUNC_0(0);

 FUNC_4(&VAR_12->connector,
     &VAR_4);
 VAR_13 = FUNC_5(VAR_10, &VAR_12->connector,
     &VAR_3,
     VAR_0);
 if (VAR_13) {
  FUNC_1(VAR_12->dev,
   "Couldn't initialise the DSI connector\n");
  goto err_cleanup_connector;
 }

 FUNC_3(&VAR_12->connector, &VAR_12->encoder);
 FUNC_9(VAR_12->panel, &VAR_12->connector);

 return 0;

err_cleanup_connector:
 FUNC_6(&VAR_12->encoder);
 return VAR_13;
}
