
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(unsigned long VAR_3)
{
 u32 VAR_4;
 FUNC_0();
 VAR_4 = FUNC_1(VAR_2);
 VAR_4 &= ~(VAR_1 | VAR_0);
 FUNC_2(VAR_4, VAR_2);
 FUNC_3();
 FUNC_4();

 __asm__ __volatile__("jr.toff %0\n\t"::"r"(VAR_3));
}
