
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ,struct drm_device*) ;
 struct drm_device* FUNC_3 (int *,struct device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct drm_device*,int) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_9 (struct drm_device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_1)
{
 struct drm_device *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(&VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3)
  goto err_drm_dev_put;

 VAR_3 = FUNC_2(VAR_2->dev, VAR_2);
 if (VAR_3)
  goto err_cleanup;

 VAR_3 = FUNC_5(VAR_2, 0);
 if (VAR_3)
  goto err_cleanup;

 FUNC_7(VAR_2);

 FUNC_6(VAR_2, 32);

 return 0;

err_cleanup:
 FUNC_8(VAR_2);
err_drm_dev_put:
 FUNC_4(VAR_2);
 return VAR_3;
}
