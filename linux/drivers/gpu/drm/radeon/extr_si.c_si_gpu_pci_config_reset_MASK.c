
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {scalar_t__ usec_timeout; int pdev; int dev; } ;
struct evergreen_mc_save {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct radeon_device*,struct evergreen_mc_save*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct radeon_device *VAR_9)
{
 struct evergreen_mc_save VAR_10;
 u32 VAR_11, VAR_12;

 FUNC_2(VAR_9->dev, "GPU pci config reset\n");




 FUNC_9(VAR_9);
 FUNC_8(VAR_9);


 FUNC_1(VAR_2, VAR_3 | VAR_4 | VAR_1);

 VAR_11 = FUNC_0(VAR_7 + VAR_5);
 VAR_11 &= ~VAR_8;
 FUNC_1(VAR_7 + VAR_5, VAR_11);

 VAR_11 = FUNC_0(VAR_7 + VAR_6);
 VAR_11 &= ~VAR_8;
 FUNC_1(VAR_7 + VAR_6, VAR_11);



 FUNC_10(VAR_9);

 FUNC_13(50);


 FUNC_4(VAR_9, &VAR_10);
 if (FUNC_5(VAR_9)) {
  FUNC_3(VAR_9->dev, "Wait for MC idle timed out !\n");
 }


 FUNC_11(VAR_9);

 FUNC_12(VAR_9);

 FUNC_6(VAR_9->pdev);

 FUNC_7(VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_9->usec_timeout; VAR_12++) {
  if (FUNC_0(VAR_0) != 0xffffffff)
   break;
  FUNC_13(1);
 }
}
