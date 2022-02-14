
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct exynos5_i2c {unsigned int op_clock; scalar_t__ regs; int dev; TYPE_1__* variant; int clk; } ;
struct TYPE_2__ {scalar_t__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct exynos5_i2c *VAR_12, bool VAR_13)
{
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 unsigned int VAR_18, VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21, VAR_22;
 unsigned int VAR_23, VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26;
 unsigned int VAR_27 = FUNC_0(VAR_12->clk);
 unsigned int VAR_28 = VAR_13 ? VAR_12->op_clock :
  (VAR_12->op_clock >= VAR_3) ? VAR_2 :
  VAR_12->op_clock;
 int VAR_29, VAR_30, VAR_31;
 VAR_26 = (FUNC_3(VAR_12->regs + VAR_1) >> 16) & 0x7;
 VAR_31 = VAR_27 / VAR_28 - 8 - VAR_26;
 if (VAR_12->variant->hw != VAR_11)
  VAR_31 -= VAR_26;
 VAR_29 = VAR_31 / 512;
 VAR_30 = VAR_31 / (VAR_29 + 1) - 2;
 if (VAR_31 < 4 || VAR_29 >= 256 || VAR_30 < 2) {
  FUNC_2(VAR_12->dev, "%s clock set-up failed\n",
   VAR_13 ? "HS" : "FS");
  return -VAR_0;
 }

 VAR_23 = VAR_30 / 2;
 VAR_24 = VAR_30 / 2;
 VAR_18 = VAR_23;
 VAR_19 = VAR_23;
 VAR_20 = VAR_23;
 VAR_21 = VAR_23 / 2;
 VAR_22 = VAR_23 / 2;
 VAR_25 = VAR_30;

 VAR_14 = VAR_18 << 24 | VAR_19 << 16 | VAR_20 << 8;
 VAR_15 = VAR_21 << 24 | VAR_23 << 8 | VAR_24 << 0;
 VAR_16 = VAR_29 << 16 | VAR_25 << 0;
 VAR_17 = VAR_22 << 0;

 FUNC_1(VAR_12->dev, "tSTART_SU: %X, tSTART_HD: %X, tSTOP_SU: %X\n",
  VAR_18, VAR_19, VAR_20);
 FUNC_1(VAR_12->dev, "tDATA_SU: %X, tSCL_L: %X, tSCL_H: %X\n",
  VAR_21, VAR_23, VAR_24);
 FUNC_1(VAR_12->dev, "nClkDiv: %X, tSR_RELEASE: %X\n",
  VAR_29, VAR_25);
 FUNC_1(VAR_12->dev, "tDATA_HD: %X\n", VAR_22);

 if (VAR_13) {
  FUNC_4(VAR_14, VAR_12->regs + VAR_7);
  FUNC_4(VAR_15, VAR_12->regs + VAR_8);
  FUNC_4(VAR_16, VAR_12->regs + VAR_9);
 } else {
  FUNC_4(VAR_14, VAR_12->regs + VAR_4);
  FUNC_4(VAR_15, VAR_12->regs + VAR_5);
  FUNC_4(VAR_16, VAR_12->regs + VAR_6);
 }
 FUNC_4(VAR_17, VAR_12->regs + VAR_10);

 return 0;
}
