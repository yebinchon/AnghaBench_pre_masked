
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_3__ {scalar_t__ pid; int showChildren; } ;
typedef TYPE_1__ Process ;
typedef int Panel ;


 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_5(Panel* VAR_0) {
   Process* VAR_1 = (Process*) FUNC_1(VAR_0);
   if (!VAR_1) return 0;
   pid_t VAR_2 = FUNC_4(VAR_1);
   for (int VAR_3 = 0; VAR_3 < FUNC_3(VAR_0); VAR_3++) {
      Process* VAR_4 = (Process*) FUNC_0(VAR_0, VAR_3);
      if (VAR_4->pid == VAR_2) {
         VAR_4->showChildren = 0;
         FUNC_2(VAR_0, VAR_3);
         return 1;
      }
   }
   return 0;
}
