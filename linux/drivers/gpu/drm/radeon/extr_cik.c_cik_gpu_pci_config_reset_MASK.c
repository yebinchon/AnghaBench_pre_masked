
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int flags; scalar_t__ usec_timeout; int pdev; int dev; } ;
struct kv_reset_save_regs {int member_0; } ;
struct evergreen_mc_save {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct radeon_device*,struct evergreen_mc_save*) ;
 scalar_t__ FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,struct kv_reset_save_regs*) ;
 int FUNC_10 (struct radeon_device*,struct kv_reset_save_regs*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct radeon_device *VAR_13)
{
 struct evergreen_mc_save VAR_14;
 struct kv_reset_save_regs VAR_15 = { 0 };
 u32 VAR_16, VAR_17;

 FUNC_5(VAR_13->dev, "GPU pci config reset\n");




 FUNC_3(VAR_13);
 FUNC_2(VAR_13);


 FUNC_1(VAR_3, VAR_4 | VAR_5 | VAR_1);


 FUNC_1(VAR_2, VAR_6 | VAR_7);


 VAR_16 = FUNC_0(VAR_9 + VAR_10);
 VAR_16 |= VAR_12;
 FUNC_1(VAR_9 + VAR_10, VAR_16);

 VAR_16 = FUNC_0(VAR_9 + VAR_11);
 VAR_16 |= VAR_12;
 FUNC_1(VAR_9 + VAR_11, VAR_16);



 FUNC_4(VAR_13);

 FUNC_13(50);


 FUNC_7(VAR_13, &VAR_14);
 if (FUNC_8(VAR_13)) {
  FUNC_6(VAR_13->dev, "Wait for MC idle timed out !\n");
 }

 if (VAR_13->flags & VAR_8)
  FUNC_10(VAR_13, &VAR_15);


 FUNC_11(VAR_13->pdev);

 FUNC_12(VAR_13);

 FUNC_13(100);


 for (VAR_17 = 0; VAR_17 < VAR_13->usec_timeout; VAR_17++) {
  if (FUNC_0(VAR_0) != 0xffffffff)
   break;
  FUNC_13(1);
 }


 if (VAR_13->flags & VAR_8)
  FUNC_9(VAR_13, &VAR_15);
}
