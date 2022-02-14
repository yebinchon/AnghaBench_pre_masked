
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long dcache_base; unsigned long dcache_high; } ;


 unsigned long VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;

void *FUNC_1(void *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2;

 VAR_3 |= VAR_0;
 if (VAR_3 > VAR_1.dcache_base && VAR_3 < VAR_1.dcache_high)
  FUNC_0("ERROR: Your cache coherent area is CACHED!!!\n");
 return (void *)VAR_3;
}
