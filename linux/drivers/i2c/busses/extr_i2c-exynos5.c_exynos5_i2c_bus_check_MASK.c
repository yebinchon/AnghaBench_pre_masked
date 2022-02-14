
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct exynos5_i2c {scalar_t__ regs; TYPE_1__* variant; } ;
struct TYPE_2__ {scalar_t__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct exynos5_i2c*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct exynos5_i2c *VAR_5)
{
 unsigned long VAR_6;

 if (VAR_5->variant->hw != VAR_3)
  return;






 VAR_6 = VAR_4 + FUNC_1(100);
 for (;;) {
  u32 VAR_7 = FUNC_2(VAR_5->regs + VAR_2);

  if ((VAR_7 & VAR_1) != VAR_0)
   return;

  if (FUNC_3(VAR_6))
   return;

  FUNC_0(VAR_5);
 }
}
