
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_4__ {int disp_int; int hdmi0_status; } ;
struct TYPE_5__ {TYPE_1__ r500; } ;
struct TYPE_6__ {TYPE_2__ stat_regs; } ;
struct radeon_device {TYPE_3__ irq; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static inline u32 FUNC_16(struct radeon_device *VAR_8)
{
 uint32_t VAR_9 = FUNC_7(VAR_0);
 uint32_t VAR_10 = FUNC_8(1);
 u32 VAR_11;

 if (FUNC_1(VAR_9)) {
  VAR_8->irq.stat_regs.r500.disp_int = FUNC_7(VAR_7);
  if (FUNC_5(VAR_8->irq.stat_regs.r500.disp_int)) {
   FUNC_15(VAR_1,
    FUNC_9(1));
  }
  if (FUNC_6(VAR_8->irq.stat_regs.r500.disp_int)) {
   FUNC_15(VAR_2,
    FUNC_10(1));
  }
  if (FUNC_3(VAR_8->irq.stat_regs.r500.disp_int)) {
   VAR_11 = FUNC_7(VAR_5);
   VAR_11 |= FUNC_13(1);
   FUNC_15(VAR_5, VAR_11);
  }
  if (FUNC_4(VAR_8->irq.stat_regs.r500.disp_int)) {
   VAR_11 = FUNC_7(VAR_6);
   VAR_11 |= FUNC_14(1);
   FUNC_15(VAR_6, VAR_11);
  }
 } else {
  VAR_8->irq.stat_regs.r500.disp_int = 0;
 }

 if (FUNC_0(VAR_8)) {
  VAR_8->irq.stat_regs.r500.hdmi0_status = FUNC_7(VAR_3) &
   FUNC_11(1);
  if (FUNC_2(VAR_8->irq.stat_regs.r500.hdmi0_status)) {
   VAR_11 = FUNC_7(VAR_4);
   VAR_11 |= FUNC_12(1);
   FUNC_15(VAR_4, VAR_11);
  }
 } else
  VAR_8->irq.stat_regs.r500.hdmi0_status = 0;

 if (VAR_9) {
  FUNC_15(VAR_0, VAR_9);
 }
 return VAR_9 & VAR_10;
}
