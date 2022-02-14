
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da8xx_usb0_clk48 {int fck; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct da8xx_usb0_clk48* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct da8xx_usb0_clk48 *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->fck);
}
