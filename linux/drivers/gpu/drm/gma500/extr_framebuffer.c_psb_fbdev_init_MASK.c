
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_fbdev {int psb_fb_helper; } ;
struct drm_psb_private {struct psb_fbdev* fbdev; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct drm_device*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct psb_fbdev*) ;
 struct psb_fbdev* FUNC_8 (int,int ) ;
 int VAR_3 ;

int FUNC_9(struct drm_device *VAR_4)
{
 struct psb_fbdev *VAR_5;
 struct drm_psb_private *VAR_6 = VAR_4->dev_private;
 int VAR_7;

 VAR_5 = FUNC_8(sizeof(struct psb_fbdev), VAR_1);
 if (!VAR_5) {
  FUNC_0(VAR_4->dev, "no memory\n");
  return -VAR_0;
 }

 VAR_6->fbdev = VAR_5;

 FUNC_4(VAR_4, &VAR_5->psb_fb_helper, &VAR_3);

 VAR_7 = FUNC_2(VAR_4, &VAR_5->psb_fb_helper,
     VAR_2);
 if (VAR_7)
  goto free;

 VAR_7 = FUNC_5(&VAR_5->psb_fb_helper);
 if (VAR_7)
  goto fini;


 FUNC_6(VAR_4);

 VAR_7 = FUNC_3(&VAR_5->psb_fb_helper, 32);
 if (VAR_7)
  goto fini;

 return 0;

fini:
 FUNC_1(&VAR_5->psb_fb_helper);
free:
 FUNC_7(VAR_5);
 return VAR_7;
}
