
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max9485_rate {unsigned long out; int reg_value; } ;
struct max9485_clk_hw {int drvdata; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct max9485_rate* VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct max9485_clk_hw* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_3, unsigned long VAR_4,
       unsigned long VAR_5)
{
 struct max9485_clk_hw *VAR_6 = FUNC_1(VAR_3);
 const struct max9485_rate *VAR_7;

 for (VAR_7 = VAR_2; VAR_7->out != 0; VAR_7++)
  if (VAR_7->out == VAR_4)
   break;

 if (VAR_7->out == 0)
  return -VAR_0;

 return FUNC_0(VAR_6->drvdata,
       VAR_1,
       VAR_7->reg_value);
}
