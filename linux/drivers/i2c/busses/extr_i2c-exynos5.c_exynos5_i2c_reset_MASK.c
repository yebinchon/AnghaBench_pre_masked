
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos5_i2c {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct exynos5_i2c*) ;
 int FUNC_1 (struct exynos5_i2c*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct exynos5_i2c *VAR_2)
{
 u32 VAR_3;


 VAR_3 = FUNC_2(VAR_2->regs + VAR_0);
 VAR_3 |= VAR_1;
 FUNC_3(VAR_3, VAR_2->regs + VAR_0);

 VAR_3 = FUNC_2(VAR_2->regs + VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_3(VAR_3, VAR_2->regs + VAR_0);


 FUNC_0(VAR_2);

 FUNC_1(VAR_2);
}
