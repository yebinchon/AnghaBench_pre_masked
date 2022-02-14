
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_4 ;

void
FUNC_3(void)
{
 FUNC_0(VAR_2, "\n");
 if (VAR_3) {
  FUNC_0(VAR_2, "\tif (%s == (SVCXPRT *)NULL) {\n", VAR_0);
  (void) FUNC_2(VAR_1, "could not create a handle");
  FUNC_1("\t\t");
  FUNC_0(VAR_2, "\t\texit(1);\n");
  FUNC_0(VAR_2, "\t}\n");
  if (VAR_4) {
   FUNC_0(VAR_2, "\tif (_rpcpmstart) {\n");
   FUNC_0(VAR_2,
    "\t\t(void) signal(SIGALRM, closedown);\n");
   FUNC_0(VAR_2, "\t\t(void) alarm(_RPCSVC_CLOSEDOWN/2);\n");

   FUNC_0(VAR_2, "\t}\n");
  }
 }
 FUNC_0(VAR_2, "\tsvc_run();\n");
 (void) FUNC_2(VAR_1, "svc_run returned");
 FUNC_1("\t");
 FUNC_0(VAR_2, "\texit(1);\n");
 FUNC_0(VAR_2, "\t/* NOTREACHED */\n");
 FUNC_0(VAR_2, "}\n");
}
