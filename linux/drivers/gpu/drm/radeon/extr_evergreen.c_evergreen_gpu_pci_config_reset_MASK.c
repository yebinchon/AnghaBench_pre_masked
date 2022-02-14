
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {scalar_t__ usec_timeout; int dev; int pdev; } ;
struct evergreen_mc_save {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct radeon_device*,struct evergreen_mc_save*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (int) ;

void FUNC_11(struct radeon_device *VAR_6)
{
 struct evergreen_mc_save VAR_7;
 u32 VAR_8, VAR_9;

 FUNC_2(VAR_6->dev, "GPU pci config reset\n");




 FUNC_1(VAR_1, VAR_2 | VAR_3);
 FUNC_10(50);

 VAR_8 = FUNC_0(VAR_4);
 VAR_8 &= ~VAR_5;
 FUNC_1(VAR_4, VAR_8);



 FUNC_7(VAR_6);

 FUNC_10(50);


 FUNC_9(VAR_6);

 FUNC_6(VAR_6->pdev);

 FUNC_4(VAR_6, &VAR_7);
 if (FUNC_5(VAR_6)) {
  FUNC_3(VAR_6->dev, "Wait for MC idle timed out !\n");
 }

 FUNC_8(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_6->usec_timeout; VAR_9++) {
  if (FUNC_0(VAR_0) != 0xffffffff)
   break;
  FUNC_10(1);
 }
}
