
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 struct drm_device* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1)
  FUNC_0(VAR_1);
}
