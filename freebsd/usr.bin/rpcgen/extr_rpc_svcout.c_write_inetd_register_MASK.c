
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
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*,char const*,...) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

void
FUNC_5(const char *VAR_6)
{
 list *VAR_7;
 definition *VAR_8;
 version_list *VAR_9;
 const char *VAR_10;
 int VAR_11;
 char VAR_12[32];

 if (VAR_5)
  VAR_10 = "\t";
 else
  VAR_10 = "";
 if (FUNC_4(VAR_6, "udp"))
  VAR_11 = 1;
 else
  VAR_11 = 0;
 FUNC_0(VAR_4, "\n");
 if (VAR_5) {
  FUNC_0(VAR_4,
   "\tif ((_rpcfdtype == 0) || (_rpcfdtype == %s)) {\n",
   VAR_11 ? "SOCK_DGRAM" : "SOCK_STREAM");
 }
 FUNC_0(VAR_4, "%s\t%s = svc%s_create(%s",
  VAR_10, VAR_1, VAR_6, VAR_5? "sock": "RPC_ANYSOCK");
 if (!VAR_11)
  FUNC_0(VAR_4, ", 0, 0");
 FUNC_0(VAR_4, ");\n");
 FUNC_0(VAR_4, "%s\tif (%s == NULL) {\n", VAR_10, VAR_1);
 (void) FUNC_3(VAR_2, "cannot create %s service.", VAR_6);
 (void) FUNC_3(VAR_12, "%s\t\t", VAR_10);
 FUNC_1(VAR_12);
 FUNC_0(VAR_4, "%s\t\texit(1);\n", VAR_10);
 FUNC_0(VAR_4, "%s\t}\n", VAR_10);

 if (VAR_5) {
  FUNC_0(VAR_4, "%s\tif (!_rpcpmstart)\n\t", VAR_10);
  FUNC_0(VAR_4, "%s\tproto = IPPROTO_%s;\n",
    VAR_10, VAR_11 ? "UDP": "TCP");
 }
 for (VAR_7 = VAR_3; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
  VAR_8 = (definition *) VAR_7->val;
  if (VAR_8->def_kind != VAR_0) {
   continue;
  }
  for (VAR_9 = VAR_8->def.pr.versions; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
   FUNC_0(VAR_4, "%s\tif (!svc_register(%s, %s, %s, ",
    VAR_10, VAR_1, VAR_8->def_name, VAR_9->vers_name);
   FUNC_2(VAR_8->def_name, VAR_9->vers_num);
   if (VAR_5)
    FUNC_0(VAR_4, ", proto)) {\n");
   else
    FUNC_0(VAR_4, ", IPPROTO_%s)) {\n",
     VAR_11 ? "UDP": "TCP");
   (void) FUNC_3(VAR_2,
    "unable to register (%s, %s, %s).",
    VAR_8->def_name, VAR_9->vers_name, VAR_6);
   FUNC_1(VAR_12);
   FUNC_0(VAR_4, "%s\t\texit(1);\n", VAR_10);
   FUNC_0(VAR_4, "%s\t}\n", VAR_10);
  }
 }
 if (VAR_5)
  FUNC_0(VAR_4, "\t}\n");
}
