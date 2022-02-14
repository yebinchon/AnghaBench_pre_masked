
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* vers_name; int vers_num; struct TYPE_9__* next; } ;
typedef TYPE_3__ version_list ;
struct TYPE_10__ {scalar_t__ val; struct TYPE_10__* next; } ;
typedef TYPE_4__ list ;
struct TYPE_7__ {TYPE_3__* versions; } ;
struct TYPE_8__ {TYPE_1__ pr; } ;
struct TYPE_11__ {scalar_t__ def_kind; char* def_name; TYPE_2__ def; } ;
typedef TYPE_5__ definition ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_8, int VAR_9)
{
 list *VAR_10;
 definition *VAR_11;
 version_list *VAR_12;

 if (VAR_6) {
  FUNC_0(VAR_4,
  "\tif (getsockname(0, (struct sockaddr *)&saddr, &asize) == 0) {\n");
  FUNC_0(VAR_4, "\t\tsocklen_t ssize = sizeof (int);\n");
 } else {
  FUNC_0(VAR_4, "\tif (!ioctl(0, I_LOOK, mname) &&\n");
  FUNC_0(VAR_4, "\t\t(!strcmp(mname, \"sockmod\") ||");
  FUNC_0(VAR_4, " !strcmp(mname, \"timod\"))) {\n");
 }
 FUNC_0(VAR_4, "\t\tchar *netid;\n");
 if (!VAR_9) {
  FUNC_0(VAR_4, "\t\tstruct netconfig *nconf = NULL;\n");
  FUNC_0(VAR_4, "\t\tSVCXPRT *%s;\n", VAR_1);
 }
 if (VAR_5)
  FUNC_0(VAR_4, "\t\tint pmclose;\n");




 FUNC_0(VAR_4, "\n");
 if (VAR_6) {
  FUNC_0(VAR_4, "\t\tif (saddr.ss_family != AF_INET &&\n");
  FUNC_0(VAR_4, "\t\t    saddr.ss_family != AF_INET6)\n");
  FUNC_0(VAR_4, "\t\t\texit(1);\n");
  FUNC_0(VAR_4, "\t\tif (getsockopt(0, SOL_SOCKET, SO_TYPE,\n");
  FUNC_0(VAR_4, "\t\t\t\t(char *)&_rpcfdtype, &ssize) == -1)\n");
  FUNC_0(VAR_4, "\t\t\texit(1);\n");
 }
 FUNC_0(VAR_4, "\t\t_rpcpmstart = 1;\n");
 FUNC_1(VAR_8, "\t\t");
 FUNC_0(VAR_4, "\n\t\tif ((netid = getenv(\"NLSPROVIDER\")) == NULL) {\n");


 if (VAR_5) {
  FUNC_0(VAR_4, "\t\t/* started from inetd */\n");
  FUNC_0(VAR_4, "\t\t\tpmclose = 1;\n");
 }
 FUNC_0(VAR_4,
  "\t\t} else {\n");
 FUNC_0(VAR_4, "\t\t\tif ((nconf = getnetconfigent(netid)) == NULL)\n");
 FUNC_4(VAR_2, "cannot get transport info");
 FUNC_2("\t\t\t\t");
       if (VAR_5) {
  if (VAR_6)
   FUNC_0(VAR_4, "\n\t\t\tpmclose = 1;\t/* XXX */\n");
  else
   FUNC_0(VAR_4,
       "\n\t\t\tpmclose = (t_getstate(0) != T_DATAXFER);\n");
 }
 FUNC_0(VAR_4, "\t\t}\n");




 if (!VAR_6) {
  FUNC_0(VAR_4, "\t\tif (strcmp(mname, \"sockmod\") == 0) {\n");
  FUNC_0(VAR_4, "\t\t\tif (ioctl(0, I_POP, 0) || ");
  FUNC_0(VAR_4, "ioctl(0, I_PUSH, \"timod\")) {\n");
  FUNC_4(VAR_2, "could not get the right module");
  FUNC_2("\t\t\t\t");
  FUNC_0(VAR_4, "\t\t\t\texit(1);\n");
  FUNC_0(VAR_4, "\t\t\t}\n");
  FUNC_0(VAR_4, "\t\t}\n");
 }
 if (VAR_7) {
  FUNC_0(VAR_4,
  "\t\tif ((%s = svc_tli_create(0, nconf, NULL, 		RPC_MAXDATASIZE, RPC_MAXDATASIZE)) 		== NULL) {\n",


  VAR_1);
 } else {
  FUNC_0(VAR_4,
      "\t\tif ((%s = svc_tli_create(0, nconf, NULL, 0, 0)) 		    == NULL) {\n",

                    VAR_1);
 }
 FUNC_4(VAR_2, "cannot create server handle");
 FUNC_2("\t\t\t");
 FUNC_0(VAR_4, "\t\t\texit(1);\n");
 FUNC_0(VAR_4, "\t\t}\n");
 FUNC_0(VAR_4, "\t\tif (nconf)\n");
 FUNC_0(VAR_4, "\t\t\tfreenetconfigent(nconf);\n");
 for (VAR_10 = VAR_3; VAR_10 != ((void*)0); VAR_10 = VAR_10->next) {
  VAR_11 = (definition *) VAR_10->val;
  if (VAR_11->def_kind != VAR_0) {
   continue;
  }
  for (VAR_12 = VAR_11->def.pr.versions; VAR_12 != ((void*)0); VAR_12 = VAR_12->next) {
   FUNC_0(VAR_4,
    "\t\tif (!svc_reg(%s, %s, %s, ",
    VAR_1, VAR_11->def_name, VAR_12->vers_name);
   FUNC_3(VAR_11->def_name, VAR_12->vers_num);
   FUNC_0(VAR_4, ", 0)) {\n");
   (void) FUNC_4(VAR_2, "unable to register (%s, %s).",
     VAR_11->def_name, VAR_12->vers_name);
   FUNC_2("\t\t\t");
   FUNC_0(VAR_4, "\t\t\texit(1);\n");
   FUNC_0(VAR_4, "\t\t}\n");
  }
 }
 if (VAR_5) {
  FUNC_0(VAR_4, "\t\tif (pmclose) {\n");
  FUNC_0(VAR_4, "\t\t\t(void) signal(SIGALRM, closedown);\n");
  FUNC_0(VAR_4, "\t\t\t(void) alarm(_RPCSVC_CLOSEDOWN/2);\n");
  FUNC_0(VAR_4, "\t\t}\n");
 }
 FUNC_0(VAR_4, "\t\tsvc_run();\n");
 FUNC_0(VAR_4, "\t\texit(1);\n");
 FUNC_0(VAR_4, "\t\t/* NOTREACHED */\n");
 FUNC_0(VAR_4, "\t}");
}
