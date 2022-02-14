
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int dummy; } ;
struct ctx {char* ifnam; int flags; struct pidfh* pfh; int pidfile; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 struct pidfh* FUNC_3 (int ,int,int *) ;
 int FUNC_4 (struct pidfh*) ;
 int FUNC_5 (struct pidfh*) ;
 int FUNC_6 (int ,int,char*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(struct ctx *VAR_6)
{
 struct pidfh *VAR_7;
 pid_t VAR_8;

 FUNC_6(VAR_6->pidfile, 127, VAR_3, VAR_6->ifnam);

 VAR_7 = FUNC_3(VAR_6->pidfile, 0600, &VAR_8);
 if (VAR_7 == ((void*)0)) {
  FUNC_7("Cannot create pidfile %s", VAR_6->pidfile);
  return;
 }

 if (FUNC_0(0, 0) == -1) {
  FUNC_7("Cannot daemonize");
  FUNC_4(VAR_7);
  return;
 }

 FUNC_5(VAR_7);
 VAR_6->pfh = VAR_7;
 VAR_6->flags |= VAR_0;

 FUNC_6(VAR_5, 63, "%s:%s", FUNC_1(), VAR_6->ifnam);
 FUNC_2(VAR_5, VAR_1, VAR_2);
 VAR_4 = 1;
}
