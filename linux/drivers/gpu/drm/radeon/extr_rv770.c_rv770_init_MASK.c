
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ring_obj; } ;
struct TYPE_4__ {int atom_context; } ;
struct radeon_device {int flags; int accel_working; int dev; TYPE_2__ ih; TYPE_3__* ring; int rlc_fw; int pfp_fw; int me_fw; int ddev; TYPE_1__ mode_info; int bios; int is_atom_bios; } ;
struct TYPE_6__ {int * ring_obj; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,TYPE_3__*,int) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;
 int FUNC_30 (struct radeon_device*) ;

int FUNC_31(struct radeon_device *VAR_4)
{
 int VAR_5;


 if (!FUNC_19(VAR_4)) {
  if (FUNC_0(VAR_4))
   return -VAR_0;
 }

 if (!VAR_4->is_atom_bios) {
  FUNC_4(VAR_4->dev, "Expecting atombios for R600 GPU\n");
  return -VAR_0;
 }
 VAR_5 = FUNC_15(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (!FUNC_17(VAR_4)) {
  if (!VAR_4->bios) {
   FUNC_4(VAR_4->dev, "Card not posted and no BIOS - ignoring\n");
   return -VAR_0;
  }
  FUNC_2("GPU not posted. posting now...\n");
  FUNC_3(VAR_4->mode_info.atom_context);
 }

 FUNC_26(VAR_4);

 FUNC_11(VAR_4);

 FUNC_24(VAR_4);

 FUNC_20(VAR_4->ddev);

 VAR_5 = FUNC_18(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->flags & VAR_2) {
  VAR_5 = FUNC_14(VAR_4);
  if (VAR_5)
   FUNC_13(VAR_4);
 }
 VAR_5 = FUNC_27(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_16(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4->me_fw || !VAR_4->pfp_fw || !VAR_4->rlc_fw) {
  VAR_5 = FUNC_7(VAR_4);
  if (VAR_5) {
   FUNC_1("Failed to load firmware!\n");
   return VAR_5;
  }
 }


 FUNC_23(VAR_4);

 VAR_4->ring[VAR_3].ring_obj = ((void*)0);
 FUNC_10(VAR_4, &VAR_4->ring[VAR_3], 1024 * 1024);

 VAR_4->ring[VAR_1].ring_obj = ((void*)0);
 FUNC_10(VAR_4, &VAR_4->ring[VAR_1], 64 * 1024);

 FUNC_30(VAR_4);

 VAR_4->ih.ring_obj = ((void*)0);
 FUNC_6(VAR_4, 64 * 1024);

 VAR_5 = FUNC_9(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->accel_working = 1;
 VAR_5 = FUNC_29(VAR_4);
 if (VAR_5) {
  FUNC_4(VAR_4->dev, "disabling GPU acceleration\n");
  FUNC_12(VAR_4);
  FUNC_5(VAR_4);
  FUNC_8(VAR_4);
  FUNC_25(VAR_4);
  FUNC_21(VAR_4);
  FUNC_22(VAR_4);
  FUNC_28(VAR_4);
  VAR_4->accel_working = 0;
 }

 return 0;
}
