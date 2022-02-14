
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct clk_hw {int dummy; } ;
struct at91sam9x5_clk_smd {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct at91sam9x5_clk_smd* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_2)
{
 struct at91sam9x5_clk_smd *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;

 FUNC_0(VAR_3->regmap, VAR_0, &VAR_4);

 return VAR_4 & VAR_1;
}
