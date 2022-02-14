
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* procs; struct TYPE_12__* next; } ;
typedef TYPE_4__ version_list ;
struct TYPE_11__ {char* argname; TYPE_7__* decls; } ;
struct TYPE_13__ {int arg_num; TYPE_3__ args; struct TYPE_13__* next; } ;
typedef TYPE_5__ proc_list ;
struct TYPE_9__ {TYPE_4__* versions; } ;
struct TYPE_10__ {TYPE_1__ pr; } ;
struct TYPE_14__ {TYPE_2__ def; } ;
typedef TYPE_6__ definition ;
struct TYPE_15__ {int decl; struct TYPE_15__* next; } ;
typedef TYPE_7__ decl_list ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int *,int,char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(definition *VAR_2)
{
 decl_list *VAR_3;
 version_list *VAR_4;
 char *VAR_5;
 proc_list *VAR_6;


 for (VAR_4 = VAR_2->def.pr.versions; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
   for (VAR_6 = VAR_4->procs; VAR_6 != ((void*)0);
       VAR_6 = VAR_6->next) {

    if (!VAR_1 || VAR_6->arg_num < 2) {
     continue;
    }
    VAR_5 = VAR_6->args.argname;
    FUNC_0(VAR_0, "struct %s {\n", VAR_5);
    for (VAR_3 = VAR_6->args.decls;
        VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
     FUNC_1(VAR_5, &VAR_3->decl, 1,
           ";\n");
    }
    FUNC_0(VAR_0, "};\n");
    FUNC_0(VAR_0, "typedef struct %s %s;\n",
     VAR_5, VAR_5);
    FUNC_2(VAR_5, 1);
    FUNC_0(VAR_0, "\n");
   }
  }
}
