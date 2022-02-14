
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* decls; } ;
struct TYPE_8__ {int arg_num; int res_type; int res_prefix; TYPE_1__ args; } ;
typedef TYPE_3__ proc_list ;
struct TYPE_7__ {int type; int prefix; } ;
struct TYPE_9__ {TYPE_2__ decl; struct TYPE_9__* next; } ;
typedef TYPE_4__ decl_list ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(proc_list *VAR_3, const char *VAR_4)
{
 decl_list *VAR_5;

 FUNC_0(VAR_0, "(");
 if (VAR_3->arg_num < 2 && VAR_2 &&
     FUNC_2(VAR_3->args.decls->decl.type, "void")) {

 }
 else {
  for (VAR_5 = VAR_3->args.decls; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
   FUNC_1(VAR_5->decl.prefix, VAR_5->decl.type, 1);
   if (!VAR_2)
    FUNC_0(VAR_0, "*");

   FUNC_0(VAR_0, ", ");
  }
 }

 if (VAR_1) {
  FUNC_1(VAR_3->res_prefix, VAR_3->res_type, 1);
  FUNC_0(VAR_0, "*, ");
 }

 FUNC_0(VAR_0, "%s);\n", VAR_4);

}
