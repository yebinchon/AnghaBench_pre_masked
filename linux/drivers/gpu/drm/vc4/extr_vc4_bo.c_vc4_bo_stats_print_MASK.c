
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int purged_size; int lock; scalar_t__ purged_num; scalar_t__ num; } ;
struct vc4_dev {int num_labels; TYPE_2__ purgeable; TYPE_1__* bo_labels; } ;
struct drm_printer {int dummy; } ;
struct TYPE_3__ {char* name; int size_allocated; scalar_t__ num_allocated; } ;


 int FUNC_0 (struct drm_printer*,char*,char*,int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_printer *VAR_0, struct vc4_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_labels; VAR_2++) {
  if (!VAR_1->bo_labels[VAR_2].num_allocated)
   continue;

  FUNC_0(VAR_0, "%30s: %6dkb BOs (%d)\n",
      VAR_1->bo_labels[VAR_2].name,
      VAR_1->bo_labels[VAR_2].size_allocated / 1024,
      VAR_1->bo_labels[VAR_2].num_allocated);
 }

 FUNC_1(&VAR_1->purgeable.lock);
 if (VAR_1->purgeable.num)
  FUNC_0(VAR_0, "%30s: %6zdkb BOs (%d)\n", "userspace BO cache",
      VAR_1->purgeable.size / 1024, VAR_1->purgeable.num);

 if (VAR_1->purgeable.purged_num)
  FUNC_0(VAR_0, "%30s: %6zdkb BOs (%d)\n", "total purged BO",
      VAR_1->purgeable.purged_size / 1024,
      VAR_1->purgeable.purged_num);
 FUNC_2(&VAR_1->purgeable.lock);
}
