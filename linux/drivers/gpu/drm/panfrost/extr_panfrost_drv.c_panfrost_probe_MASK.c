
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct panfrost_device {int * dev; int shrinker_list; int shrinker_lock; struct drm_device* ddev; struct platform_device* pdev; } ;
struct drm_device {struct panfrost_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *,char*) ;
 struct panfrost_device* FUNC_4 (int *,int,int ) ;
 struct drm_device* FUNC_5 (int *,int *) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct panfrost_device*) ;
 int FUNC_10 (struct panfrost_device*) ;
 int FUNC_11 (struct panfrost_device*) ;
 int FUNC_12 (struct panfrost_device*) ;
 int VAR_3 ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct platform_device*,struct panfrost_device*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_4)
{
 struct panfrost_device *VAR_5;
 struct drm_device *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->pdev = VAR_4;
 VAR_5->dev = &VAR_4->dev;

 FUNC_14(VAR_4, VAR_5);


 VAR_6 = FUNC_5(&VAR_3, &VAR_4->dev);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_6->dev_private = VAR_5;
 VAR_5->ddev = VAR_6;

 FUNC_8(&VAR_5->shrinker_lock);
 FUNC_0(&VAR_5->shrinker_list);

 VAR_7 = FUNC_12(VAR_5);
 if (VAR_7) {
  if (VAR_7 != -VAR_1)
   FUNC_3(&VAR_4->dev, "Fatal error during GPU init\n");
  goto err_out0;
 }

 VAR_7 = FUNC_10(VAR_5);
 if (VAR_7) {
  if (VAR_7 != -VAR_1)
   FUNC_3(&VAR_4->dev, "Fatal error during devfreq init\n");
  goto err_out1;
 }

 FUNC_18(VAR_5->dev);
 FUNC_17(VAR_5->dev);
 FUNC_16(VAR_5->dev);
 FUNC_19(VAR_5->dev, 50);
 FUNC_20(VAR_5->dev);





 VAR_7 = FUNC_7(VAR_6, 0);
 if (VAR_7 < 0)
  goto err_out2;

 FUNC_13(VAR_6);

 return 0;

err_out2:
 FUNC_15(VAR_5->dev);
 FUNC_9(VAR_5);
err_out1:
 FUNC_11(VAR_5);
err_out0:
 FUNC_6(VAR_6);
 return VAR_7;
}
