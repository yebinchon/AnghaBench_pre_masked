
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,char*,unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(unsigned long VAR_2)
{
 unsigned long VAR_3 = 0;

set_register:
 asm volatile("mov %0,%%cr4": "+r" (VAR_2), "+m" (VAR_0));

 if (FUNC_1(&VAR_1)) {
  if (FUNC_2((VAR_2 & VAR_0) != VAR_0)) {
   VAR_3 = ~VAR_2 & VAR_0;
   VAR_2 |= VAR_3;
   goto set_register;
  }

  FUNC_0(VAR_3, "CR4 bits went missing: %lx!?\n",
     VAR_3);
 }
}
