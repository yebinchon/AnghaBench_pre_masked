
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ def_kind; } ;
typedef TYPE_1__ definition ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char const**) ;
 int VAR_1 ;
 char const* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*,char const*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 () ;
 int FUNC_11 (char const*,int,int) ;
 int FUNC_12 () ;

__attribute__((used)) static void
FUNC_13(int VAR_10, const char *VAR_11[], const char *VAR_12, const char *VAR_13,
    int VAR_14, const char *VAR_15, int VAR_16, int VAR_17)
{
 char *VAR_18;
 definition *VAR_19;
 int VAR_20 = 0;
 const char *VAR_21;

 FUNC_6(VAR_12, VAR_13);
 VAR_21 = VAR_14 ? FUNC_2(VAR_12, VAR_15) : VAR_15;
 FUNC_7(VAR_12, VAR_21);
 FUNC_0();
 if (VAR_12 && (VAR_18 = FUNC_2(VAR_12, ".h"))) {
  FUNC_3(VAR_2, "#include \"%s\"\n", VAR_18);
  FUNC_4(VAR_18);
 } else
  FUNC_3(VAR_2, "#include <rpc/rpc.h>\n");

 FUNC_3(VAR_2, "#include <stdio.h>\n");
 FUNC_3(VAR_2, "#include <stdlib.h> /* getenv, exit */\n");
 FUNC_3 (VAR_2, "#include <rpc/pmap_clnt.h> /* for pmap_unset */\n");
 FUNC_3 (VAR_2, "#include <string.h> /* strcmp */\n");
 if (VAR_9)
  FUNC_3(VAR_2, "#include <rpc/rpc_com.h>\n");
 if (FUNC_8(VAR_7, "-1") == 0)
  VAR_3 = 1;
 else if (FUNC_8(VAR_7, "0") == 0)
  VAR_1 = 1;
 else if (VAR_4 || VAR_6) {
  FUNC_3(VAR_2, "#include <signal.h>\n");
  VAR_8 = 1;
 }

 if (!VAR_9 && VAR_4)
  FUNC_3(VAR_2, "#include <sys/ttycom.h> /* TIOCNOTTY */\n");
 if (VAR_4 || VAR_6) {
  FUNC_3(VAR_2, "#ifdef __cplusplus\n");
  FUNC_3(VAR_2,
   "#include <sys/sysent.h> /* getdtablesize, open */\n");
  FUNC_3(VAR_2, "#endif /* __cplusplus */\n");
 }
 if (VAR_9) {
  FUNC_3(VAR_2, "#include <fcntl.h> /* open */\n");
  FUNC_3(VAR_2, "#include <unistd.h> /* fork / setsid */\n");
  FUNC_3(VAR_2, "#include <sys/types.h>\n");
 }

 FUNC_3(VAR_2, "#include <string.h>\n");
 if (VAR_4 || !VAR_9) {
  FUNC_3(VAR_2, "#include <sys/socket.h>\n");
  FUNC_3(VAR_2, "#include <netinet/in.h>\n");
 }

 if ((VAR_17 || VAR_6) && VAR_9 && !VAR_16) {
  FUNC_3(VAR_2, "#include <netconfig.h>\n");
 }
 if (VAR_9)
  FUNC_3(VAR_2, "#include <sys/resource.h> /* rlimit */\n");
 if (VAR_5 || VAR_4 || VAR_6 || VAR_9)
  FUNC_3(VAR_2, "#include <syslog.h>\n");

 FUNC_3(VAR_2, "\n#ifdef DEBUG\n#define	RPC_SVC_FG\n#endif\n");
 if (VAR_8)
  FUNC_3(VAR_2, "\n#define	_RPCSVC_CLOSEDOWN %s\n",
   VAR_7);
 while ( (VAR_19 = FUNC_5()) ) {
  VAR_20 |= (VAR_19->def_kind == VAR_0);
 }
 if (VAR_14 && !VAR_20) {
  (void) FUNC_9(VAR_21);
  return;
 }
 FUNC_11(VAR_12, VAR_17, VAR_16);
 if (!VAR_16) {
  if (!FUNC_1(VAR_10, VAR_11)) {
   if (VAR_21)
    (void) FUNC_9(VAR_21);
   FUNC_10();
  }
  FUNC_12();
 }
}
