
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct s3c24xx_clkout {int shift; int mask; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;
 struct s3c24xx_clkout* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_2)
{
 struct s3c24xx_clkout *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_1) >> VAR_3->shift;
 VAR_5 >>= VAR_3->shift;
 VAR_5 &= VAR_3->mask;

 if (VAR_5 >= VAR_4)
  return -VAR_0;

 return VAR_5;
}
