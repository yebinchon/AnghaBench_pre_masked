
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* procs; struct TYPE_13__* next; } ;
typedef TYPE_4__ version_list ;
struct TYPE_10__ {TYPE_7__* decls; } ;
struct TYPE_14__ {int arg_num; TYPE_1__ args; struct TYPE_14__* next; } ;
typedef TYPE_5__ proc_list ;
struct TYPE_11__ {TYPE_4__* versions; } ;
struct TYPE_12__ {TYPE_2__ pr; } ;
struct TYPE_15__ {TYPE_3__ def; } ;
typedef TYPE_6__ definition ;
struct TYPE_16__ {int decl; struct TYPE_16__* next; } ;
typedef TYPE_7__ decl_list ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(definition *VAR_1)
{
 decl_list *VAR_2;
 version_list *VAR_3;
 proc_list *VAR_4;

 for (VAR_3 = VAR_1->def.pr.versions; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  for (VAR_4 = VAR_3->procs; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
   if (!VAR_0 || VAR_4->arg_num < 2)
    continue;
   FUNC_0(VAR_4);
   for (VAR_2 = VAR_4->args.decls; VAR_2 != ((void*)0);
        VAR_2 = VAR_2->next)
    FUNC_1(1, &VAR_2->decl);
   FUNC_2();
  }
}
