
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kirin_drm_data {scalar_t__ register_connects; int driver; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct device*,struct drm_device*) ;
 struct drm_device* FUNC_3 (int ,struct device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*,int) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*,struct kirin_drm_data*) ;
 scalar_t__ FUNC_11 (struct device*) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_1)
{
 struct kirin_drm_data *VAR_2;
 struct drm_device *VAR_3;
 int VAR_4;

 VAR_2 = (struct kirin_drm_data *)FUNC_11(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2->driver, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 FUNC_2(VAR_1, VAR_3);


 VAR_4 = FUNC_10(VAR_3, VAR_2);
 if (VAR_4)
  goto err_drm_dev_put;

 VAR_4 = FUNC_5(VAR_3, 0);
 if (VAR_4)
  goto err_kms_cleanup;

 FUNC_7(VAR_3, 32);


 if (VAR_2->register_connects) {
  VAR_4 = FUNC_8(VAR_3);
  if (VAR_4)
   goto err_drm_dev_unregister;
 }

 return 0;

err_drm_dev_unregister:
 FUNC_6(VAR_3);
err_kms_cleanup:
 FUNC_9(VAR_3);
err_drm_dev_put:
 FUNC_4(VAR_3);

 return VAR_4;
}
