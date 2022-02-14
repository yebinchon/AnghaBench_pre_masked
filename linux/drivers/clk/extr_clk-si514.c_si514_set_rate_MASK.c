
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_si514_muldiv {int dummy; } ;
struct clk_si514 {int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct clk_si514_muldiv*,unsigned long) ;
 int FUNC_3 (struct clk_si514*,int) ;
 int FUNC_4 (struct clk_si514*,struct clk_si514_muldiv*) ;
 struct clk_si514* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_3, unsigned long VAR_4,
  unsigned long VAR_5)
{
 struct clk_si514 *VAR_6 = FUNC_5(VAR_3);
 struct clk_si514_muldiv VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(&VAR_7, VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_6->regmap, VAR_2, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_3(VAR_6, 0);

 VAR_9 = FUNC_4(VAR_6, &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_1(VAR_6->regmap, VAR_2, VAR_0);
 if (VAR_9 < 0)
  return VAR_9;


 FUNC_6(10000, 12000);

 if (VAR_8 & VAR_1)
  FUNC_3(VAR_6, 1);

 return VAR_9;
}
