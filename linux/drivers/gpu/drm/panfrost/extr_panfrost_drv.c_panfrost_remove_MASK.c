
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct panfrost_device {int dev; struct drm_device* ddev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct panfrost_device*) ;
 int FUNC_3 (struct panfrost_device*) ;
 int FUNC_4 (struct drm_device*) ;
 struct panfrost_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct panfrost_device *VAR_1 = FUNC_5(VAR_0);
 struct drm_device *VAR_2 = VAR_1->ddev;

 FUNC_1(VAR_2);
 FUNC_4(VAR_2);

 FUNC_7(VAR_1->dev);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_8(VAR_1->dev);
 FUNC_6(VAR_1->dev);

 FUNC_0(VAR_2);
 return 0;
}
