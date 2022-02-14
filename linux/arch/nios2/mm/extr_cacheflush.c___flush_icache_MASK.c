
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int icache_line_size; unsigned long icache_size; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 VAR_1 &= ~(VAR_0.icache_line_size - 1);
 VAR_2 += (VAR_0.icache_line_size - 1);
 VAR_2 &= ~(VAR_0.icache_line_size - 1);

 if (VAR_2 > VAR_1 + VAR_0.icache_size)
  VAR_2 = VAR_1 + VAR_0.icache_size;

 for (VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3 += VAR_0.icache_line_size) {
  __asm__ __volatile__ ("   flushi %0\n"
     :
     : "r"(VAR_3)
                       );
 }
 __asm__ __volatile(" flushp\n");
}
