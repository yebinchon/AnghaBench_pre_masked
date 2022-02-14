
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2,
  unsigned long VAR_3, u16 *VAR_4, u16 *VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 if (VAR_2 <= VAR_3) {

  VAR_2 = VAR_3;
  *VAR_4 = 0;
  *VAR_5 = 0;
 } else {

  if (VAR_2 < VAR_1)
   VAR_2 = VAR_1;
  else if (VAR_2 > VAR_0)
   VAR_2 = VAR_0;

  VAR_8 = FUNC_0(VAR_2, VAR_3);
  VAR_7 = VAR_3 / VAR_8;
  VAR_6 = VAR_2 / VAR_8;

  while ((VAR_6 > 4095) || (VAR_7 > 511)) {
   VAR_6 >>= 1;
   VAR_7 >>= 1;
  }
  if (VAR_6 == 0)
   VAR_6 = 1;
  if (VAR_7 == 0)
   VAR_7 = 1;

  *VAR_4 = VAR_6;
  *VAR_5 = VAR_7;
 }
}
