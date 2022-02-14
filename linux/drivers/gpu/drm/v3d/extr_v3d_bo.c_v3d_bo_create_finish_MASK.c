
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pages_allocated; int num_allocated; } ;
struct v3d_dev {int bo_lock; TYPE_2__ bo_stats; int mm_lock; int mm; } ;
struct TYPE_3__ {int base; } ;
struct v3d_bo {int node; TYPE_1__ base; } ;
struct sg_table {int dummy; } ;
struct drm_gem_object {int size; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sg_table*) ;
 int VAR_1 ;
 int FUNC_1 (struct sg_table*) ;
 struct sg_table* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct v3d_bo* FUNC_8 (struct drm_gem_object*) ;
 struct v3d_dev* FUNC_9 (int ) ;
 int FUNC_10 (struct v3d_bo*) ;

__attribute__((used)) static int
FUNC_11(struct drm_gem_object *VAR_2)
{
 struct v3d_dev *VAR_3 = FUNC_9(VAR_2->dev);
 struct v3d_bo *VAR_4 = FUNC_8(VAR_2);
 struct sg_table *VAR_5;
 int VAR_6;




 VAR_5 = FUNC_2(&VAR_4->base.base);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_6(&VAR_3->mm_lock);




 VAR_6 = FUNC_3(&VAR_3->mm, &VAR_4->node,
      VAR_2->size >> VAR_1,
      VAR_0 >> VAR_1, 0, 0);
 FUNC_7(&VAR_3->mm_lock);
 if (VAR_6)
  return VAR_6;


 FUNC_4(&VAR_3->bo_lock);
 VAR_3->bo_stats.num_allocated++;
 VAR_3->bo_stats.pages_allocated += VAR_2->size >> VAR_1;
 FUNC_5(&VAR_3->bo_lock);

 FUNC_10(VAR_4);

 return 0;
}
