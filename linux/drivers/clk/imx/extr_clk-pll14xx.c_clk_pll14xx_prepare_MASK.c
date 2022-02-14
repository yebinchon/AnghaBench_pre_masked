
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pll14xx {scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clk_pll14xx*) ;
 int FUNC_1 (scalar_t__) ;
 struct clk_pll14xx* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_3)
{
 struct clk_pll14xx *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5;
 int VAR_6;





 VAR_5 = FUNC_1(VAR_4->base + VAR_1);
 if (VAR_5 & VAR_2)
  return 0;
 VAR_5 |= VAR_0;
 FUNC_3(VAR_5, VAR_4->base + VAR_1);
 VAR_5 |= VAR_2;
 FUNC_3(VAR_5, VAR_4->base + VAR_1);

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 &= ~VAR_0;
 FUNC_3(VAR_5, VAR_4->base + VAR_1);

 return 0;
}
