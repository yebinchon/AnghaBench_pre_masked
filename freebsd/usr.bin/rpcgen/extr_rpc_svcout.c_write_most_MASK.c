
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int) ;

void
FUNC_8(const char *VAR_9, int VAR_10, int VAR_11)
{
 if (VAR_2 || VAR_5) {
  const char *VAR_12;
  VAR_12 = (VAR_11? "extern" : "static");
  FUNC_0(VAR_1, "%s int _rpcpmstart;", VAR_12);
  FUNC_0(VAR_1, "\t\t/* Started by a port monitor ? */\n");
  if (!VAR_8 || VAR_7) {
   FUNC_0(VAR_1, "%s int _rpcfdtype;", VAR_12);
   FUNC_0(VAR_1, "\n\t\t /* Whether Stream or Datagram ? */\n");

  }

  if (VAR_6) {
   FUNC_0(VAR_1, "	/* States a server can be in wrt request */\n\n");

   FUNC_0(VAR_1, "#define\t_IDLE 0\n");
   FUNC_0(VAR_1, "#define\t_SERVED 1\n");
   FUNC_0(VAR_1, "#define\t_SERVING 2\n\n");
   FUNC_0(VAR_1, "static int _rpcsvcstate = _IDLE;");
   FUNC_0(VAR_1, "\t /* Set when a request is serviced */\n");


   if (VAR_4) {
    FUNC_0(VAR_1, "pthread_mutex_t _svcstate_lock;");
    FUNC_0(VAR_1, "\t\t\t/* Mutex lock for variable _rpcsvcstate */\n");

   }

  }

  FUNC_7(VAR_11);
 }

 FUNC_5((char *)((void*)0));

 if (VAR_11)
  return;

 FUNC_0(VAR_1, "\nint\n");
 FUNC_0(VAR_1, "main()\n");
 FUNC_0(VAR_1, "{\n");
 if (VAR_2) {
  FUNC_3(VAR_9);

 } else {
  if (VAR_8) {
   if (VAR_10) {
    FUNC_0(VAR_1,
     "\tregister SVCXPRT *%s;\n", VAR_0);
    FUNC_0(VAR_1,
     "\tstruct netconfig *nconf = NULL;\n");
   }
   FUNC_0(VAR_1, "\tpid_t pid;\n");
   FUNC_0(VAR_1, "\tint i;\n");
   if (VAR_5) {
    if (VAR_7) {
     FUNC_0(VAR_1, "\tstruct sockaddr_storage saddr;\n");
     FUNC_0(VAR_1, "\tsocklen_t asize = sizeof (saddr);\n\n");
    } else
     FUNC_0(VAR_1, "\tchar mname[FMNAMESZ + 1];\n\n");
   }

   if (VAR_4 & VAR_6)
    FUNC_0(VAR_1, "\tmutex_init(&_svcstate_lock, USYNC_THREAD, NULL);\n");
   if (VAR_5) {
    FUNC_4(VAR_9, VAR_10);
    FUNC_0(VAR_1, "\telse {\n");
    FUNC_6(VAR_9, "\t\t");
    FUNC_0(VAR_1, "\t}\n");
   } else
    FUNC_6(VAR_9, "\t\t");

  } else {
   FUNC_0(VAR_1, "\tregister SVCXPRT *%s;\n", VAR_0);
   FUNC_0(VAR_1, "\n");
   FUNC_2("\t");
  }
 }

 if (VAR_3 && !VAR_2) {
  FUNC_1(VAR_9, "\t");
 }
}
