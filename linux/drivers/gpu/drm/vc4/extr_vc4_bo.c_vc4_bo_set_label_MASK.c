
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_dev {TYPE_1__* bo_labels; int bo_lock; } ;
struct vc4_bo {size_t label; } ;
struct drm_gem_object {scalar_t__ size; int dev; } ;
struct TYPE_2__ {scalar_t__ num_allocated; int * name; int size_allocated; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vc4_bo* FUNC_3 (struct drm_gem_object*) ;
 struct vc4_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_gem_object *VAR_0, int VAR_1)
{
 struct vc4_bo *VAR_2 = FUNC_3(VAR_0);
 struct vc4_dev *VAR_3 = FUNC_4(VAR_0->dev);

 FUNC_2(&VAR_3->bo_lock);

 if (VAR_1 != -1) {
  VAR_3->bo_labels[VAR_1].num_allocated++;
  VAR_3->bo_labels[VAR_1].size_allocated += VAR_0->size;
 }

 VAR_3->bo_labels[VAR_2->label].num_allocated--;
 VAR_3->bo_labels[VAR_2->label].size_allocated -= VAR_0->size;

 if (VAR_3->bo_labels[VAR_2->label].num_allocated == 0 &&
     FUNC_0(VAR_2->label)) {





  FUNC_1(VAR_3->bo_labels[VAR_2->label].name);
  VAR_3->bo_labels[VAR_2->label].name = ((void*)0);
 }

 VAR_2->label = VAR_1;
}
