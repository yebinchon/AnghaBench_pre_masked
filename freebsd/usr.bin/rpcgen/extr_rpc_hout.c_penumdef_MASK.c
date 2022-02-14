
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* assignment; struct TYPE_8__* next; int name; } ;
typedef TYPE_3__ enumval_list ;
struct TYPE_6__ {TYPE_3__* vals; } ;
struct TYPE_7__ {TYPE_1__ en; } ;
struct TYPE_9__ {char* def_name; TYPE_2__ def; } ;
typedef TYPE_4__ definition ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(definition *VAR_1)
{
 const char *VAR_2 = VAR_1->def_name;
 enumval_list *VAR_3;
 const char *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 FUNC_0(VAR_0, "enum %s {\n", VAR_2);
 for (VAR_3 = VAR_1->def.en.vals; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  FUNC_0(VAR_0, "\t%s", VAR_3->name);
  if (VAR_3->assignment) {
   FUNC_0(VAR_0, " = %s", VAR_3->assignment);
   VAR_4 = VAR_3->assignment;
   VAR_5 = 1;
  } else {
   if (VAR_4 == ((void*)0)) {
    FUNC_0(VAR_0, " = %d", VAR_5++);
   } else {
    FUNC_0(VAR_0, " = %s + %d", VAR_4, VAR_5++);
   }
  }
  if (VAR_3->next)
   FUNC_0(VAR_0, ",\n");
  else
   FUNC_0(VAR_0, "\n");
 }
 FUNC_0(VAR_0, "};\n");
 FUNC_0(VAR_0, "typedef enum %s %s;\n", VAR_2, VAR_2);
}
