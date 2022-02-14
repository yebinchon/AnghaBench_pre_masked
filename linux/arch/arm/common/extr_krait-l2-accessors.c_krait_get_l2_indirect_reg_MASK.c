
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

u32 FUNC_3(u32 VAR_1)
{
 u32 VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0, VAR_3);




 asm volatile ("mcr p15, 3, %0, c15, c0, 6 @ l2cpselr" : : "r" (VAR_1));
 FUNC_0();
 asm volatile ("mrc p15, 3, %0, c15, c0, 7 @ l2cpdr" : "=r" (VAR_2));

 FUNC_2(&VAR_0, VAR_3);

 return VAR_2;
}
