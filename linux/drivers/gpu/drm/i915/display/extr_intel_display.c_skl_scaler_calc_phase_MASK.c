
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

u16 FUNC_1(int VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5 = -0x8000;
 u16 VAR_6 = 0;

 if (VAR_4)
  VAR_5 += (VAR_2 - 1) * 0x8000 / VAR_2;

 VAR_5 += VAR_3 / (2 * VAR_2);






 FUNC_0(VAR_5 < -0x8000 || VAR_5 > 0x18000);

 if (VAR_5 < 0)
  VAR_5 = 0x10000 + VAR_5;
 else
  VAR_6 = VAR_1;

 return ((VAR_5 >> 2) & VAR_0) | VAR_6;
}
