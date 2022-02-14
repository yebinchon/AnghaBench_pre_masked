
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct max9485_rate {scalar_t__ out; scalar_t__ reg_value; } ;
struct max9485_driver_data {scalar_t__ reg_value; } ;
struct max9485_clk_hw {struct max9485_driver_data* drvdata; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct max9485_rate* VAR_1 ;
 struct max9485_clk_hw* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_2,
      unsigned long VAR_3)
{
 struct max9485_clk_hw *VAR_4 = FUNC_0(VAR_2);
 struct max9485_driver_data *VAR_5 = VAR_4->drvdata;
 u8 VAR_6 = VAR_5->reg_value & VAR_0;
 const struct max9485_rate *VAR_7;

 for (VAR_7 = VAR_1; VAR_7->out != 0; VAR_7++)
  if (VAR_6 == VAR_7->reg_value)
   return VAR_7->out;

 return 0;
}
