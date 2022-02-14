
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_object {int freed; } ;
struct msm_drm_private {int free_work; int wq; int free_list; } ;
struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 struct msm_gem_object* FUNC_2 (struct drm_gem_object*) ;

void FUNC_3(struct drm_gem_object *VAR_0)
{
 struct msm_gem_object *VAR_1 = FUNC_2(VAR_0);
 struct drm_device *VAR_2 = VAR_0->dev;
 struct msm_drm_private *VAR_3 = VAR_2->dev_private;

 if (FUNC_0(&VAR_1->freed, &VAR_3->free_list))
  FUNC_1(VAR_3->wq, &VAR_3->free_work);
}
