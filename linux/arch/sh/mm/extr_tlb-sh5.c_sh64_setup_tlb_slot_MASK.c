
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long FUNC_0 (unsigned long) ;

void FUNC_1(unsigned long long VAR_6, unsigned long VAR_7,
    unsigned long VAR_8, unsigned long VAR_9)
{
 unsigned long long VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_7);
 VAR_10 &= VAR_0;
 VAR_10 |= (VAR_8 << VAR_1) | VAR_2;
 VAR_11 = FUNC_0(VAR_9);
 VAR_11 &= VAR_0;
 VAR_11 |= (VAR_3 | VAR_4 | VAR_5);

 asm volatile("putcfg %0, 1, %1\n\t"
   "putcfg %0, 0, %2\n"
   : : "r" (VAR_6), "r" (VAR_11), "r" (VAR_10));
}
