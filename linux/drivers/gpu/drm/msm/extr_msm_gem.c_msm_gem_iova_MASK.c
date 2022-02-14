
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct msm_gem_vma {int iova; } ;
struct msm_gem_object {int lock; } ;
struct msm_gem_address_space {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (int) ;
 struct msm_gem_vma* FUNC_1 (struct drm_gem_object*,struct msm_gem_address_space*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct msm_gem_object* FUNC_4 (struct drm_gem_object*) ;

uint64_t FUNC_5(struct drm_gem_object *VAR_0,
  struct msm_gem_address_space *VAR_1)
{
 struct msm_gem_object *VAR_2 = FUNC_4(VAR_0);
 struct msm_gem_vma *VAR_3;

 FUNC_2(&VAR_2->lock);
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_2->lock);
 FUNC_0(!VAR_3);

 return VAR_3 ? VAR_3->iova : 0;
}
