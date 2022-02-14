
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_5__ {int pidSearch; } ;
struct TYPE_4__ {scalar_t__ pid; } ;
typedef TYPE_1__ Process ;
typedef int Panel ;
typedef TYPE_2__ MainPanel ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(MainPanel* VAR_0, int VAR_1) {
   Panel* VAR_2 = (Panel*) VAR_0;
   pid_t VAR_3 = VAR_1-48 + VAR_0->pidSearch;
   for (int VAR_4 = 0; VAR_4 < FUNC_2(VAR_2); VAR_4++) {
      Process* VAR_5 = (Process*) FUNC_0(VAR_2, VAR_4);
      if (VAR_5 && VAR_5->pid == VAR_3) {
         FUNC_1(VAR_2, VAR_4);
         break;
      }
   }
   VAR_0->pidSearch = VAR_3 * 10;
   if (VAR_0->pidSearch > 10000000) {
      VAR_0->pidSearch = 0;
   }
}
