
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {char const* type; char const* name; } ;
struct TYPE_8__ {TYPE_4__* default_decl; TYPE_5__* cases; TYPE_4__ enum_decl; } ;
struct TYPE_9__ {TYPE_1__ un; } ;
struct TYPE_10__ {char* def_name; TYPE_2__ def; } ;
typedef TYPE_3__ definition ;
typedef TYPE_4__ declaration ;
struct TYPE_12__ {scalar_t__ contflag; TYPE_4__ case_decl; struct TYPE_12__* next; } ;
typedef TYPE_5__ case_list ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char const*,TYPE_4__*,int,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3(definition *VAR_1)
{
 case_list *VAR_2;
 const char *VAR_3 = VAR_1->def_name;
 declaration *VAR_4;

 FUNC_0(VAR_0, "struct %s {\n", VAR_3);
 VAR_4 = &VAR_1->def.un.enum_decl;
 if (FUNC_2(VAR_4->type, "bool")) {
  FUNC_0(VAR_0, "\tbool_t %s;\n", VAR_4->name);
 } else {
  FUNC_0(VAR_0, "\t%s %s;\n", VAR_4->type, VAR_4->name);
 }
 FUNC_0(VAR_0, "\tunion {\n");
 for (VAR_2 = VAR_1->def.un.cases; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
     if (VAR_2->contflag == 0)
  FUNC_1(VAR_3, &VAR_2->case_decl, 2, ";\n");
 }
 VAR_4 = VAR_1->def.un.default_decl;
 if (VAR_4 && !FUNC_2(VAR_4->type, "void")) {
  FUNC_1(VAR_3, VAR_4, 2, ";\n");
 }
 FUNC_0(VAR_0, "\t} %s_u;\n", VAR_3);
 FUNC_0(VAR_0, "};\n");
 FUNC_0(VAR_0, "typedef struct %s %s;\n", VAR_3, VAR_3);
}
