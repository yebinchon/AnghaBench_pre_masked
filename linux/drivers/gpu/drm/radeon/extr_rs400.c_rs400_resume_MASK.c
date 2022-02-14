
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int accel_working; int ddev; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;

int FUNC_9(struct radeon_device *VAR_2)
{
 int VAR_3;


 FUNC_6(VAR_2);

 FUNC_2(VAR_2);

 FUNC_7(VAR_2);

 if (FUNC_3(VAR_2)) {
  FUNC_1(VAR_2->dev, "GPU reset failed ! (0xE40=0x%08X, 0x7C0=0x%08X)\n",
   FUNC_0(VAR_1),
   FUNC_0(VAR_0));
 }

 FUNC_4(VAR_2->ddev);

 FUNC_2(VAR_2);

 FUNC_5(VAR_2);

 VAR_2->accel_working = 1;
 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3) {
  VAR_2->accel_working = 0;
 }
 return VAR_3;
}
