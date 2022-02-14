
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid; } ;
typedef TYPE_1__ Process ;
typedef int Panel ;
typedef int MainPanel ;


 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(MainPanel* VAR_0) {
   Process* VAR_1 = (Process*) FUNC_0((Panel*)VAR_0);
   if (VAR_1) {
      return VAR_1->pid;
   }
   return -1;
}
