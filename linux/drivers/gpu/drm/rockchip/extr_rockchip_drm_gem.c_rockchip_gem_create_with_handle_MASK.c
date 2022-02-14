
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct rockchip_gem_object {struct drm_gem_object base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 struct rockchip_gem_object* FUNC_0 (struct rockchip_gem_object*) ;
 struct rockchip_gem_object* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct rockchip_gem_object*) ;
 int FUNC_3 (struct drm_file*,struct drm_gem_object*,unsigned int*) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct rockchip_gem_object* FUNC_5 (struct drm_device*,unsigned int,int) ;
 int FUNC_6 (struct drm_gem_object*) ;

__attribute__((used)) static struct rockchip_gem_object *
FUNC_7(struct drm_file *VAR_0,
    struct drm_device *VAR_1, unsigned int VAR_2,
    unsigned int *VAR_3)
{
 struct rockchip_gem_object *VAR_4;
 struct drm_gem_object *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_1, VAR_2, 0);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 VAR_5 = &VAR_4->base;





 VAR_6 = FUNC_3(VAR_0, VAR_5, VAR_3);
 if (VAR_6)
  goto err_handle_create;


 FUNC_4(VAR_5);

 return VAR_4;

err_handle_create:
 FUNC_6(VAR_5);

 return FUNC_1(VAR_6);
}
