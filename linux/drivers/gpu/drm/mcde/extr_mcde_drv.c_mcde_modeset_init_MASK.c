
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcde {int bridge; int pipe; scalar_t__ te_sync; } ;
struct drm_mode_config {int min_width; int max_width; int min_height; int max_height; int * helper_private; int * funcs; } ;
struct drm_device {int dev; struct drm_mode_config mode_config; struct mcde* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct drm_device*,int) ;
 int FUNC_7 (struct drm_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_3)
{
 struct drm_mode_config *VAR_4;
 struct mcde *VAR_5 = VAR_3->dev_private;
 int VAR_6;

 if (!VAR_5->bridge) {
  FUNC_0(VAR_3->dev, "no display output bridge yet\n");
  return -VAR_0;
 }

 VAR_4 = &VAR_3->mode_config;
 VAR_4->funcs = &VAR_1;
 VAR_4->helper_private = &VAR_2;

 VAR_4->min_width = 1;
 VAR_4->max_width = 1920;
 VAR_4->min_height = 1;
 VAR_4->max_height = 1080;







 if (VAR_5->te_sync) {
  VAR_6 = FUNC_6(VAR_3, 1);
  if (VAR_6) {
   FUNC_0(VAR_3->dev, "failed to init vblank\n");
   goto out_config;
  }
 }

 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "failed to init display\n");
  goto out_config;
 }
 VAR_6 = FUNC_5(&VAR_5->pipe,
          VAR_5->bridge);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "failed to attach display output bridge\n");
  goto out_config;
 }

 FUNC_4(VAR_3);
 FUNC_2(VAR_3);
 FUNC_1(VAR_3, 32);

 return 0;

out_config:
 FUNC_3(VAR_3);
 return VAR_6;
}
