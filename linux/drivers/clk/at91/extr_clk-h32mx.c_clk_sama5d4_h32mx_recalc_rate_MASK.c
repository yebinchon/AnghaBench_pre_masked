
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_sama5d4_h32mx {int regmap; } ;
struct clk_hw {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct clk_sama5d4_h32mx* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_3,
       unsigned long VAR_4)
{
 struct clk_sama5d4_h32mx *VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6;

 FUNC_1(VAR_5->regmap, VAR_1, &VAR_6);
 if (VAR_6 & VAR_0)
  return VAR_4 / 2;

 if (VAR_4 > VAR_2)
  FUNC_0("H32MX clock is too fast\n");
 return VAR_4;
}
