
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _dom_binding {char* dom_domain; int dom_vers; scalar_t__ dom_broadcast_pid; int dom_lockfd; struct _dom_binding* dom_pnext; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*,char*,char*,char*,int ) ;
 int FUNC_6 (char*) ;
 struct _dom_binding* VAR_7 ;
 int VAR_8 ;

void
FUNC_7(int VAR_9)
{
 struct _dom_binding *VAR_10;
 char VAR_11[VAR_1];

 if (VAR_6 != FUNC_2())
  FUNC_1(0);

 for (VAR_10 = VAR_7; VAR_10; VAR_10 = VAR_10->dom_pnext) {
  FUNC_0(VAR_10->dom_lockfd);
  if (VAR_10->dom_broadcast_pid)
   FUNC_3(VAR_10->dom_broadcast_pid, VAR_2);
  FUNC_5(VAR_11, "%s/%s.%ld", VAR_0,
   VAR_10->dom_domain, VAR_10->dom_vers);
  FUNC_6(VAR_11);
 }
 FUNC_0(VAR_8);
 FUNC_6(VAR_3);
 FUNC_4(VAR_4, VAR_5);
 FUNC_1(0);
}
