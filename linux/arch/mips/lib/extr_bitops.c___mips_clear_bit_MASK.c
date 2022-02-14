
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

void FUNC_2(unsigned long VAR_2, volatile unsigned long *VAR_3)
{
 unsigned long *VAR_4 = (unsigned long *)VAR_3;
 unsigned VAR_5 = VAR_2 & VAR_1;
 unsigned long VAR_6;
 unsigned long VAR_7;

 VAR_4 += VAR_2 >> VAR_0;
 VAR_6 = 1UL << VAR_5;
 FUNC_1(VAR_7);
 *VAR_4 &= ~VAR_6;
 FUNC_0(VAR_7);
}
