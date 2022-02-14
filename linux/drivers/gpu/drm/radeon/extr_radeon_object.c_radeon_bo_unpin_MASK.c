
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ttm_operation_ctx {int member_0; int member_1; } ;
struct TYPE_7__ {scalar_t__ mem_type; } ;
struct TYPE_9__ {TYPE_2__ mem; } ;
struct TYPE_10__ {int num_placement; } ;
struct radeon_bo {TYPE_3__* rdev; TYPE_4__ tbo; TYPE_5__ placement; TYPE_1__* placements; scalar_t__ pin_count; } ;
struct TYPE_8__ {int dev; int gart_pin_size; int vram_pin_size; } ;
struct TYPE_6__ {int flags; scalar_t__ lpfn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,struct radeon_bo*) ;
 int FUNC_1 (int ,char*,struct radeon_bo*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct radeon_bo*) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*,struct ttm_operation_ctx*) ;

int FUNC_5(struct radeon_bo *VAR_2)
{
 struct ttm_operation_ctx VAR_3 = { 0, 0 };
 int VAR_4, VAR_5;

 if (!VAR_2->pin_count) {
  FUNC_1(VAR_2->rdev->dev, "%p unpin not necessary\n", VAR_2);
  return 0;
 }
 VAR_2->pin_count--;
 if (VAR_2->pin_count)
  return 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->placement.num_placement; VAR_5++) {
  VAR_2->placements[VAR_5].lpfn = 0;
  VAR_2->placements[VAR_5].flags &= ~VAR_0;
 }
 VAR_4 = FUNC_4(&VAR_2->tbo, &VAR_2->placement, &VAR_3);
 if (FUNC_2(VAR_4 == 0)) {
  if (VAR_2->tbo.mem.mem_type == VAR_1)
   VAR_2->rdev->vram_pin_size -= FUNC_3(VAR_2);
  else
   VAR_2->rdev->gart_pin_size -= FUNC_3(VAR_2);
 } else {
  FUNC_0(VAR_2->rdev->dev, "%p validate failed for unpin\n", VAR_2);
 }
 return VAR_4;
}
