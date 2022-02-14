
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pages_allocated; int num_allocated; } ;
struct v3d_dev {int mm_lock; int bo_lock; TYPE_1__ bo_stats; } ;
struct TYPE_4__ {int pages_mark_dirty_on_put; } ;
struct v3d_bo {TYPE_2__ base; int node; } ;
struct drm_gem_object {int size; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct v3d_bo* FUNC_6 (struct drm_gem_object*) ;
 struct v3d_dev* FUNC_7 (int ) ;
 int FUNC_8 (struct v3d_bo*) ;

void FUNC_9(struct drm_gem_object *VAR_1)
{
 struct v3d_dev *VAR_2 = FUNC_7(VAR_1->dev);
 struct v3d_bo *VAR_3 = FUNC_6(VAR_1);

 FUNC_8(VAR_3);

 FUNC_2(&VAR_2->bo_lock);
 VAR_2->bo_stats.num_allocated--;
 VAR_2->bo_stats.pages_allocated -= VAR_1->size >> VAR_0;
 FUNC_3(&VAR_2->bo_lock);

 FUNC_4(&VAR_2->mm_lock);
 FUNC_1(&VAR_3->node);
 FUNC_5(&VAR_2->mm_lock);


 VAR_3->base.pages_mark_dirty_on_put = 1;

 FUNC_0(VAR_1);
}
