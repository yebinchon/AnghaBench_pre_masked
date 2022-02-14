
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ring {int * ring_obj; int doorbell_index; } ;
struct TYPE_4__ {int * ring_obj; } ;
struct TYPE_3__ {int atom_context; } ;
struct radeon_device {int flags; int accel_working; int mc_fw; int dev; TYPE_2__ ih; struct radeon_ring* ring; int rlc_fw; int sdma_fw; int mec_fw; int ce_fw; int pfp_fw; int me_fw; int ddev; TYPE_1__ mode_info; int bios; int is_atom_bios; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (struct radeon_device*,int) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*,int *) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;
 int FUNC_30 (struct radeon_device*) ;
 int FUNC_31 (struct radeon_device*) ;
 int FUNC_32 (struct radeon_device*) ;
 int FUNC_33 (struct radeon_device*) ;

int FUNC_34(struct radeon_device *VAR_7)
{
 struct radeon_ring *VAR_8;
 int VAR_9;


 if (!FUNC_25(VAR_7)) {
  if (FUNC_0(VAR_7))
   return -VAR_3;
 }

 if (!VAR_7->is_atom_bios) {
  FUNC_16(VAR_7->dev, "Expecting atombios for cayman GPU\n");
  return -VAR_3;
 }
 VAR_9 = FUNC_20(VAR_7);
 if (VAR_9)
  return VAR_9;


 if (!FUNC_22(VAR_7)) {
  if (!VAR_7->bios) {
   FUNC_16(VAR_7->dev, "Card not posted and no BIOS - ignoring\n");
   return -VAR_3;
  }
  FUNC_2("GPU not posted. posting now...\n");
  FUNC_3(VAR_7->mode_info.atom_context);
 }

 FUNC_5(VAR_7);

 FUNC_11(VAR_7);

 FUNC_30(VAR_7);

 FUNC_26(VAR_7->ddev);


 VAR_9 = FUNC_24(VAR_7);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_21(VAR_7);
 if (VAR_9)
  return VAR_9;

 if (VAR_7->flags & VAR_5) {
  if (!VAR_7->me_fw || !VAR_7->pfp_fw || !VAR_7->ce_fw ||
      !VAR_7->mec_fw || !VAR_7->sdma_fw || !VAR_7->rlc_fw) {
   VAR_9 = FUNC_6(VAR_7);
   if (VAR_9) {
    FUNC_1("Failed to load firmware!\n");
    return VAR_9;
   }
  }
 } else {
  if (!VAR_7->me_fw || !VAR_7->pfp_fw || !VAR_7->ce_fw ||
      !VAR_7->mec_fw || !VAR_7->sdma_fw || !VAR_7->rlc_fw ||
      !VAR_7->mc_fw) {
   VAR_9 = FUNC_6(VAR_7);
   if (VAR_9) {
    FUNC_1("Failed to load firmware!\n");
    return VAR_9;
   }
  }
 }


 FUNC_29(VAR_7);

 VAR_8 = &VAR_7->ring[VAR_6];
 VAR_8->ring_obj = ((void*)0);
 FUNC_19(VAR_7, VAR_8, 1024 * 1024);

 VAR_8 = &VAR_7->ring[VAR_0];
 VAR_8->ring_obj = ((void*)0);
 FUNC_19(VAR_7, VAR_8, 1024 * 1024);
 VAR_9 = FUNC_23(VAR_7, &VAR_8->doorbell_index);
 if (VAR_9)
  return VAR_9;

 VAR_8 = &VAR_7->ring[VAR_1];
 VAR_8->ring_obj = ((void*)0);
 FUNC_19(VAR_7, VAR_8, 1024 * 1024);
 VAR_9 = FUNC_23(VAR_7, &VAR_8->doorbell_index);
 if (VAR_9)
  return VAR_9;

 VAR_8 = &VAR_7->ring[VAR_4];
 VAR_8->ring_obj = ((void*)0);
 FUNC_19(VAR_7, VAR_8, 256 * 1024);

 VAR_8 = &VAR_7->ring[VAR_2];
 VAR_8->ring_obj = ((void*)0);
 FUNC_19(VAR_7, VAR_8, 256 * 1024);

 FUNC_14(VAR_7);
 FUNC_15(VAR_7);

 VAR_7->ih.ring_obj = ((void*)0);
 FUNC_17(VAR_7, 64 * 1024);

 VAR_9 = FUNC_18(VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_7->accel_working = 1;
 VAR_9 = FUNC_13(VAR_7);
 if (VAR_9) {
  FUNC_16(VAR_7->dev, "disabling GPU acceleration\n");
  FUNC_4(VAR_7);
  FUNC_12(VAR_7);
  FUNC_7(VAR_7);
  FUNC_33(VAR_7);
  FUNC_9(VAR_7);
  FUNC_32(VAR_7);
  FUNC_27(VAR_7);
  FUNC_31(VAR_7);
  FUNC_28(VAR_7);
  FUNC_10(VAR_7);
  VAR_7->accel_working = 0;
 }





 if (!VAR_7->mc_fw && !(VAR_7->flags & VAR_5)) {
  FUNC_1("radeon: MC ucode required for NI+.\n");
  return -VAR_3;
 }

 return 0;
}
