
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos5_i2c {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct exynos5_i2c *VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;


 VAR_5 = VAR_3 + FUNC_0(100) + 1;
 do {
  VAR_6 = FUNC_1(VAR_4->regs + VAR_2);
  if (!(VAR_6 & VAR_1))
   return 0;

  FUNC_3(50, 200);
 } while (FUNC_2(VAR_3, VAR_5));

 return -VAR_0;
}
