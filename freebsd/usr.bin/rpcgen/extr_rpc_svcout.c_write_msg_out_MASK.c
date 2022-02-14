
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
 FUNC_0(VAR_0, "\n");




 FUNC_0(VAR_0, "static\n");
 FUNC_0(VAR_0, "void _msgout(const char* msg)\n");
 FUNC_0(VAR_0, "{\n");
 FUNC_0(VAR_0, "#ifdef RPC_SVC_FG\n");
 if (VAR_1 || VAR_2)
  FUNC_0(VAR_0, "\tif (_rpcpmstart)\n");
 FUNC_0(VAR_0, "\t\tsyslog(LOG_ERR, \"%%s\", msg);\n");
 FUNC_0(VAR_0, "\telse\n");
 FUNC_0(VAR_0,
  "\t\t(void) fprintf(stderr, \"%%s\\n\", msg);\n");
 FUNC_0(VAR_0, "#else\n");
 FUNC_0(VAR_0, "\tsyslog(LOG_ERR, \"%%s\", msg);\n");
 FUNC_0(VAR_0, "#endif\n");
 FUNC_0(VAR_0, "}\n");
}
