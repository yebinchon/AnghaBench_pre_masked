
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos5_i2c {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct exynos5_i2c*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct exynos5_i2c *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7->regs + VAR_4) | VAR_6;
 FUNC_2(VAR_8, VAR_7->regs + VAR_4);
 VAR_8 = FUNC_1(VAR_7->regs + VAR_3) & ~VAR_0;
 FUNC_2(VAR_8, VAR_7->regs + VAR_3);






 FUNC_2(VAR_1, VAR_7->regs + VAR_5);
 FUNC_0(VAR_7);
 FUNC_2(VAR_2, VAR_7->regs + VAR_5);
 FUNC_0(VAR_7);

 VAR_8 = FUNC_1(VAR_7->regs + VAR_4) & ~VAR_6;
 FUNC_2(VAR_8, VAR_7->regs + VAR_4);
 VAR_8 = FUNC_1(VAR_7->regs + VAR_3) | VAR_0;
 FUNC_2(VAR_8, VAR_7->regs + VAR_3);
}
