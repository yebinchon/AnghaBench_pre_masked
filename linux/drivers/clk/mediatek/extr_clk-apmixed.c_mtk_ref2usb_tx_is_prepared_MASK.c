
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ref2usb_tx {int base_addr; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mtk_ref2usb_tx* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct mtk_ref2usb_tx *VAR_2 = FUNC_1(VAR_1);

 return (FUNC_0(VAR_2->base_addr) & VAR_0) == VAR_0;
}
