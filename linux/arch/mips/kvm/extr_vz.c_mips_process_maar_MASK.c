
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(unsigned int VAR_7, unsigned long VAR_8)
{

 unsigned long VAR_9 = 0xfffff000 | VAR_0 | VAR_2;

 if (FUNC_0() & VAR_3)
  VAR_9 |= 0x00ffffff00000000ull;
 if (VAR_4)
  VAR_9 |= VAR_1;


 if (VAR_7 == VAR_6) {

  VAR_8 &= ~VAR_1;
 } else if (VAR_7 == VAR_5) {

  VAR_8 &= ~VAR_1;
  if (VAR_8 & VAR_2)
   VAR_8 |= VAR_1;
 }

 return VAR_8 & VAR_9;
}
