
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ttm_operation_ctx {int member_0; int member_1; } ;
struct TYPE_8__ {int num_placement; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct qxl_bo {TYPE_4__ placement; TYPE_3__ tbo; TYPE_2__* placements; scalar_t__ pin_count; } ;
struct drm_device {int dev; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct qxl_bo*) ;
 int FUNC_1 (int ,char*,struct qxl_bo*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct qxl_bo *VAR_1)
{
 struct ttm_operation_ctx VAR_2 = { 0, 0 };
 struct drm_device *VAR_3 = VAR_1->tbo.base.dev;
 int VAR_4, VAR_5;

 if (!VAR_1->pin_count) {
  FUNC_1(VAR_3->dev, "%p unpin not necessary\n", VAR_1);
  return 0;
 }
 VAR_1->pin_count--;
 if (VAR_1->pin_count)
  return 0;
 for (VAR_5 = 0; VAR_5 < VAR_1->placement.num_placement; VAR_5++)
  VAR_1->placements[VAR_5].flags &= ~VAR_0;
 VAR_4 = FUNC_2(&VAR_1->tbo, &VAR_1->placement, &VAR_2);
 if (FUNC_3(VAR_4 != 0))
  FUNC_0(VAR_3->dev, "%p validate failed for unpin\n", VAR_1);
 return VAR_4;
}
