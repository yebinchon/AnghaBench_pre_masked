
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_keypad {int cols_en_mask; scalar_t__ mmio_base; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct imx_keypad *VAR_6)
{
 unsigned short VAR_7;


 VAR_7 = FUNC_0(VAR_6->mmio_base + VAR_5);
 VAR_7 &= ~(VAR_3 | VAR_0);
 VAR_7 |= VAR_2 | VAR_1;
 FUNC_1(VAR_7, VAR_6->mmio_base + VAR_5);


 VAR_7 = (VAR_6->cols_en_mask & 0xff) << 8;
 FUNC_1(VAR_7, VAR_6->mmio_base + VAR_4);
}
