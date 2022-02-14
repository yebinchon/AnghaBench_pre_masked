
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_ref2usb_tx {int base_addr; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mtk_ref2usb_tx* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct mtk_ref2usb_tx *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->base_addr);
 VAR_3 &= ~VAR_0;
 FUNC_2(VAR_3, VAR_2->base_addr);
}
