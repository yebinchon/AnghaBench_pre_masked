
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ring {int * ring_obj; } ;
struct TYPE_4__ {int * ring_obj; } ;
struct TYPE_3__ {int atom_context; } ;
struct radeon_device {int flags; int accel_working; int mc_fw; int dev; TYPE_2__ ih; struct radeon_ring* ring; int rlc_fw; int pfp_fw; int me_fw; int ddev; TYPE_1__ mode_info; int bios; int is_atom_bios; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 size_t VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*,int) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;
 int FUNC_30 (struct radeon_device*) ;
 int FUNC_31 (struct radeon_device*) ;

int FUNC_32(struct radeon_device *VAR_5)
{
 struct radeon_ring *VAR_6 = &VAR_5->ring[VAR_4];
 int VAR_7;


 if (!FUNC_23(VAR_5)) {
  if (FUNC_0(VAR_5))
   return -VAR_1;
 }

 if (!VAR_5->is_atom_bios) {
  FUNC_10(VAR_5->dev, "Expecting atombios for cayman GPU\n");
  return -VAR_1;
 }
 VAR_7 = FUNC_19(VAR_5);
 if (VAR_7)
  return VAR_7;


 if (!FUNC_21(VAR_5)) {
  if (!VAR_5->bios) {
   FUNC_10(VAR_5->dev, "Card not posted and no BIOS - ignoring\n");
   return -VAR_1;
  }
  FUNC_2("GPU not posted. posting now...\n");
  FUNC_3(VAR_5->mode_info.atom_context);
 }

 FUNC_12(VAR_5);

 FUNC_18(VAR_5);

 FUNC_28(VAR_5);

 FUNC_24(VAR_5->ddev);

 VAR_7 = FUNC_22(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_11(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_20(VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_5->flags & VAR_3) {
  if (!VAR_5->me_fw || !VAR_5->pfp_fw || !VAR_5->rlc_fw) {
   VAR_7 = FUNC_13(VAR_5);
   if (VAR_7) {
    FUNC_1("Failed to load firmware!\n");
    return VAR_7;
   }
  }
 } else {
  if (!VAR_5->me_fw || !VAR_5->pfp_fw || !VAR_5->rlc_fw || !VAR_5->mc_fw) {
   VAR_7 = FUNC_13(VAR_5);
   if (VAR_7) {
    FUNC_1("Failed to load firmware!\n");
    return VAR_7;
   }
  }
 }


 FUNC_27(VAR_5);

 VAR_6->ring_obj = ((void*)0);
 FUNC_17(VAR_5, VAR_6, 1024 * 1024);

 VAR_6 = &VAR_5->ring[VAR_2];
 VAR_6->ring_obj = ((void*)0);
 FUNC_17(VAR_5, VAR_6, 64 * 1024);

 VAR_6 = &VAR_5->ring[VAR_0];
 VAR_6->ring_obj = ((void*)0);
 FUNC_17(VAR_5, VAR_6, 64 * 1024);

 FUNC_8(VAR_5);
 FUNC_9(VAR_5);

 VAR_5->ih.ring_obj = ((void*)0);
 FUNC_14(VAR_5, 64 * 1024);

 VAR_7 = FUNC_16(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_5->accel_working = 1;
 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7) {
  FUNC_10(VAR_5->dev, "disabling GPU acceleration\n");
  FUNC_4(VAR_5);
  FUNC_5(VAR_5);
  FUNC_15(VAR_5);
  if (VAR_5->flags & VAR_3)
   FUNC_31(VAR_5);
  FUNC_30(VAR_5);
  FUNC_25(VAR_5);
  FUNC_29(VAR_5);
  FUNC_26(VAR_5);
  FUNC_6(VAR_5);
  VAR_5->accel_working = 0;
 }
 if (!VAR_5->mc_fw && !(VAR_5->flags & VAR_3)) {
  FUNC_1("radeon: MC ucode required for NI+.\n");
  return -VAR_1;
 }

 return 0;
}
