
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_gem_ops {int dummy; } ;
struct etnaviv_gem_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct drm_gem_object*,size_t) ;
 int FUNC_1 (struct drm_device*,size_t,int ,struct etnaviv_gem_ops const*,struct drm_gem_object**) ;
 struct etnaviv_gem_object* FUNC_2 (struct drm_gem_object*) ;

int FUNC_3(struct drm_device *VAR_0, size_t VAR_1, u32 VAR_2,
 const struct etnaviv_gem_ops *VAR_3, struct etnaviv_gem_object **VAR_4)
{
 struct drm_gem_object *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_0, VAR_5, VAR_1);

 *VAR_4 = FUNC_2(VAR_5);

 return 0;
}
