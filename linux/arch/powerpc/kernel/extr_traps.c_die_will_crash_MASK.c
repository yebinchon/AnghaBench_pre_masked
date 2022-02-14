
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pid; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 () ;

bool FUNC_4(void)
{
 if (FUNC_3())
  return 1;
 if (FUNC_2(VAR_0))
  return 1;
 if (FUNC_0() || VAR_1 ||
   !VAR_0->pid || FUNC_1(VAR_0))
  return 1;

 return 0;
}
