
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct at91sam9x5_clk_usb {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct at91sam9x5_clk_usb* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct at91sam9x5_clk_usb *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->regmap, VAR_0, VAR_1,
      VAR_1);

 return 0;
}
