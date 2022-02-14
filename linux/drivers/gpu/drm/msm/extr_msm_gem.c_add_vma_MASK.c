
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_vma {int list; struct msm_gem_address_space* aspace; } ;
struct msm_gem_object {int vmas; int lock; } ;
struct msm_gem_address_space {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 struct msm_gem_vma* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct msm_gem_vma* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 struct msm_gem_object* FUNC_5 (struct drm_gem_object*) ;

__attribute__((used)) static struct msm_gem_vma *FUNC_6(struct drm_gem_object *VAR_2,
  struct msm_gem_address_space *VAR_3)
{
 struct msm_gem_object *VAR_4 = FUNC_5(VAR_2);
 struct msm_gem_vma *VAR_5;

 FUNC_1(!FUNC_4(&VAR_4->lock));

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->aspace = VAR_3;

 FUNC_3(&VAR_5->list, &VAR_4->vmas);

 return VAR_5;
}
