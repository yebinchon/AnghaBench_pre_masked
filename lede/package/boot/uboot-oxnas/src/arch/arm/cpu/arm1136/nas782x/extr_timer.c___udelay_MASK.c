
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

void FUNC_1 (unsigned long VAR_4)
{
 ulong VAR_5, VAR_6;

 if (VAR_4 > 100000) {
  VAR_5 = VAR_4 / 1000;
  VAR_5 *= VAR_0;
  VAR_5 /= 1000;

  VAR_6 = FUNC_0 (0);
  while (FUNC_0 (VAR_6) < VAR_5)
          ;
 } else {
  VAR_5 = VAR_4 * (VAR_2 / 1000) / 1000;

  VAR_6 = VAR_1;
  while (((VAR_1 -VAR_6) & VAR_3) < VAR_5)
          ;
 }
}
