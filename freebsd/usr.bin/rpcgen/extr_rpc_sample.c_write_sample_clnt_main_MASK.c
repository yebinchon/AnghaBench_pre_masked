
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int vers_num; struct TYPE_9__* next; } ;
typedef TYPE_3__ version_list ;
struct TYPE_10__ {TYPE_5__* val; struct TYPE_10__* next; } ;
typedef TYPE_4__ list ;
struct TYPE_7__ {TYPE_3__* versions; } ;
struct TYPE_8__ {TYPE_1__ pr; } ;
struct TYPE_11__ {scalar_t__ def_kind; int def_name; TYPE_2__ def; } ;
typedef TYPE_5__ definition ;


 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(void)
{
 list *VAR_3;
 definition *VAR_4;
 version_list *VAR_5;

 FUNC_0(VAR_2, "\n\n");
 FUNC_0(VAR_2, "int\n");
 FUNC_0(VAR_2, "main(int argc, char *argv[])\n{\n");

 FUNC_0(VAR_2, "\tchar *host;");
 FUNC_0(VAR_2, "\n\n\tif (argc < 2) {");
 FUNC_0(VAR_2, "\n\t\tprintf(\"usage:  %%s server_host\\n\", argv[0]);\n");
 FUNC_0(VAR_2, "\t\texit(1);\n\t}");
 FUNC_0(VAR_2, "\n\thost = argv[1];\n");

 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  VAR_4 = VAR_3->val;
  if (VAR_4->def_kind != VAR_0) {
   continue;
  }
  for (VAR_5 = VAR_4->def.pr.versions; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
          FUNC_0(VAR_2, "\t");
   FUNC_1(VAR_4->def_name, VAR_5->vers_num);
   FUNC_0(VAR_2, "(host);\n");
  }
 }
 FUNC_0(VAR_2, "}\n");
}
