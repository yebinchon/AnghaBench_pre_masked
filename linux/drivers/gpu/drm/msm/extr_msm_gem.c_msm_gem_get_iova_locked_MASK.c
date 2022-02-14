
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct msm_gem_vma {int iova; } ;
struct msm_gem_object {int lock; } ;
struct msm_gem_address_space {int dummy; } ;
struct drm_gem_object {int size; } ;


 scalar_t__ FUNC_0 (struct msm_gem_vma*) ;
 int VAR_0 ;
 int FUNC_1 (struct msm_gem_vma*) ;
 int FUNC_2 (int) ;
 struct msm_gem_vma* FUNC_3 (struct drm_gem_object*,struct msm_gem_address_space*) ;
 int FUNC_4 (struct msm_gem_vma*) ;
 struct msm_gem_vma* FUNC_5 (struct drm_gem_object*,struct msm_gem_address_space*) ;
 int FUNC_6 (struct msm_gem_address_space*,struct msm_gem_vma*,int) ;
 int FUNC_7 (int *) ;
 struct msm_gem_object* FUNC_8 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_9(struct drm_gem_object *VAR_1,
  struct msm_gem_address_space *VAR_2, uint64_t *VAR_3)
{
 struct msm_gem_object *VAR_4 = FUNC_8(VAR_1);
 struct msm_gem_vma *VAR_5;
 int VAR_6 = 0;

 FUNC_2(!FUNC_7(&VAR_4->lock));

 VAR_5 = FUNC_5(VAR_1, VAR_2);

 if (!VAR_5) {
  VAR_5 = FUNC_3(VAR_1, VAR_2);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);

  VAR_6 = FUNC_6(VAR_2, VAR_5, VAR_1->size >> VAR_0);
  if (VAR_6) {
   FUNC_4(VAR_5);
   return VAR_6;
  }
 }

 *VAR_3 = VAR_5->iova;
 return 0;
}
