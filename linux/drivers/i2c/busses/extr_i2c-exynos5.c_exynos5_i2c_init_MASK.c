
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int nr; } ;
struct exynos5_i2c {scalar_t__ op_clock; scalar_t__ regs; TYPE_1__ adap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct exynos5_i2c *VAR_12)
{
 u32 VAR_13 = FUNC_2(VAR_12->regs + VAR_2);
 u32 VAR_14 = FUNC_2(VAR_12->regs + VAR_8);


 VAR_14 &= ~VAR_9;
 FUNC_3(VAR_14, VAR_12->regs + VAR_8);

 FUNC_3((VAR_4 | VAR_7),
     VAR_12->regs + VAR_3);
 FUNC_3(VAR_11, VAR_12->regs + VAR_10);

 if (VAR_12->op_clock >= VAR_6) {
  FUNC_3(FUNC_0(FUNC_1(VAR_12->adap.nr)),
     VAR_12->regs + VAR_0);
  VAR_13 |= VAR_5;
 }

 FUNC_3(VAR_13 | VAR_1, VAR_12->regs + VAR_2);
}
