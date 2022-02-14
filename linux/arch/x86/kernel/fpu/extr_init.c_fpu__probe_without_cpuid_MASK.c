
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static bool FUNC_3(void)
{
 unsigned long VAR_2;
 u16 VAR_3, VAR_4;

 VAR_3 = VAR_4 = 0xffff;

 VAR_2 = FUNC_1();
 VAR_2 &= ~(VAR_1 | VAR_0);
 FUNC_2(VAR_2);

 asm volatile("fninit ; fnstsw %0 ; fnstcw %1" : "+m" (VAR_3), "+m" (VAR_4));

 FUNC_0("x86/fpu: Probing for FPU: FSW=0x%04hx FCW=0x%04hx\n", VAR_3, VAR_4);

 return VAR_3 == 0 && (VAR_4 & 0x103f) == 0x003f;
}
