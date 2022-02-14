
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 struct drm_device* FUNC_4 (int *,int *) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct drm_device *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(&VAR_0, &VAR_1->dev);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto err_free;

 VAR_3 = FUNC_6(VAR_2, 0);
 if (VAR_3)
  goto err_unload;

 return 0;

err_unload:
 FUNC_3(VAR_2);
err_free:
 FUNC_5(VAR_2);

 return VAR_3;
}
