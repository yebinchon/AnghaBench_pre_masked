
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{
 if (!VAR_3)
  return;

 FUNC_0(VAR_0, "\n");
 FUNC_0(VAR_0, "static void\n");
 FUNC_0(VAR_0, "closedown(int sig)\n");
 FUNC_0(VAR_0, "{\n");
 if (VAR_1)
  FUNC_0(VAR_0, "\tpthread_mutex_lock(&_svcstate_lock);\n");
 FUNC_0(VAR_0, "\tif (_rpcsvcstate == _IDLE) {\n");
 FUNC_0(VAR_0, "\t\textern fd_set svc_fdset;\n");
 FUNC_0(VAR_0, "\t\tstatic int size;\n");
 FUNC_0(VAR_0, "\t\tint i, openfd;\n");
 if (VAR_4 && VAR_2) {
  FUNC_0(VAR_0, "\t\tstruct t_info tinfo;\n\n");
  FUNC_0(VAR_0,
   "\t\tif (!t_getinfo(0, &tinfo) && (tinfo.servtype == T_CLTS))\n");
 } else {
  FUNC_0(VAR_0, "\n\t\tif (_rpcfdtype == SOCK_DGRAM)\n");
 }
 FUNC_0(VAR_0, "\t\t\texit(0);\n");
 FUNC_0(VAR_0, "\t\tif (size == 0) {\n");
 if (VAR_4) {
  FUNC_0(VAR_0, "\t\t\tstruct rlimit rl;\n\n");
  FUNC_0(VAR_0, "\t\t\trl.rlim_max = 0;\n");
  FUNC_0(VAR_0, "\t\t\tif (getrlimit(RLIMIT_NOFILE, &rl) == -1)\n");
  FUNC_0(VAR_0, "\t\t\t\treturn;\n");
  FUNC_0(VAR_0, "\t\t\tif ((size = rl.rlim_max) == 0) {\n");

  if (VAR_1)
   FUNC_0(VAR_0, "\t\t\t\tpthread_mutex_unlock(&_svcstate_lock);\n");

  FUNC_0(VAR_0, "\t\t\t\treturn;\n\t\t\t}\n");
 } else {
  FUNC_0(VAR_0, "\t\t\tsize = getdtablesize();\n");
 }
 FUNC_0(VAR_0, "\t\t}\n");
 FUNC_0(VAR_0,
  "\t\tfor (i = 0, openfd = 0; i < size && openfd < 2; i++)\n");
 FUNC_0(VAR_0, "\t\t\tif (FD_ISSET(i, &svc_fdset))\n");
 FUNC_0(VAR_0, "\t\t\t\topenfd++;\n");
 FUNC_0(VAR_0, "\t\tif (openfd <= 1)\n");
 FUNC_0(VAR_0, "\t\t\texit(0);\n");
 FUNC_0(VAR_0, "\t}\n");
 FUNC_0(VAR_0, "\tif (_rpcsvcstate == _SERVED)\n");
 FUNC_0(VAR_0, "\t\t_rpcsvcstate = _IDLE;\n\n");
 if (VAR_1)
  FUNC_0(VAR_0, "\tpthread_mutex_unlock(&_svcstate_lock);\n");

 FUNC_0(VAR_0, "\t(void) signal(SIGALRM, closedown);\n");
 FUNC_0(VAR_0, "\t(void) alarm(_RPCSVC_CLOSEDOWN/2);\n");
 FUNC_0(VAR_0, "}\n");

}
