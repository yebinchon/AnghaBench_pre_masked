
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct amdgpu_device {int gart_pin_size; int visible_pin_size; int vram_pin_size; int dev; } ;
struct TYPE_9__ {size_t mem_type; } ;
struct TYPE_10__ {TYPE_3__ mem; TYPE_6__* bdev; int ttm; } ;
struct TYPE_11__ {int num_placement; } ;
struct amdgpu_bo {int pin_count; int flags; TYPE_4__ tbo; TYPE_5__ placement; TYPE_2__* placements; scalar_t__ prime_shared_count; } ;
struct TYPE_12__ {TYPE_1__* man; } ;
struct TYPE_8__ {unsigned int fpfn; unsigned int lpfn; int flags; } ;
struct TYPE_7__ {scalar_t__ gpu_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_bo*,int) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 int FUNC_5 (size_t) ;
 struct amdgpu_device* FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct amdgpu_bo*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,char*,struct amdgpu_bo*) ;
 int FUNC_11 (TYPE_4__*,TYPE_5__*,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct amdgpu_bo *VAR_9, u32 VAR_10,
        u64 VAR_11, u64 VAR_12)
{
 struct amdgpu_device *VAR_13 = FUNC_6(VAR_9->tbo.bdev);
 struct ttm_operation_ctx VAR_14 = { 0, 0 };
 int VAR_15, VAR_16;

 if (FUNC_7(VAR_9->tbo.ttm))
  return -VAR_6;

 if (FUNC_0(VAR_11 > VAR_12))
  return -VAR_5;


 if (VAR_9->prime_shared_count) {
  if (VAR_10 & VAR_3)
   VAR_10 = VAR_3;
  else
   return -VAR_5;
 }




 VAR_10 = FUNC_1(VAR_13, VAR_10);

 if (VAR_9->pin_count) {
  uint32_t VAR_17 = VAR_9->tbo.mem.mem_type;

  if (!(VAR_10 & FUNC_5(VAR_17)))
   return -VAR_5;

  VAR_9->pin_count++;

  if (VAR_12 != 0) {
   u64 VAR_18 = VAR_9->tbo.bdev->man[VAR_17].gpu_offset;
   FUNC_0(VAR_12 <
         (FUNC_2(VAR_9) - VAR_18));
  }

  return 0;
 }

 VAR_9->flags |= VAR_2;

 if (!(VAR_9->flags & VAR_1))
  VAR_9->flags |= VAR_0;
 FUNC_3(VAR_9, VAR_10);
 for (VAR_16 = 0; VAR_16 < VAR_9->placement.num_placement; VAR_16++) {
  unsigned VAR_19, VAR_20;

  VAR_19 = VAR_11 >> VAR_7;
  VAR_20 = VAR_12 >> VAR_7;

  if (VAR_19 > VAR_9->placements[VAR_16].fpfn)
   VAR_9->placements[VAR_16].fpfn = VAR_19;
  if (!VAR_9->placements[VAR_16].lpfn ||
      (VAR_20 && VAR_20 < VAR_9->placements[VAR_16].lpfn))
   VAR_9->placements[VAR_16].lpfn = VAR_20;
  VAR_9->placements[VAR_16].flags |= VAR_8;
 }

 VAR_15 = FUNC_11(&VAR_9->tbo, &VAR_9->placement, &VAR_14);
 if (FUNC_12(VAR_15)) {
  FUNC_10(VAR_13->dev, "%p pin failed\n", VAR_9);
  goto error;
 }

 VAR_9->pin_count = 1;

 VAR_10 = FUNC_5(VAR_9->tbo.mem.mem_type);
 if (VAR_10 == VAR_4) {
  FUNC_9(FUNC_4(VAR_9), &VAR_13->vram_pin_size);
  FUNC_9(FUNC_8(VAR_9),
        &VAR_13->visible_pin_size);
 } else if (VAR_10 == VAR_3) {
  FUNC_9(FUNC_4(VAR_9), &VAR_13->gart_pin_size);
 }

error:
 return VAR_15;
}
