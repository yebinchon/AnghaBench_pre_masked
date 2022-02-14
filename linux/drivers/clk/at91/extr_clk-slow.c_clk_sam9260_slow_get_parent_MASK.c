
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_sam9260_slow {int regmap; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct clk_sam9260_slow* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_2)
{
 struct clk_sam9260_slow *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;

 FUNC_0(VAR_3->regmap, VAR_1, &VAR_4);

 return VAR_4 & VAR_0 ? 1 : 0;
}
