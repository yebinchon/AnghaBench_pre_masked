
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_dclk {int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sun4i_dclk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_3,
         unsigned long VAR_4)
{
 struct sun4i_dclk *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 FUNC_1(VAR_5->regmap, VAR_2, &VAR_6);

 VAR_6 >>= VAR_0;
 VAR_6 &= (1 << VAR_1) - 1;

 if (!VAR_6)
  VAR_6 = 1;

 return VAR_4 / VAR_6;
}
