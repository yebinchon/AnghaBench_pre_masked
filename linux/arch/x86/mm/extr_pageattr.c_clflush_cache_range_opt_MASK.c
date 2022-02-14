
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long x86_clflush_size; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, unsigned int VAR_2)
{
 const unsigned long VAR_3 = VAR_0.x86_clflush_size;
 void *VAR_4 = (void *)((unsigned long)VAR_1 & ~(VAR_3 - 1));
 void *VAR_5 = VAR_1 + VAR_2;

 if (VAR_4 >= VAR_5)
  return;

 for (; VAR_4 < VAR_5; VAR_4 += VAR_3)
  FUNC_0(VAR_4);
}
