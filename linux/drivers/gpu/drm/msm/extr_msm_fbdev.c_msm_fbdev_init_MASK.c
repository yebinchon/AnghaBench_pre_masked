
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_fb_helper {int dummy; } ;
struct msm_fbdev {struct drm_fb_helper base; } ;
struct msm_drm_private {struct drm_fb_helper* fbdev; int num_connectors; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (struct drm_device*,struct drm_fb_helper*,int ) ;
 int FUNC_3 (struct drm_fb_helper*,int) ;
 int FUNC_4 (struct drm_device*,struct drm_fb_helper*,int *) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (struct drm_fb_helper*) ;
 int FUNC_7 (struct msm_fbdev*) ;
 struct msm_fbdev* FUNC_8 (int,int ) ;
 int VAR_1 ;

struct drm_fb_helper *FUNC_9(struct drm_device *VAR_2)
{
 struct msm_drm_private *VAR_3 = VAR_2->dev_private;
 struct msm_fbdev *VAR_4 = ((void*)0);
 struct drm_fb_helper *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_8(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  goto fail;

 VAR_5 = &VAR_4->base;

 FUNC_4(VAR_2, VAR_5, &VAR_1);

 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_3->num_connectors);
 if (VAR_6) {
  FUNC_0(VAR_2->dev, "could not init fbdev: ret=%d\n", VAR_6);
  goto fail;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6)
  goto fini;


 FUNC_5(((void*)0), "msm", 0);

 VAR_6 = FUNC_3(VAR_5, 32);
 if (VAR_6)
  goto fini;

 VAR_3->fbdev = VAR_5;

 return VAR_5;

fini:
 FUNC_1(VAR_5);
fail:
 FUNC_7(VAR_4);
 return ((void*)0);
}
