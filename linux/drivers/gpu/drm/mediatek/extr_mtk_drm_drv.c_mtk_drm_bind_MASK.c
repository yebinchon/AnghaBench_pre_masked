
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_private {struct drm_device* drm; } ;
struct drm_device {struct mtk_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 struct mtk_drm_private* FUNC_3 (struct device*) ;
 struct drm_device* FUNC_4 (int *,struct device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct drm_device*,int) ;
 int VAR_0 ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_1)
{
 struct mtk_drm_private *VAR_2 = FUNC_3(VAR_1);
 struct drm_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(&VAR_0, VAR_1);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 VAR_3->dev_private = VAR_2;
 VAR_2->drm = VAR_3;

 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4 < 0)
  goto err_free;

 VAR_4 = FUNC_6(VAR_3, 0);
 if (VAR_4 < 0)
  goto err_deinit;

 VAR_4 = FUNC_7(VAR_3, 32);
 if (VAR_4)
  FUNC_0("Failed to initialize fbdev: %d\n", VAR_4);

 return 0;

err_deinit:
 FUNC_8(VAR_3);
err_free:
 FUNC_5(VAR_3);
 return VAR_4;
}
