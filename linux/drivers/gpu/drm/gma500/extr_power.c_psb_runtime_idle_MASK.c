
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {scalar_t__ display_count; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct device {int dummy; } ;


 struct drm_device* FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_0(FUNC_1(VAR_0));
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;
 if (VAR_2->display_count)
  return 0;
 else
  return 1;
}
