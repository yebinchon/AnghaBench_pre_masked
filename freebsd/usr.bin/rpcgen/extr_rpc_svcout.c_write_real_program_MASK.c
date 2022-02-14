
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


struct TYPE_15__ {int vers_num; TYPE_6__* procs; struct TYPE_15__* next; } ;
typedef TYPE_5__ version_list ;
struct TYPE_13__ {TYPE_8__* decls; int argname; } ;
struct TYPE_16__ {int arg_num; TYPE_3__ args; int proc_name; struct TYPE_16__* next; } ;
typedef TYPE_6__ proc_list ;
struct TYPE_11__ {TYPE_5__* versions; } ;
struct TYPE_12__ {TYPE_1__ pr; } ;
struct TYPE_17__ {TYPE_2__ def; } ;
typedef TYPE_7__ definition ;
struct TYPE_14__ {int name; int type; int prefix; } ;
struct TYPE_18__ {TYPE_4__ decl; struct TYPE_18__* next; } ;
typedef TYPE_8__ decl_list ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void
FUNC_7(definition *VAR_5)
{
 version_list *VAR_6;
 proc_list *VAR_7;
 decl_list *VAR_8;

 if (!VAR_4) return;
 for (VAR_6 = VAR_5->def.pr.versions; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
  for (VAR_7 = VAR_6->procs; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
   FUNC_0(VAR_2, "\n");
   if (!VAR_3)
    FUNC_2(VAR_7);
   else
    FUNC_0(VAR_2, "int");
   FUNC_0(VAR_2, "\n_");
   FUNC_4(VAR_7->proc_name, VAR_6->vers_num);
   FUNC_0(VAR_2, "(");

   if (VAR_7->arg_num > 1)
    FUNC_1(VAR_7->args.argname, VAR_2);
   else
    FUNC_3(VAR_7->args.decls->decl.prefix,
          VAR_7->args.decls->decl.type, 0);
   if (VAR_3) {
    FUNC_0(VAR_2, " *argp, void *%s, struct svc_req *%s)\n",
     VAR_0, VAR_1);


   }
   else
    FUNC_0(VAR_2, " *argp, struct svc_req *%s)\n",
     VAR_1);

   FUNC_0(VAR_2, "{\n");
   FUNC_0(VAR_2, "\treturn (");
   FUNC_5(VAR_7->proc_name, VAR_6->vers_num);
   FUNC_0(VAR_2, "(");
   if (VAR_7->arg_num < 2) {
    if (!FUNC_6(VAR_7->args.decls->decl.type, "void"))
     FUNC_0(VAR_2, "*argp, ");
   } else {
    for (VAR_8 = VAR_7->args.decls; VAR_8 != ((void*)0);
         VAR_8 = VAR_8->next)
     FUNC_0(VAR_2, "argp->%s, ",
      VAR_8->decl.name);
   }
   if (VAR_3)
    FUNC_0(VAR_2, "%s, ",VAR_0);
   FUNC_0(VAR_2, "%s));\n}\n", VAR_1);
  }
 }
}
