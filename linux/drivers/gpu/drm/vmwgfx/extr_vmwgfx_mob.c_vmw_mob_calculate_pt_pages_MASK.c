
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_4 * VAR_2;
 unsigned long VAR_6 = 0;

 while (FUNC_1(VAR_5 > VAR_2)) {
  VAR_5 = FUNC_0(VAR_5, VAR_2);
  VAR_5 *= VAR_3;
  VAR_6 += (VAR_5 + VAR_2 - 1) & VAR_0;
 }

 return VAR_6 >> VAR_1;
}
