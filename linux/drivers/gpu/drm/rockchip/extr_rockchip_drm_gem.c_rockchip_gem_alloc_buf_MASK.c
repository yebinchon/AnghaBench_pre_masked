
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {struct drm_device* dev; } ;
struct rockchip_gem_object {struct drm_gem_object base; } ;
struct rockchip_drm_private {scalar_t__ domain; } ;
struct drm_device {struct rockchip_drm_private* dev_private; } ;


 int FUNC_0 (struct rockchip_gem_object*,int) ;
 int FUNC_1 (struct rockchip_gem_object*,int) ;

__attribute__((used)) static int FUNC_2(struct rockchip_gem_object *VAR_0,
      bool VAR_1)
{
 struct drm_gem_object *VAR_2 = &VAR_0->base;
 struct drm_device *VAR_3 = VAR_2->dev;
 struct rockchip_drm_private *VAR_4 = VAR_3->dev_private;

 if (VAR_4->domain)
  return FUNC_1(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_1);
}
