
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_gem_object {int dummy; } ;
struct drm_device {int dummy; } ;


 struct rockchip_gem_object* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rockchip_gem_object*) ;
 int FUNC_2 (struct rockchip_gem_object*,int) ;
 struct rockchip_gem_object* FUNC_3 (struct drm_device*,unsigned int) ;
 int FUNC_4 (struct rockchip_gem_object*) ;

struct rockchip_gem_object *
FUNC_5(struct drm_device *VAR_0, unsigned int VAR_1,
      bool VAR_2)
{
 struct rockchip_gem_object *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4)
  goto err_free_rk_obj;

 return VAR_3;

err_free_rk_obj:
 FUNC_4(VAR_3);
 return FUNC_0(VAR_4);
}
