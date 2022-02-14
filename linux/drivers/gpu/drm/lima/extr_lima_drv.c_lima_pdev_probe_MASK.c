
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lima_device {int id; struct drm_device* ddev; int * dev; struct platform_device* pdev; } ;
struct drm_device {struct lima_device* dev_private; } ;
typedef enum lima_gpu_id { ____Placeholder_lima_gpu_id } lima_gpu_id ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 struct lima_device* FUNC_2 (int *,int,int ) ;
 struct drm_device* FUNC_3 (int *,int *) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct lima_device*) ;
 int FUNC_7 (struct lima_device*) ;
 int VAR_2 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct platform_device*,struct lima_device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_3)
{
 struct lima_device *VAR_4;
 struct drm_device *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_9();
 if (VAR_6)
  return VAR_6;

 VAR_4 = FUNC_2(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  VAR_6 = -VAR_0;
  goto err_out0;
 }

 VAR_4->pdev = VAR_3;
 VAR_4->dev = &VAR_3->dev;
 VAR_4->id = (enum lima_gpu_id)FUNC_10(&VAR_3->dev);

 FUNC_11(VAR_3, VAR_4);


 VAR_5 = FUNC_3(&VAR_2, &VAR_3->dev);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_5->dev_private = VAR_4;
 VAR_4->ddev = VAR_5;

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6)
  goto err_out1;





 VAR_6 = FUNC_5(VAR_5, 0);
 if (VAR_6 < 0)
  goto err_out2;

 return 0;

err_out2:
 FUNC_6(VAR_4);
err_out1:
 FUNC_4(VAR_5);
err_out0:
 FUNC_8();
 return VAR_6;
}
