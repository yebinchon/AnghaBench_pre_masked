
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int* VAR_0 ;

int
FUNC_0(u8 *VAR_1, int VAR_2, u8 *VAR_3)
{
 int VAR_4 = 0;
 u16 VAR_5;

 while (VAR_4 < VAR_2) {
  VAR_5 = VAR_0[*VAR_1++];
  *VAR_3++ = VAR_5 >> 8;
  *VAR_3++ = VAR_5;
  VAR_4++;
 }

 return VAR_2 << 1;
}
