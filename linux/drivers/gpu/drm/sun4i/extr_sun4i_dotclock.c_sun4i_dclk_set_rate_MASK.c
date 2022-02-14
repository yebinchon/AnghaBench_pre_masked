
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct sun4i_dclk {int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 struct sun4i_dclk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, unsigned long VAR_2,
          unsigned long VAR_3)
{
 struct sun4i_dclk *VAR_4 = FUNC_1(VAR_1);
 u8 VAR_5 = VAR_3 / VAR_2;

 return FUNC_2(VAR_4->regmap, VAR_0,
      FUNC_0(6, 0), VAR_5);
}
