
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* decls; } ;
struct TYPE_7__ {TYPE_1__ st; } ;
struct TYPE_8__ {char* def_name; TYPE_2__ def; } ;
typedef TYPE_3__ definition ;
struct TYPE_9__ {int decl; struct TYPE_9__* next; } ;
typedef TYPE_4__ decl_list ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int *,int,char*) ;

__attribute__((used)) static void
FUNC_2(definition *VAR_1)
{
 decl_list *VAR_2;
 const char *VAR_3 = VAR_1->def_name;

 FUNC_0(VAR_0, "struct %s {\n", VAR_3);
 for (VAR_2 = VAR_1->def.st.decls; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
  FUNC_1(VAR_3, &VAR_2->decl, 1, ";\n");
 }
 FUNC_0(VAR_0, "};\n");
 FUNC_0(VAR_0, "typedef struct %s %s;\n", VAR_3, VAR_3);
}
