
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dev_private; } ;
struct device {int dummy; } ;


 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct drm_device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_0(VAR_0);


 if (!VAR_1->dev_private)
  return;

 FUNC_1(FUNC_0(VAR_0));
}
