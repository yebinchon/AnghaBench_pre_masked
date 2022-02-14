
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct exynos5_i2c {int lock; scalar_t__ regs; TYPE_2__* msg; TYPE_1__* variant; } ;
struct TYPE_4__ {int flags; int len; int addr; } ;
struct TYPE_3__ {scalar_t__ hw; int fifo_depth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (unsigned short) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (struct exynos5_i2c*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct exynos5_i2c *VAR_19, int VAR_20)
{
 u32 VAR_21;
 u32 VAR_22 = 0;
 u32 VAR_23 = 0;
 u32 VAR_24;
 unsigned long VAR_25;
 unsigned short VAR_26;

 if (VAR_19->variant->hw == VAR_18)
  VAR_22 |= VAR_6;
 else
  VAR_22 |= VAR_5;

 VAR_21 = FUNC_4(VAR_19->regs + VAR_2);
 VAR_21 &= ~(VAR_15 | VAR_12);
 VAR_24 = VAR_13 | VAR_16;

 if (VAR_19->msg->flags & VAR_17) {
  VAR_21 |= VAR_12;

  VAR_23 |= VAR_11;

  VAR_26 = (VAR_19->msg->len > VAR_19->variant->fifo_depth) ?
   (VAR_19->variant->fifo_depth * 3 / 4) : VAR_19->msg->len;
  VAR_24 |= FUNC_0(VAR_26);

  VAR_22 |= (VAR_7 |
   VAR_8);
 } else {
  VAR_21 |= VAR_15;

  VAR_26 = (VAR_19->msg->len > VAR_19->variant->fifo_depth) ?
   (VAR_19->variant->fifo_depth * 1 / 4) : VAR_19->msg->len;
  VAR_24 |= FUNC_2(VAR_26);

  VAR_22 |= VAR_9;
 }

 FUNC_7(FUNC_1(VAR_19->msg->addr), VAR_19->regs + VAR_0);

 FUNC_7(VAR_24, VAR_19->regs + VAR_3);
 FUNC_7(VAR_21, VAR_19->regs + VAR_2);

 FUNC_3(VAR_19);





 FUNC_5(&VAR_19->lock, VAR_25);
 FUNC_7(VAR_22, VAR_19->regs + VAR_4);

 if (VAR_20 == 1)
  VAR_23 |= VAR_14;
 VAR_23 |= VAR_19->msg->len;
 VAR_23 |= VAR_10;
 FUNC_7(VAR_23, VAR_19->regs + VAR_1);
 FUNC_6(&VAR_19->lock, VAR_25);
}
