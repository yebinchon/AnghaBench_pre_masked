
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct platform_device*,struct drm_device*) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_1(VAR_1);
 struct platform_device *VAR_4 = FUNC_3(VAR_0);

 FUNC_0("");

 return FUNC_2(VAR_4, VAR_3);
}
