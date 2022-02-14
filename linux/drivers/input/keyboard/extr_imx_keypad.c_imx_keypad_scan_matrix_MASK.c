
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_keypad {int cols_en_mask; unsigned short rows_en_mask; scalar_t__ mmio_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct imx_keypad *VAR_3,
      unsigned short *VAR_4)
{
 int VAR_5;
 unsigned short VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if ((VAR_3->cols_en_mask & (1 << VAR_5)) == 0)
   continue;






  VAR_6 = FUNC_0(VAR_3->mmio_base + VAR_1);
  VAR_6 |= 0xff00;
  FUNC_2(VAR_6, VAR_3->mmio_base + VAR_1);

  VAR_6 = FUNC_0(VAR_3->mmio_base + VAR_0);
  VAR_6 &= ~((VAR_3->cols_en_mask & 0xff) << 8);
  FUNC_2(VAR_6, VAR_3->mmio_base + VAR_0);

  FUNC_1(2);

  VAR_6 = FUNC_0(VAR_3->mmio_base + VAR_0);
  VAR_6 |= (VAR_3->cols_en_mask & 0xff) << 8;
  FUNC_2(VAR_6, VAR_3->mmio_base + VAR_0);






  VAR_6 = FUNC_0(VAR_3->mmio_base + VAR_1);
  VAR_6 &= ~(1 << (8 + VAR_5));
  FUNC_2(VAR_6, VAR_3->mmio_base + VAR_1);





  FUNC_1(5);





  VAR_6 = FUNC_0(VAR_3->mmio_base + VAR_1);
  VAR_4[VAR_5] = (~VAR_6) & VAR_3->rows_en_mask;
 }





 VAR_6 = FUNC_0(VAR_3->mmio_base + VAR_1);
 VAR_6 &= 0x00ff;
 FUNC_2(VAR_6, VAR_3->mmio_base + VAR_1);
}
