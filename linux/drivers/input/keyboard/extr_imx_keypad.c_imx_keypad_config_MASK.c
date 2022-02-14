
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_keypad {int rows_en_mask; int cols_en_mask; scalar_t__ mmio_base; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct imx_keypad *VAR_10)
{
 unsigned short VAR_11;





 VAR_11 = FUNC_0(VAR_10->mmio_base + VAR_7);
 VAR_11 |= VAR_10->rows_en_mask & 0xff;
 VAR_11 |= (VAR_10->cols_en_mask & 0xff) << 8;
 FUNC_1(VAR_11, VAR_10->mmio_base + VAR_7);


 VAR_11 = FUNC_0(VAR_10->mmio_base + VAR_8);
 VAR_11 &= 0x00ff;
 FUNC_1(VAR_11, VAR_10->mmio_base + VAR_8);


 FUNC_1(0xff00, VAR_10->mmio_base + VAR_6);





 VAR_11 = FUNC_0(VAR_10->mmio_base + VAR_9);
 VAR_11 |= VAR_3 | VAR_2 |
     VAR_1 | VAR_5;
 FUNC_1(VAR_11, VAR_10->mmio_base + VAR_9);


 VAR_11 |= VAR_0;
 VAR_11 &= ~VAR_4;
 FUNC_1(VAR_11, VAR_10->mmio_base + VAR_9);
}
