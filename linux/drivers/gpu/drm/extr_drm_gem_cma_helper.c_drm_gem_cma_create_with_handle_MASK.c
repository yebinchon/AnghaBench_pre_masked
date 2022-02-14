
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_gem_object {int dummy; } ;
struct drm_gem_cma_object {struct drm_gem_object base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 struct drm_gem_cma_object* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_gem_cma_object*) ;
 struct drm_gem_cma_object* FUNC_2 (struct drm_device*,size_t) ;
 int FUNC_3 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_4 (struct drm_gem_object*) ;

__attribute__((used)) static struct drm_gem_cma_object *
FUNC_5(struct drm_file *VAR_0,
          struct drm_device *VAR_1, size_t VAR_2,
          uint32_t *VAR_3)
{
 struct drm_gem_cma_object *VAR_4;
 struct drm_gem_object *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_5 = &VAR_4->base;





 VAR_6 = FUNC_3(VAR_0, VAR_5, VAR_3);

 FUNC_4(VAR_5);
 if (VAR_6)
  return FUNC_0(VAR_6);

 return VAR_4;
}
