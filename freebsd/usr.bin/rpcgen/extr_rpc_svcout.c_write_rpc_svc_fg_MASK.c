
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_4, const char *VAR_5)
{
 FUNC_0(VAR_0, "#ifndef RPC_SVC_FG\n");
 FUNC_0(VAR_0, "%sint size;\n", VAR_5);
 if (VAR_3)
  FUNC_0(VAR_0, "%sstruct rlimit rl;\n", VAR_5);
 if (VAR_1)
  FUNC_0(VAR_0, "%sint pid, i;\n\n", VAR_5);
 FUNC_0(VAR_0, "%spid = fork();\n", VAR_5);
 FUNC_0(VAR_0, "%sif (pid < 0) {\n", VAR_5);
 FUNC_0(VAR_0, "%s\tperror(\"cannot fork\");\n", VAR_5);
 FUNC_0(VAR_0, "%s\texit(1);\n", VAR_5);
 FUNC_0(VAR_0, "%s}\n", VAR_5);
 FUNC_0(VAR_0, "%sif (pid)\n", VAR_5);
 FUNC_0(VAR_0, "%s\texit(0);\n", VAR_5);

 if (VAR_3) {
  FUNC_0(VAR_0, "%srl.rlim_max = 0;\n", VAR_5);
  FUNC_0(VAR_0, "%sif (getrlimit(RLIMIT_NOFILE, &rl) == -1) {\n",
      VAR_5);
  FUNC_0(VAR_0, "%s\tperror(\"getrlimit\");\n", VAR_5);
  FUNC_0(VAR_0, "%s\texit(1);\n", VAR_5);
  FUNC_0(VAR_0, "%s}\n", VAR_5);
  FUNC_0(VAR_0, "%sif ((size = rl.rlim_max) == 0)\n", VAR_5);
  FUNC_0(VAR_0, "%s\texit(1);\n", VAR_5);
 } else {
  FUNC_0(VAR_0, "%ssize = getdtablesize();\n", VAR_5);
 }

 FUNC_0(VAR_0, "%sfor (i = 0; i < size; i++)\n", VAR_5);
 FUNC_0(VAR_0, "%s\t(void) close(i);\n", VAR_5);

 FUNC_0(VAR_0, "%si = open(\"/dev/console\", 2);\n", VAR_5);
 FUNC_0(VAR_0, "%s(void) dup2(i, 1);\n", VAR_5);
 FUNC_0(VAR_0, "%s(void) dup2(i, 2);\n", VAR_5);

 if (VAR_3)
  FUNC_0(VAR_0, "%ssetsid();\n", VAR_5);
 else {
  FUNC_0(VAR_0, "%si = open(\"/dev/tty\", 2);\n", VAR_5);
  FUNC_0(VAR_0, "%sif (i >= 0) {\n", VAR_5);
  FUNC_0(VAR_0,
   "%s\t(void) ioctl(i, TIOCNOTTY, (char *)NULL);\n", VAR_5);
  FUNC_0(VAR_0, "%s\t(void) close(i);\n", VAR_5);
  FUNC_0(VAR_0, "%s}\n", VAR_5);
 }
 if (!VAR_2)
  FUNC_1(VAR_4, VAR_5);
 FUNC_0(VAR_0, "#endif\n");
 if (VAR_2)
  FUNC_1(VAR_4, VAR_5);
}
