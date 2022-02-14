
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct TYPE_10__ {int num_placement; } ;
struct TYPE_9__ {int ttm; } ;
struct radeon_bo {int pin_count; int flags; TYPE_3__* rdev; TYPE_5__ placement; TYPE_4__ tbo; TYPE_2__* placements; scalar_t__ prime_shared_count; } ;
struct TYPE_6__ {scalar_t__ vram_start; scalar_t__ gtt_start; scalar_t__ visible_vram_size; } ;
struct TYPE_8__ {int dev; int gart_pin_size; int vram_pin_size; TYPE_1__ mc; } ;
struct TYPE_7__ {int flags; scalar_t__ lpfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,struct radeon_bo*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct radeon_bo*) ;
 scalar_t__ FUNC_4 (struct radeon_bo*) ;
 int FUNC_5 (struct radeon_bo*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*,struct ttm_operation_ctx*) ;

int FUNC_8(struct radeon_bo *VAR_7, u32 VAR_8, u64 VAR_9,
        u64 *VAR_10)
{
 struct ttm_operation_ctx VAR_11 = { 0, 0 };
 int VAR_12, VAR_13;

 if (FUNC_6(VAR_7->tbo.ttm))
  return -VAR_1;

 if (VAR_7->pin_count) {
  VAR_7->pin_count++;
  if (VAR_10)
   *VAR_10 = FUNC_3(VAR_7);

  if (VAR_9 != 0) {
   u64 VAR_14;

   if (VAR_8 == VAR_3)
    VAR_14 = VAR_7->rdev->mc.vram_start;
   else
    VAR_14 = VAR_7->rdev->mc.gtt_start;
   FUNC_0(VAR_9 <
         (FUNC_3(VAR_7) - VAR_14));
  }

  return 0;
 }
 if (VAR_7->prime_shared_count && VAR_8 == VAR_3) {

  return -VAR_0;
 }

 FUNC_5(VAR_7, VAR_8);
 for (VAR_13 = 0; VAR_13 < VAR_7->placement.num_placement; VAR_13++) {

  if ((VAR_7->placements[VAR_13].flags & VAR_6) &&
      !(VAR_7->flags & VAR_4) &&
      (!VAR_9 || VAR_9 > VAR_7->rdev->mc.visible_vram_size))
   VAR_7->placements[VAR_13].lpfn =
    VAR_7->rdev->mc.visible_vram_size >> VAR_2;
  else
   VAR_7->placements[VAR_13].lpfn = VAR_9 >> VAR_2;

  VAR_7->placements[VAR_13].flags |= VAR_5;
 }

 VAR_12 = FUNC_7(&VAR_7->tbo, &VAR_7->placement, &VAR_11);
 if (FUNC_2(VAR_12 == 0)) {
  VAR_7->pin_count = 1;
  if (VAR_10 != ((void*)0))
   *VAR_10 = FUNC_3(VAR_7);
  if (VAR_8 == VAR_3)
   VAR_7->rdev->vram_pin_size += FUNC_4(VAR_7);
  else
   VAR_7->rdev->gart_pin_size += FUNC_4(VAR_7);
 } else {
  FUNC_1(VAR_7->rdev->dev, "%p pin failed\n", VAR_7);
 }
 return VAR_12;
}
