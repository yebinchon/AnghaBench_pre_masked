
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_0)
{
 unsigned long VAR_1;




 VAR_1 = 0;

 asm("b 1f\n\t"
     ".align 5\n\t"
     "1:\n\t"
     "mcr p15, 0, %0, c7, c10, 5\n\t"
     "mcr p15, 0, %0, c7, c10, 4\n\t"
     "wfi" : : "r" (VAR_1));

 FUNC_0("Failed to suspend the system\n");
 return 1;
}
