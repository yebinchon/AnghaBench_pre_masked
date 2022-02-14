
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2)
{
 FUNC_0(VAR_1, "\tregister SVCXPRT *%s;\n", VAR_0);
 FUNC_0(VAR_1, "\tint sock;\n");
 FUNC_0(VAR_1, "\tint proto;\n");
 FUNC_0(VAR_1, "\tstruct sockaddr_in saddr;\n");
 FUNC_0(VAR_1, "\tsocklen_t asize = sizeof (saddr);\n");
 FUNC_0(VAR_1, "\n");
 FUNC_0(VAR_1,
 "\tif (getsockname(0, (struct sockaddr *)&saddr, &asize) == 0) {\n");
 FUNC_0(VAR_1, "\t\tsocklen_t ssize = sizeof (int);\n\n");
 FUNC_0(VAR_1, "\t\tif (saddr.sin_family != AF_INET)\n");
 FUNC_0(VAR_1, "\t\t\texit(1);\n");
 FUNC_0(VAR_1, "\t\tif (getsockopt(0, SOL_SOCKET, SO_TYPE,\n");
 FUNC_0(VAR_1, "\t\t\t\t(char *)&_rpcfdtype, &ssize) == -1)\n");
 FUNC_0(VAR_1, "\t\t\texit(1);\n");
 FUNC_0(VAR_1, "\t\tsock = 0;\n");
 FUNC_0(VAR_1, "\t\t_rpcpmstart = 1;\n");
 FUNC_0(VAR_1, "\t\tproto = 0;\n");
 FUNC_1(VAR_2, "\t\t");
 FUNC_0(VAR_1, "\t} else {\n");
 FUNC_3(VAR_2, "\t\t");
 FUNC_0(VAR_1, "\t\tsock = RPC_ANYSOCK;\n");
 FUNC_2("\t\t");
 FUNC_0(VAR_1, "\t}\n");
}
