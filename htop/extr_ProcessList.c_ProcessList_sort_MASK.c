
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
typedef int Vector ;
struct TYPE_10__ {scalar_t__ pid; int showChildren; scalar_t__ indent; int show; } ;
struct TYPE_9__ {int * processes2; int * processes; TYPE_1__* settings; } ;
struct TYPE_8__ {int direction; int sortKey; int treeView; } ;
typedef TYPE_2__ ProcessList ;
typedef TYPE_3__ Process ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int ,int ,int,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int) ;

void FUNC_9(ProcessList* VAR_1) {
   if (!VAR_1->settings->treeView) {
      FUNC_4(VAR_1->processes);
   } else {

      int VAR_2 = VAR_1->settings->direction;
      int VAR_3 = VAR_1->settings->sortKey;

      VAR_1->settings->sortKey = VAR_0;
      VAR_1->settings->direction = 1;
      FUNC_5(VAR_1->processes);

      VAR_1->settings->sortKey = VAR_3;
      VAR_1->settings->direction = VAR_2;
      int VAR_4 = FUNC_6(VAR_1->processes);

      int VAR_5;
      while ((VAR_5 = FUNC_6(VAR_1->processes))) {
         int VAR_6;
         for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            Process* VAR_7 = (Process*)(FUNC_3(VAR_1->processes, VAR_6));

            if (!VAR_7->show) {
               VAR_7 = (Process*)(FUNC_7(VAR_1->processes, VAR_6));
               VAR_7->indent = 0;
               FUNC_2(VAR_1->processes2, VAR_7);
               FUNC_0(VAR_1, VAR_7->pid, 0, 0, VAR_2, 0);
               break;
            }
            pid_t VAR_8 = FUNC_1(VAR_7);

            int VAR_9 = 0, VAR_10 = VAR_5;



            if (VAR_7->pid == VAR_8)
               VAR_10 = 0;
            while (VAR_9 < VAR_10) {
               int VAR_11 = (VAR_9 + VAR_10) / 2;
               pid_t VAR_12 = ((Process*)(FUNC_3(VAR_1->processes, VAR_11)))->pid;
               if (VAR_8 == VAR_12) {
                  break;
               } else if (VAR_8 < VAR_12) {
                  VAR_10 = VAR_11;
               } else {
                  VAR_9 = VAR_11 + 1;
               }
            }

            if (VAR_9 >= VAR_10) {
               VAR_7 = (Process*)(FUNC_7(VAR_1->processes, VAR_6));
               VAR_7->indent = 0;
               FUNC_2(VAR_1->processes2, VAR_7);
               FUNC_0(VAR_1, VAR_7->pid, 0, 0, VAR_2, VAR_7->showChildren);
               break;
            }
         }

         FUNC_8(VAR_6 < VAR_5);
      }
      FUNC_8(FUNC_6(VAR_1->processes2) == VAR_4); (void)VAR_4;
      FUNC_8(FUNC_6(VAR_1->processes) == 0);

      Vector* VAR_13 = VAR_1->processes;
      VAR_1->processes = VAR_1->processes2;
      VAR_1->processes2 = VAR_13;
   }
}
