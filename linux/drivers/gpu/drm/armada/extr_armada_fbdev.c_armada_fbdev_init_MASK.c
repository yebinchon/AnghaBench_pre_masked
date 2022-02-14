
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_fb_helper {int dummy; } ;
struct drm_device {int dev; struct armada_private* dev_private; } ;
struct armada_private {struct drm_fb_helper* fbdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_fb_helper* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct drm_fb_helper*) ;
 int FUNC_3 (struct drm_device*,struct drm_fb_helper*,int) ;
 int FUNC_4 (struct drm_fb_helper*,int) ;
 int FUNC_5 (struct drm_device*,struct drm_fb_helper*,int *) ;
 int FUNC_6 (struct drm_fb_helper*) ;

int FUNC_7(struct drm_device *VAR_3)
{
 struct armada_private *VAR_4 = VAR_3->dev_private;
 struct drm_fb_helper *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->fbdev = VAR_5;

 FUNC_5(VAR_3, VAR_5, &VAR_2);

 VAR_6 = FUNC_3(VAR_3, VAR_5, 1);
 if (VAR_6) {
  FUNC_0("failed to initialize drm fb helper\n");
  goto err_fb_helper;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6) {
  FUNC_0("failed to add fb connectors\n");
  goto err_fb_setup;
 }

 VAR_6 = FUNC_4(VAR_5, 32);
 if (VAR_6) {
  FUNC_0("failed to set initial config\n");
  goto err_fb_setup;
 }

 return 0;
 err_fb_setup:
 FUNC_2(VAR_5);
 err_fb_helper:
 VAR_4->fbdev = ((void*)0);
 return VAR_6;
}
