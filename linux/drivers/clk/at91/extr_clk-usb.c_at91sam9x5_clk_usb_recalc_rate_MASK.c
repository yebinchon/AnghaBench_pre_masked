
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct at91sam9x5_clk_usb {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct at91sam9x5_clk_usb* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_3,
          unsigned long VAR_4)
{
 struct at91sam9x5_clk_usb *VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6;
 u8 VAR_7;

 FUNC_1(VAR_5->regmap, VAR_1, &VAR_6);
 VAR_7 = (VAR_6 & VAR_0) >> VAR_2;

 return FUNC_0(VAR_4, (VAR_7 + 1));
}
