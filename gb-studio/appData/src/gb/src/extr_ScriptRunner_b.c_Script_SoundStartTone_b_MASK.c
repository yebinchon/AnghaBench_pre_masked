
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_0()
{
  UWORD VAR_13 = (VAR_9[0] * 256) + VAR_9[1];


  VAR_7 = 0x80;


  VAR_0 = 0x00;
  VAR_1 = (0x00 << 6) | 0x01;
  VAR_2 = (0x0F << 4) | 0x00;
  VAR_3 = (VAR_13 & 0x00FF);
  VAR_4 = 0x80 | ((VAR_13 & 0x0700) >> 8);


  VAR_5 = 0x77;


  VAR_6 |= 0x11;

  VAR_12 += 1 + VAR_10;
  VAR_11 = VAR_8;
}
