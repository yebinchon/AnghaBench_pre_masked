
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_4(void)
{
 unsigned int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1 || !VAR_1[VAR_2].start)
   continue;

  if (FUNC_2() || FUNC_3())
   FUNC_0(VAR_1[VAR_2].start);
  else
   FUNC_1(VAR_1[VAR_2].start, ((void*)0));

  VAR_1[VAR_2].start = 0;
 }
}
