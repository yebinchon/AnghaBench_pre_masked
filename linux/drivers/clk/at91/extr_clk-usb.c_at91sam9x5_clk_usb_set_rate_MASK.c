
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct at91sam9x5_clk_usb {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,unsigned long) ;
 struct at91sam9x5_clk_usb* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_5, unsigned long VAR_6,
           unsigned long VAR_7)
{
 struct at91sam9x5_clk_usb *VAR_8 = FUNC_2(VAR_5);
 unsigned long VAR_9;

 if (!VAR_6)
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_7, VAR_6);
 if (VAR_9 > VAR_4 + 1 || !VAR_9)
  return -VAR_2;

 FUNC_1(VAR_8->regmap, VAR_1, VAR_0,
      (VAR_9 - 1) << VAR_3);

 return 0;
}
