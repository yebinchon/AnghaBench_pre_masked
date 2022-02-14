
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kernel; } ;
typedef int Process ;
typedef TYPE_1__ FreeBSDProcess ;


 int FUNC_0 (int *) ;

bool FUNC_1(Process* VAR_0) {
   FreeBSDProcess* VAR_1 = (FreeBSDProcess*) VAR_0;

   if (VAR_1->kernel == 1 )
      return 1;
   else
      return (FUNC_0(VAR_0));
}
