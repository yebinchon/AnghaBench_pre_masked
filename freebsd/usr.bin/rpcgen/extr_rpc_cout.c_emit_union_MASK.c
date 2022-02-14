
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int name; } ;
struct TYPE_8__ {TYPE_4__* default_decl; TYPE_5__* cases; TYPE_6__ enum_decl; } ;
struct TYPE_9__ {TYPE_1__ un; } ;
struct TYPE_10__ {char const* def_name; TYPE_2__ def; } ;
typedef TYPE_3__ definition ;
struct TYPE_11__ {char const* name; int array_max; int rel; int type; int prefix; } ;
typedef TYPE_4__ declaration ;
struct TYPE_12__ {int contflag; TYPE_4__ case_decl; int case_name; struct TYPE_12__* next; } ;
typedef TYPE_5__ case_list ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ,int ,int ,int ,char*,char const*) ;
 int FUNC_4 (int,TYPE_6__*) ;
 int FUNC_5 (char*,char const*,char const*,char const*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(definition *VAR_1)
{
 declaration *VAR_2;
 case_list *VAR_3;
 declaration *VAR_4;
 char *VAR_5;
 const char *VAR_6 = "objp->%s_u.%s";
 const char *VAR_7 = "&objp->%s_u.%s";

 FUNC_4(1, &VAR_1->def.un.enum_decl);
 FUNC_0(VAR_0, "\tswitch (objp->%s) {\n", VAR_1->def.un.enum_decl.name);
 for (VAR_3 = VAR_1->def.un.cases; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {

  FUNC_0(VAR_0, "\tcase %s:\n", VAR_3->case_name);
  if (VAR_3->contflag == 1)
   continue;
  VAR_4 = &VAR_3->case_decl;
  if (!FUNC_6(VAR_4->type, "void")) {
   VAR_5 = FUNC_8(FUNC_7(VAR_1->def_name) +
                    FUNC_7(VAR_7) + FUNC_7(VAR_4->name) + 1);
   if (FUNC_2 (VAR_4->type, VAR_4->rel)) {
    FUNC_5(VAR_5, VAR_6, VAR_1->def_name,
     VAR_4->name);
   } else {
    FUNC_5(VAR_5, VAR_7, VAR_1->def_name,
     VAR_4->name);
   }
   FUNC_3(2, VAR_4->prefix, VAR_4->type, VAR_4->rel,
         VAR_4->array_max, VAR_5, VAR_4->name);
   FUNC_1(VAR_5);
  }
  FUNC_0(VAR_0, "\t\tbreak;\n");
 }
 VAR_2 = VAR_1->def.un.default_decl;
 if (VAR_2 != ((void*)0)) {
  if (!FUNC_6(VAR_2->type, "void")) {
   FUNC_0(VAR_0, "\tdefault:\n");
   VAR_5 = FUNC_8(FUNC_7(VAR_1->def_name) +
                    FUNC_7(VAR_7) + FUNC_7(VAR_2->name) + 1);
   if (FUNC_2 (VAR_2->type, VAR_2->rel)) {
    FUNC_5(VAR_5, VAR_6, VAR_1->def_name,
     VAR_2->name);
   } else {
    FUNC_5(VAR_5, VAR_7, VAR_1->def_name,
     VAR_2->name);
   }

   FUNC_3(2, VAR_2->prefix, VAR_2->type, VAR_2->rel,
        VAR_2->array_max, VAR_5, VAR_2->name);
   FUNC_1(VAR_5);
   FUNC_0(VAR_0, "\t\tbreak;\n");
  } else {
   FUNC_0(VAR_0, "\tdefault:\n");
   FUNC_0(VAR_0, "\t\tbreak;\n");
  }
 } else {
  FUNC_0(VAR_0, "\tdefault:\n");
  FUNC_0(VAR_0, "\t\treturn (FALSE);\n");
 }

 FUNC_0(VAR_0, "\t}\n");
}
