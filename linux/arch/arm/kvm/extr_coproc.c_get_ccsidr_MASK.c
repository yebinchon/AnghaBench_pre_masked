
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static u32 FUNC_3(u32 VAR_0)
{
 u32 VAR_1;


 FUNC_1();

 asm volatile("mcr p15, 2, %0, c0, c0, 0" : : "r" (VAR_0));
 FUNC_0();

 asm volatile("mrc p15, 1, %0, c0, c0, 0" : "=r" (VAR_1));
 FUNC_2();

 return VAR_1;
}
