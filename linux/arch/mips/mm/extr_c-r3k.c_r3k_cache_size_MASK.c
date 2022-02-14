
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;

unsigned long FUNC_2(unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6, VAR_7;
 volatile unsigned long *VAR_8;

 VAR_8 = (volatile unsigned long *) VAR_0;

 VAR_4 = FUNC_0();


 FUNC_1((VAR_3|VAR_4)&~VAR_2);

 *VAR_8 = 0xa5a55a5a;
 VAR_6 = *VAR_8;
 VAR_5 = FUNC_0();

 if (VAR_6 != 0xa5a55a5a || (VAR_5 & VAR_1)) {
  VAR_7 = 0;
 } else {
  for (VAR_7 = 128; VAR_7 <= 0x40000; VAR_7 <<= 1)
   *(VAR_8 + VAR_7) = 0;
  *VAR_8 = -1;
  for (VAR_7 = 128;
       (VAR_7 <= 0x40000) && (*(VAR_8 + VAR_7) == 0);
       VAR_7 <<= 1)
   ;
  if (VAR_7 > 0x40000)
   VAR_7 = 0;
 }

 FUNC_1(VAR_4);

 return VAR_7 * sizeof(*VAR_8);
}
