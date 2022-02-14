
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tve200_drm_dev_private {struct drm_bridge* bridge; int connector; struct drm_panel* panel; int pipe; } ;
struct drm_panel {int dev; int connector; } ;
struct drm_mode_config {int min_width; int max_width; int min_height; int max_height; int * funcs; } ;
struct drm_device {TYPE_1__* dev; struct drm_mode_config mode_config; struct tve200_drm_dev_private* dev_private; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (int ,int ,int ,struct drm_panel**,struct drm_bridge**) ;
 struct drm_bridge* FUNC_10 (struct drm_panel*,int ) ;
 int FUNC_11 (struct drm_bridge*) ;
 int FUNC_12 (int *,struct drm_bridge*) ;
 int FUNC_13 (struct drm_device*,int) ;
 int VAR_2 ;
 int FUNC_14 (struct drm_device*) ;

__attribute__((used)) static int FUNC_15(struct drm_device *VAR_3)
{
 struct drm_mode_config *VAR_4;
 struct tve200_drm_dev_private *VAR_5 = VAR_3->dev_private;
 struct drm_panel *VAR_6;
 struct drm_bridge *VAR_7;
 int VAR_8 = 0;

 FUNC_7(VAR_3);
 VAR_4 = &VAR_3->mode_config;
 VAR_4->funcs = &VAR_2;
 VAR_4->min_width = 352;
 VAR_4->max_width = 720;
 VAR_4->min_height = 240;
 VAR_4->max_height = 576;

 VAR_8 = FUNC_9(VAR_3->dev->of_node,
       0, 0, &VAR_6, &VAR_7);
 if (VAR_8 && VAR_8 != -VAR_1)
  return VAR_8;
 if (VAR_6) {
  VAR_7 = FUNC_10(VAR_6,
           VAR_0);
  if (FUNC_0(VAR_7)) {
   VAR_8 = FUNC_1(VAR_7);
   goto out_bridge;
  }
 } else {





  FUNC_2(VAR_3->dev, "the bridge is not a panel\n");
  goto out_bridge;
 }

 VAR_8 = FUNC_14(VAR_3);
 if (VAR_8) {
  FUNC_2(VAR_3->dev, "failed to init display\n");
  goto out_bridge;
 }

 VAR_8 = FUNC_12(&VAR_5->pipe,
          VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_3->dev, "failed to attach bridge\n");
  goto out_bridge;
 }

 VAR_5->panel = VAR_6;
 VAR_5->connector = VAR_6->connector;
 VAR_5->bridge = VAR_7;

 FUNC_3(VAR_3->dev, "attached to panel %s\n",
   FUNC_4(VAR_6->dev));

 VAR_8 = FUNC_13(VAR_3, 1);
 if (VAR_8) {
  FUNC_2(VAR_3->dev, "failed to init vblank\n");
  goto out_bridge;
 }

 FUNC_8(VAR_3);
 FUNC_5(VAR_3);

 goto finish;

out_bridge:
 if (VAR_6)
  FUNC_11(VAR_7);
 FUNC_6(VAR_3);
finish:
 return VAR_8;
}
