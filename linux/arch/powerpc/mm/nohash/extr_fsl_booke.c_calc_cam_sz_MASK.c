
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

unsigned long FUNC_3(unsigned long VAR_5, unsigned long VAR_6,
     phys_addr_t VAR_7)
{
 unsigned int VAR_8 = FUNC_1(VAR_5);
 unsigned int VAR_9 = FUNC_0(VAR_6 | VAR_7);
 unsigned long VAR_10;

 if ((FUNC_2(VAR_2) & VAR_0) == VAR_1) {

  VAR_10 = ((FUNC_2(VAR_3) >> 16) & 0xf) * 2 + 10;
  VAR_8 &= ~1U;
  VAR_9 &= ~1U;
 } else {

  VAR_10 = FUNC_1(FUNC_2(VAR_4)) + 10;
 }

 if (VAR_8 > VAR_9)
  VAR_8 = VAR_9;
 if (VAR_8 > VAR_10)
  VAR_8 = VAR_10;

 return 1UL << VAR_8;
}
