
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_fb_helper {int * fbdev; int * dev; int preferred_bpp; scalar_t__ funcs; } ;
struct TYPE_2__ {int num_connector; } ;
struct drm_device {int dev; TYPE_1__ mode_config; scalar_t__ fb_helper; } ;
struct drm_client_dev {struct drm_device* dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct drm_device*) ;
 struct drm_fb_helper* FUNC_3 (struct drm_client_dev*) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct drm_device*,struct drm_fb_helper*,int ) ;
 int FUNC_6 (struct drm_fb_helper*,int ) ;
 int FUNC_7 (struct drm_device*,struct drm_fb_helper*,int *) ;
 int FUNC_8 (struct drm_fb_helper*) ;
 int FUNC_9 (struct drm_device*) ;

__attribute__((used)) static int FUNC_10(struct drm_client_dev *VAR_1)
{
 struct drm_fb_helper *VAR_2 = FUNC_3(VAR_1);
 struct drm_device *VAR_3 = VAR_1->dev;
 int VAR_4;


 if (!VAR_2->dev && VAR_2->funcs)
  return 0;

 if (VAR_3->fb_helper)
  return FUNC_4(VAR_3->fb_helper);

 if (!VAR_3->mode_config.num_connector) {
  FUNC_0(VAR_3->dev, "No connectors found, will not create framebuffer!\n");
  return 0;
 }

 FUNC_7(VAR_3, VAR_2, &VAR_0);

 VAR_4 = FUNC_5(VAR_3, VAR_2, 0);
 if (VAR_4)
  goto err;

 if (!FUNC_2(VAR_3))
  FUNC_9(VAR_3);

 VAR_4 = FUNC_6(VAR_2, VAR_2->preferred_bpp);
 if (VAR_4)
  goto err_cleanup;

 return 0;

err_cleanup:
 FUNC_8(VAR_2);
err:
 VAR_2->dev = ((void*)0);
 VAR_2->fbdev = ((void*)0);

 FUNC_1(VAR_3->dev, "fbdev: Failed to setup generic emulation (ret=%d)\n", VAR_4);

 return VAR_4;
}
