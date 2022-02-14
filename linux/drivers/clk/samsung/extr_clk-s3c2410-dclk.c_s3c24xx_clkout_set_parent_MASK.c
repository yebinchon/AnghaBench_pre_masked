
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s3c24xx_clkout {int mask; int shift; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int,int) ;
 struct s3c24xx_clkout* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct s3c24xx_clkout *VAR_2 = FUNC_1(VAR_0);

 FUNC_0((VAR_2->mask << VAR_2->shift),
         (VAR_1 << VAR_2->shift));

 return 0;
}
