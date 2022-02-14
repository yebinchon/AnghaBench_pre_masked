
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_4__ {int tag; int pid; } ;
typedef TYPE_1__ Process ;
typedef int Panel ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(Panel* VAR_0, Process* VAR_1) {
   VAR_1->tag = 1;
   pid_t VAR_2 = VAR_1->pid;
   for (int VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++) {
      Process* VAR_4 = (Process*) FUNC_0(VAR_0, VAR_3);
      if (!VAR_4->tag && FUNC_2(VAR_4, VAR_2)) {
         FUNC_3(VAR_0, VAR_4);
      }
   }
}
