
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_ref2usb_tx {int base_addr; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct mtk_ref2usb_tx* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_3)
{
 struct mtk_ref2usb_tx *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->base_addr);

 VAR_5 |= VAR_0;
 FUNC_3(VAR_5, VAR_4->base_addr);
 FUNC_2(100);

 VAR_5 |= VAR_1;
 FUNC_3(VAR_5, VAR_4->base_addr);

 VAR_5 |= VAR_2;
 FUNC_3(VAR_5, VAR_4->base_addr);

 return 0;
}
