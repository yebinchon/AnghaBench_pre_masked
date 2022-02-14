
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
struct TYPE_6__ {scalar_t__ pm_method; int dpm_enabled; } ;
struct TYPE_5__ {int bdev; } ;
struct TYPE_4__ {scalar_t__ bl_encoder; } ;
struct radeon_device {int needs_reset; int in_reset; int exclusive_lock; int dev; TYPE_3__ pm; int ddev; TYPE_2__ mman; TYPE_1__ mode_info; scalar_t__ is_atom_bios; int * ring; int gpu_reset_counter; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*,scalar_t__) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 unsigned int FUNC_20 (struct radeon_device*,int *,int **) ;
 int FUNC_21 (struct radeon_device*,int *,unsigned int,int *) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*,scalar_t__,int ) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;

int FUNC_29(struct radeon_device *VAR_3)
{
 unsigned VAR_4[VAR_2];
 uint32_t *VAR_5[VAR_2];

 bool VAR_6 = 0;

 int VAR_7, VAR_8;
 int VAR_9;

 FUNC_3(&VAR_3->exclusive_lock);

 if (!VAR_3->needs_reset) {
  FUNC_28(&VAR_3->exclusive_lock);
  return 0;
 }

 FUNC_1(&VAR_3->gpu_reset_counter);

 FUNC_22(VAR_3);

 VAR_9 = FUNC_25(&VAR_3->mman.bdev);
 FUNC_24(VAR_3);
 FUNC_12(VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  VAR_4[VAR_7] = FUNC_20(VAR_3, &VAR_3->ring[VAR_7],
         &VAR_5[VAR_7]);
  if (VAR_4[VAR_7]) {
   VAR_6 = 1;
   FUNC_2(VAR_3->dev, "Saved %d dwords of commands "
     "on ring %d.\n", VAR_4[VAR_7], VAR_7);
  }
 }

 VAR_8 = FUNC_7(VAR_3);
 if (!VAR_8) {
  FUNC_2(VAR_3->dev, "GPU reset succeeded, trying to resume\n");
  FUNC_19(VAR_3);
 }

 FUNC_18(VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  if (!VAR_8 && VAR_5[VAR_7]) {
   FUNC_21(VAR_3, &VAR_3->ring[VAR_7],
         VAR_4[VAR_7], VAR_5[VAR_7]);
  } else {
   FUNC_10(VAR_3, VAR_7);
   FUNC_6(VAR_5[VAR_7]);
  }
 }

 if ((VAR_3->pm.pm_method == VAR_1) && VAR_3->pm.dpm_enabled) {

  VAR_8 = FUNC_16(VAR_3);
  if (VAR_8) {
   VAR_3->pm.dpm_enabled = 0;
   FUNC_0("radeon_pm_late_init failed, disabling dpm\n");
  }
 } else {

  FUNC_17(VAR_3);
 }


 if (VAR_3->is_atom_bios) {
  FUNC_9(VAR_3);
  FUNC_8(VAR_3);

  if (VAR_3->mode_info.bl_encoder) {
   u8 VAR_10 = FUNC_11(VAR_3,
         VAR_3->mode_info.bl_encoder);
   FUNC_23(VAR_3, VAR_3->mode_info.bl_encoder,
         VAR_10);
  }
 }

 FUNC_13(VAR_3);

 FUNC_26(&VAR_3->mman.bdev, VAR_9);

 VAR_3->in_reset = 1;
 VAR_3->needs_reset = 0;

 FUNC_4(&VAR_3->exclusive_lock);

 FUNC_5(VAR_3->ddev);


 if ((VAR_3->pm.pm_method == VAR_1) && VAR_3->pm.dpm_enabled)
  FUNC_15(VAR_3);

 if (!VAR_8) {
  VAR_8 = FUNC_14(VAR_3);
  if (VAR_8 && VAR_6)
   VAR_8 = -VAR_0;
 } else {

  FUNC_2(VAR_3->dev, "GPU reset failed\n");
 }

 VAR_3->needs_reset = VAR_8 == -VAR_0;
 VAR_3->in_reset = 0;

 FUNC_27(&VAR_3->exclusive_lock);
 return VAR_8;
}
