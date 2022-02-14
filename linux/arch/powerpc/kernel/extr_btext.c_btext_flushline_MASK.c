
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(void)
{
 unsigned int *VAR_4 = (unsigned int *)FUNC_0(0, VAR_3 << 4);
 unsigned long VAR_5 = ((VAR_1[2] - VAR_1[0]) *
     (VAR_0 >> 3)) >> 2;
 int VAR_6,VAR_7;

 for (VAR_6=0; VAR_6 < 16; VAR_6++)
 {
  unsigned int *VAR_8 = VAR_4;
  for(VAR_7 = VAR_5; VAR_7 > 0; VAR_7 -= 8) {
   __asm__ __volatile__ ("dcbst 0,%0" :: "r" (VAR_8));
   VAR_8 += 8;
  }
  VAR_4 += (VAR_2 >> 2);
 }
 __asm__ __volatile__ ("sync" ::: "memory");
}
