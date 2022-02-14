
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct msm_gem_object {int lock; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct msm_gem_object* FUNC_3 (struct drm_gem_object*) ;

uint64_t FUNC_4(struct drm_gem_object *VAR_0)
{
 uint64_t VAR_1;
 struct msm_gem_object *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_2->lock);
 return VAR_1;
}
