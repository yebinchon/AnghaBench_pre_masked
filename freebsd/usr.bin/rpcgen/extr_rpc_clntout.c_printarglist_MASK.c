
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int argname; TYPE_3__* decls; } ;
struct TYPE_7__ {int res_type; int res_prefix; TYPE_1__ args; } ;
typedef TYPE_2__ proc_list ;
struct TYPE_9__ {int type; int prefix; } ;
struct TYPE_8__ {TYPE_5__ decl; struct TYPE_8__* next; } ;
typedef TYPE_3__ decl_list ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_5__*,int ,char*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,char*) ;

void
FUNC_4(proc_list *VAR_3, const char *VAR_4, const char *VAR_5,
    const char *VAR_6)
{

 decl_list *VAR_7;

 if (!VAR_2) {

  FUNC_0(VAR_0, "(");
  FUNC_2(VAR_3->args.decls->decl.prefix,
        VAR_3->args.decls->decl.type, 1);

  if (VAR_1) {
   FUNC_0(VAR_0, "*argp, ");
   FUNC_2(VAR_3->res_prefix, VAR_3->res_type, 1);
   FUNC_0(VAR_0, "*%s, %s%s)\n",
    VAR_4, VAR_6, VAR_5);
  } else
   FUNC_0(VAR_0, "*argp, %s%s)\n", VAR_6, VAR_5);
 } else if (FUNC_3(VAR_3->args.decls->decl.type, "void")) {

  if (VAR_1) {
   FUNC_0(VAR_0, "(");
   FUNC_2(VAR_3->res_prefix, VAR_3->res_type, 1);
   FUNC_0(VAR_0, "*%s, %s%s)\n",
    VAR_4, VAR_6, VAR_5);
  } else
   FUNC_0(VAR_0, "(%s%s)\n", VAR_6, VAR_5);
 } else {

  FUNC_0(VAR_0, "(");
  for (VAR_7 = VAR_3->args.decls; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
   FUNC_1(VAR_3->args.argname, &VAR_7->decl, 0, ", ");
  }
  if (VAR_1) {
   FUNC_2(VAR_3->res_prefix, VAR_3->res_type, 1);
   FUNC_0(VAR_0, "*%s, ", VAR_4);

  }
  FUNC_0(VAR_0, "%s%s)\n", VAR_6, VAR_5);
 }
}
