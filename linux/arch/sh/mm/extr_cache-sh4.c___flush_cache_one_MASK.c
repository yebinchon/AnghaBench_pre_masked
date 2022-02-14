
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_info {int ways; unsigned long way_incr; } ;
struct TYPE_2__ {struct cache_info dcache; } ;


 unsigned long VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_0(unsigned long VAR_2, unsigned long VAR_3,
          unsigned long VAR_4)
{
 int VAR_5;
 unsigned long VAR_6 = VAR_2;
 struct cache_info *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;

 VAR_7 = &VAR_1.dcache;

 VAR_5 = VAR_7->ways;
 VAR_8 = VAR_7->way_incr;
 asm volatile("mov.l 1f, %0\n\t"
       "add   %1, %0\n\t"
       "jmp   @%0\n\t"
       "nop\n\t"
       ".balign 4\n\t"
       "1:  .long 2f\n\t"
       "2:\n" : "=&r" (VAR_12) : "r" (VAR_4));





 do {
  VAR_10 = VAR_6 + VAR_0;
  VAR_9 = VAR_6;
  VAR_11 = VAR_3;

  do {
   *(volatile unsigned long *)VAR_9 = VAR_11;





   *(volatile unsigned long *)(VAR_9+32) = VAR_11;
   VAR_9 += 64;
   VAR_11 += 64;
  } while (VAR_9 < VAR_10);

  VAR_6 += VAR_8;
 } while (--VAR_5 != 0);
}
