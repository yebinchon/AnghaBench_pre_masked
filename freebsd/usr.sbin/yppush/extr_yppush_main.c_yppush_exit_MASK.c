
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jobs {scalar_t__ polled; int server; char* tid; struct jobs* next; int prognum; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 struct jobs* VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_3)
{
 struct jobs *VAR_4;
 int VAR_5 = 1;


 while (!VAR_3 && VAR_5) {
  VAR_4 = VAR_2;
  VAR_5 = 0;
  while (VAR_4) {
   if (VAR_4->polled == 0) {
    VAR_5++;
    if (VAR_1 > 1)
     FUNC_2("%s has not responded",
        VAR_4->server);
   } else {
    if (VAR_1 > 1)
     FUNC_2("%s has responded",
        VAR_4->server);
   }
   VAR_4 = VAR_4->next;
  }
  if (VAR_5) {
   if (VAR_1 > 1)
    FUNC_2("%d transfer%sstill pending",
     VAR_5,
     VAR_5 > 1 ? "s " : " ");
   if (FUNC_3 (VAR_0) == 0) {
    FUNC_2("timed out");
    VAR_3 = 1;
   }
  } else {
   if (VAR_1)
    FUNC_2("all transfers complete");
   break;
  }
 }



 VAR_4 = VAR_2;
 while (VAR_4) {
  if (!VAR_4->polled)
   FUNC_2("warning: exiting with transfer to %s (transid = %lu) still pending", VAR_4->server, VAR_4->tid);

  FUNC_1(VAR_4->prognum, 1);
  VAR_4 = VAR_4->next;
 }

 FUNC_0(0);
}
