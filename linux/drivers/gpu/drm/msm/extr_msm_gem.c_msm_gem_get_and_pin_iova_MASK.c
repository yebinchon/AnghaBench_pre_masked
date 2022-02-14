
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u64 ;
struct msm_gem_object {int lock; } ;
struct msm_gem_address_space {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct drm_gem_object*,struct msm_gem_address_space*,int *) ;
 int FUNC_1 (struct drm_gem_object*,struct msm_gem_address_space*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct msm_gem_object* FUNC_4 (struct drm_gem_object*) ;

int FUNC_5(struct drm_gem_object *VAR_0,
  struct msm_gem_address_space *VAR_1, uint64_t *VAR_2)
{
 struct msm_gem_object *VAR_3 = FUNC_4(VAR_0);
 u64 VAR_4;
 int VAR_5;

 FUNC_2(&VAR_3->lock);

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);

 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_5)
  *VAR_2 = VAR_4;

 FUNC_3(&VAR_3->lock);
 return VAR_5;
}
