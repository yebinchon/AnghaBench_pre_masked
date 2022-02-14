
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int time_work; int time_timer; } ;
struct vc4_dev {int num_labels; TYPE_2__* bo_labels; TYPE_1__ bo_cache; } ;
struct drm_device {int dummy; } ;
struct TYPE_5__ {struct TYPE_5__* name; scalar_t__ num_allocated; } ;


 int FUNC_0 (char*,scalar_t__,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 struct vc4_dev* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;

void FUNC_7(struct drm_device *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 FUNC_2(&VAR_1->bo_cache.time_timer);
 FUNC_1(&VAR_1->bo_cache.time_work);

 FUNC_6(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_labels; VAR_2++) {
  if (VAR_1->bo_labels[VAR_2].num_allocated) {
   FUNC_0("Destroying BO cache with %d %s "
      "BOs still allocated\n",
      VAR_1->bo_labels[VAR_2].num_allocated,
      VAR_1->bo_labels[VAR_2].name);
  }

  if (FUNC_3(VAR_2))
   FUNC_4(VAR_1->bo_labels[VAR_2].name);
 }
 FUNC_4(VAR_1->bo_labels);
}
