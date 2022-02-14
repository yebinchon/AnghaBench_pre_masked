
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (unsigned int) ;

unsigned int FUNC_2(unsigned int VAR_4,
       unsigned int VAR_5)
{
 if (VAR_4 & ~VAR_5) {
  VAR_4 ^= VAR_1 | VAR_2;
  VAR_4 = (VAR_4 & VAR_0) |
             FUNC_0((FUNC_1(VAR_4 & VAR_3) + 1)
             % 4);
 }

 return VAR_4;
}
