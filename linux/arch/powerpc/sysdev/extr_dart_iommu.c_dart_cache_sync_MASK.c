
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(unsigned int *VAR_0, unsigned int VAR_1)
{





 unsigned long VAR_2 = (unsigned long)VAR_0;
 unsigned long VAR_3 = VAR_2 + (VAR_1 + 1) * sizeof(unsigned int);
 unsigned int VAR_4;


 FUNC_0(VAR_2, VAR_3);






 asm volatile(" sync;"
       " isync;"
       " dcbf 0,%1;"
       " sync;"
       " isync;"
       " lwz %0,0(%1);"
       " isync" : "=r" (VAR_4) : "r" (VAR_3) : "memory");
}
