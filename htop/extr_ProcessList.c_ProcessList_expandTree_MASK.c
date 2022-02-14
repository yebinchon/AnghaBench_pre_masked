
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int showChildren; } ;
struct TYPE_4__ {int processes; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ Process ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(ProcessList* VAR_0) {
   int VAR_1 = FUNC_1(VAR_0->processes);
   for (int VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
      Process* VAR_3 = (Process*) FUNC_0(VAR_0->processes, VAR_2);
      VAR_3->showChildren = 1;
   }
}
