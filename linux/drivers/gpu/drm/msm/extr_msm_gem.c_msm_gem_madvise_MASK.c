
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gem_object {scalar_t__ madv; int lock; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
struct TYPE_2__ {int struct_mutex; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct msm_gem_object* FUNC_4 (struct drm_gem_object*) ;

int FUNC_5(struct drm_gem_object *VAR_1, unsigned VAR_2)
{
 struct msm_gem_object *VAR_3 = FUNC_4(VAR_1);

 FUNC_2(&VAR_3->lock);

 FUNC_0(!FUNC_1(&VAR_1->dev->struct_mutex));

 if (VAR_3->madv != VAR_0)
  VAR_3->madv = VAR_2;

 VAR_2 = VAR_3->madv;

 FUNC_3(&VAR_3->lock);

 return (VAR_2 != VAR_0);
}
