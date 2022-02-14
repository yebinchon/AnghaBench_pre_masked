
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct at91sam9x5_clk_smd {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct at91sam9x5_clk_smd* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_3, u8 VAR_4)
{
 struct at91sam9x5_clk_smd *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4 > 1)
  return -VAR_2;

 FUNC_0(VAR_5->regmap, VAR_0, VAR_1,
      VAR_4 ? VAR_1 : 0);

 return 0;
}
