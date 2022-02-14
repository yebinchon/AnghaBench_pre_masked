
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned long FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(unsigned int VAR_3)
{
 if (!(VAR_2->flags & VAR_1))
  return 0;
 return (FUNC_0() & ((1UL << VAR_3) - 1)) << VAR_0;
}
