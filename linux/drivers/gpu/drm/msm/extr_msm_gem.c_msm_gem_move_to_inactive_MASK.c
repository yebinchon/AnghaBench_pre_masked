
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_object {int mm_list; int * gpu; } ;
struct msm_drm_private {int inactive_list; } ;
struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {int struct_mutex; struct msm_drm_private* dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct msm_gem_object* FUNC_4 (struct drm_gem_object*) ;

void FUNC_5(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct msm_drm_private *VAR_2 = VAR_1->dev_private;
 struct msm_gem_object *VAR_3 = FUNC_4(VAR_0);

 FUNC_0(!FUNC_3(&VAR_1->struct_mutex));

 VAR_3->gpu = ((void*)0);
 FUNC_2(&VAR_3->mm_list);
 FUNC_1(&VAR_3->mm_list, &VAR_2->inactive_list);
}
