
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int vers_num; TYPE_7__* procs; struct TYPE_16__* next; } ;
typedef TYPE_6__ version_list ;
struct TYPE_15__ {int argname; TYPE_4__* decls; } ;
struct TYPE_17__ {int arg_num; int proc_name; int res_type; TYPE_5__ args; struct TYPE_17__* next; int res_prefix; } ;
typedef TYPE_7__ proc_list ;
struct TYPE_11__ {TYPE_6__* versions; } ;
struct TYPE_12__ {TYPE_1__ pr; } ;
struct TYPE_18__ {int def_name; TYPE_2__ def; } ;
typedef TYPE_8__ definition ;
struct TYPE_13__ {int type; int prefix; } ;
struct TYPE_14__ {TYPE_3__ decl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,char*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int ,char*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_12(definition *VAR_11, const char *VAR_12)
{
 version_list *VAR_13;
 proc_list *VAR_14;
 int VAR_15;

 for (VAR_13 = VAR_11->def.pr.versions; VAR_13 != ((void*)0); VAR_13 = VAR_13->next) {
  FUNC_0(VAR_7, "\n");
  if (VAR_12 != ((void*)0)) {
   FUNC_0(VAR_7, "%s ", VAR_12);
  }
  FUNC_0(VAR_7, "void\n");
  FUNC_8(VAR_11->def_name, VAR_13->vers_num);

  FUNC_0(VAR_7, "(struct svc_req *%s, ", VAR_4);
  FUNC_0(VAR_7, "SVCXPRT *%s)\n", VAR_5);
  FUNC_0(VAR_7, "{\n");

  VAR_15 = 0;
  FUNC_0(VAR_7, "\tunion {\n");
  for (VAR_14 = VAR_13->procs; VAR_14 != ((void*)0); VAR_14 = VAR_14->next) {
   if (VAR_14->arg_num < 2) {
    if (FUNC_11(VAR_14->args.decls->decl.type,
       "void")) {
     continue;
    }
    VAR_15 = 1;
    FUNC_0(VAR_7, "\t\t");
    FUNC_7(VAR_14->args.decls->decl.prefix,
          VAR_14->args.decls->decl.type, 0);
    FUNC_8(VAR_14->proc_name, VAR_13->vers_num);
    FUNC_0(VAR_7, "_arg;\n");

   } else {
    VAR_15 = 1;
    FUNC_0(VAR_7, "\t\t%s", VAR_14->args.argname);
    FUNC_0(VAR_7, " ");
    FUNC_8(VAR_14->proc_name, VAR_13->vers_num);
    FUNC_0(VAR_7, "_arg;\n");
   }
  }
  if (!VAR_15) {
   FUNC_0(VAR_7, "\t\tint fill;\n");
  }
  FUNC_0(VAR_7, "\t} %s;\n", VAR_0);

  if (VAR_8) {
   FUNC_0(VAR_7, "\tunion {\n");
   for (VAR_14 = VAR_13->procs; VAR_14 != ((void*)0); VAR_14 = VAR_14->next) {
    if (FUNC_11(VAR_14->res_type, "void")) {
     continue;
    }
    FUNC_0(VAR_7, "\t\t");
    FUNC_7(VAR_14->res_prefix, VAR_14->res_type, 0);
    FUNC_8(VAR_14->proc_name, VAR_13->vers_num);
    FUNC_0(VAR_7, "_res;\n");
   }
   FUNC_0(VAR_7, "\t} %s;\n", VAR_1);
   FUNC_0(VAR_7, "\tbool_t %s;\n", VAR_2);

  } else
   FUNC_0(VAR_7, "\tchar *%s;\n", VAR_1);

  FUNC_0(VAR_7, "\txdrproc_t xdr_%s, xdr_%s;\n", VAR_0, VAR_1);
  if (VAR_8)
   FUNC_0(VAR_7,
    "\tbool_t (*%s)(char *, void *, struct svc_req *);\n",
    VAR_3);
  else
   FUNC_0(VAR_7,
    "\tchar *(*%s)(char *, struct svc_req *);\n",
    VAR_3);
  FUNC_0(VAR_7, "\n");

  if (VAR_10) {
   if (VAR_8)
    FUNC_0(VAR_7, "\tpthread_mutex_lock(&_svcstate_lock);\n");

   FUNC_0(VAR_7, "\t_rpcsvcstate = _SERVING;\n");
   if (VAR_8)
    FUNC_0(VAR_7, "\tpthread_mutex_unlock(&_svcstate_lock);\n");
  }

  FUNC_0(VAR_7, "\tswitch (%s->rq_proc) {\n", VAR_4);
  if (!FUNC_1(VAR_13->procs)) {
   FUNC_0(VAR_7, "\tcase NULLPROC:\n");
   FUNC_0(VAR_7,
    "\t\t(void) svc_sendreply(%s,\n\t\t\t"
    "(xdrproc_t) xdr_void, (char *)NULL);\n",
    VAR_5);
   FUNC_4("\t\t");
   FUNC_0(VAR_7, "\n");
  }
  for (VAR_14 = VAR_13->procs; VAR_14 != ((void*)0); VAR_14 = VAR_14->next) {
   FUNC_0(VAR_7, "\tcase %s:\n", VAR_14->proc_name);
   if (VAR_14->arg_num < 2) {
    FUNC_2(VAR_0, VAR_14->args.decls->decl.type);
   } else {
    FUNC_2(VAR_0, VAR_14->args.argname);
   }
   FUNC_2(VAR_1, VAR_14->res_type);

   if (VAR_8)
    FUNC_0(VAR_7,
     "\t\t%s = (bool_t (*) (char *,  void *,  struct svc_req *))",
     VAR_3);
   else
    FUNC_0(VAR_7,
     "\t\t%s = (char *(*)(char *, struct svc_req *)) ",
     VAR_3);
   if (VAR_9) {
    FUNC_0(VAR_7, "_");
   }
   if (!VAR_9)
    FUNC_9(VAR_14->proc_name, VAR_13->vers_num);
   else
    FUNC_8(VAR_14->proc_name, VAR_13->vers_num);
   FUNC_0(VAR_7, ";\n");
   FUNC_0(VAR_7, "\t\tbreak;\n\n");
  }
  FUNC_0(VAR_7, "\tdefault:\n");
  FUNC_5("noproc", VAR_5);
  FUNC_4("\t\t");
  FUNC_0(VAR_7, "\t}\n");

  FUNC_0(VAR_7,
   "\t(void) memset((char *)&%s, 0, sizeof (%s));\n",
   VAR_0, VAR_0);
  FUNC_6("getargs", VAR_5, "(caddr_t) &", VAR_0);
  FUNC_5("decode", VAR_5);
  FUNC_4("\t\t");
  FUNC_0(VAR_7, "\t}\n");

  if (!VAR_8)
   FUNC_0(VAR_7, "\t%s = (*%s)((char *)&%s, %s);\n",
    VAR_1, VAR_3, VAR_0, VAR_4);
  else
   FUNC_0(VAR_7, "\t%s = (bool_t) (*%s)((char *)&%s, (void *)&%s, %s);\n",
    VAR_2, VAR_3, VAR_0, VAR_1, VAR_4);


  if (VAR_8)
   FUNC_0(VAR_7,
    "\tif (%s > 0 && !svc_sendreply(%s, xdr_%s, (char *)&%s)) {\n",
    VAR_2, VAR_5, VAR_1, VAR_1);
  else
   FUNC_0(VAR_7,
    "\tif (%s != NULL && !svc_sendreply(%s, xdr_%s, %s)) {\n",
    VAR_1, VAR_5, VAR_1, VAR_1);

  FUNC_5("systemerr", VAR_5);
  FUNC_0(VAR_7, "\t}\n");

  FUNC_6("freeargs", VAR_5, "(caddr_t) &", VAR_0);
  (void) FUNC_10(VAR_6, "unable to free arguments");
  FUNC_3("\t\t");
  FUNC_0(VAR_7, "\t\texit(1);\n");
  FUNC_0(VAR_7, "\t}\n");

  if (VAR_8) {
   FUNC_0(VAR_7,"\tif (!");
   FUNC_8(VAR_11->def_name, VAR_13->vers_num);
   FUNC_0(VAR_7,"_freeresult(%s, xdr_%s, (caddr_t) &%s))\n",
    VAR_5, VAR_1, VAR_1);
   (void) FUNC_10(VAR_6, "unable to free results");
   FUNC_3("\t\t");
   FUNC_0(VAR_7, "\n");
  }
  FUNC_4("\t");
  FUNC_0(VAR_7, "}\n");
 }
}
