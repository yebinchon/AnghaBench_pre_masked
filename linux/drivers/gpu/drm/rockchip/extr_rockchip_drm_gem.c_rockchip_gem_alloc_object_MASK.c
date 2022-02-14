
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct rockchip_gem_object {struct drm_gem_object base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct rockchip_gem_object* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*,struct drm_gem_object*,unsigned int) ;
 struct rockchip_gem_object* FUNC_2 (int,int ) ;
 unsigned int FUNC_3 (unsigned int,int ) ;

struct rockchip_gem_object *
 FUNC_4(struct drm_device *VAR_3, unsigned int VAR_4)
{
 struct rockchip_gem_object *VAR_5;
 struct drm_gem_object *VAR_6;

 VAR_4 = FUNC_3(VAR_4, VAR_2);

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = &VAR_5->base;

 FUNC_1(VAR_3, VAR_6, VAR_4);

 return VAR_5;
}
