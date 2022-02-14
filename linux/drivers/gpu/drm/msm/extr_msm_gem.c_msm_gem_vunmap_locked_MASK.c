
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_object {int * vaddr; int lock; } ;
struct drm_gem_object {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct msm_gem_object*) ;
 int FUNC_2 (int *) ;
 struct msm_gem_object* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_gem_object *VAR_0)
{
 struct msm_gem_object *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(!FUNC_2(&VAR_1->lock));

 if (!VAR_1->vaddr || FUNC_0(!FUNC_1(VAR_1)))
  return;

 FUNC_4(VAR_1->vaddr);
 VAR_1->vaddr = ((void*)0);
}
