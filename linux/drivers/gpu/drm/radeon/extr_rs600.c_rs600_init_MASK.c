
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int accel_working; int dev; int ddev; scalar_t__ is_atom_bios; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 scalar_t__ FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;

int FUNC_26(struct radeon_device *VAR_3)
{
 int VAR_4;


 FUNC_25(VAR_3);

 FUNC_16(VAR_3);

 FUNC_17(VAR_3);

 FUNC_5(VAR_3);

 if (!FUNC_11(VAR_3)) {
  if (FUNC_0(VAR_3))
   return -VAR_0;
 }
 if (VAR_3->is_atom_bios) {
  VAR_4 = FUNC_7(VAR_3);
  if (VAR_4)
   return VAR_4;
 } else {
  FUNC_2(VAR_3->dev, "Expecting atombios for RS600 GPU\n");
  return -VAR_0;
 }

 if (FUNC_6(VAR_3)) {
  FUNC_3(VAR_3->dev,
   "GPU reset failed ! (0xE40=0x%08X, 0x7C0=0x%08X)\n",
   FUNC_1(VAR_2),
   FUNC_1(VAR_1));
 }

 if (FUNC_9(VAR_3) == 0)
  return -VAR_0;


 FUNC_12(VAR_3->ddev);

 FUNC_22(VAR_3);
 FUNC_19(VAR_3);

 VAR_4 = FUNC_10(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_21(VAR_3);
 if (VAR_4)
  return VAR_4;
 FUNC_23(VAR_3);


 FUNC_15(VAR_3);

 VAR_3->accel_working = 1;
 VAR_4 = FUNC_24(VAR_3);
 if (VAR_4) {

  FUNC_2(VAR_3->dev, "Disabling GPU acceleration\n");
  FUNC_4(VAR_3);
  FUNC_18(VAR_3);
  FUNC_13(VAR_3);
  FUNC_20(VAR_3);
  FUNC_14(VAR_3);
  VAR_3->accel_working = 0;
 }
 return 0;
}
