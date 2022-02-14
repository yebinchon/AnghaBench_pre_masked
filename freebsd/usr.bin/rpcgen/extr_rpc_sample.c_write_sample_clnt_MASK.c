
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_3__ version_list ;
struct TYPE_7__ {TYPE_3__* versions; } ;
struct TYPE_8__ {TYPE_1__ pr; } ;
struct TYPE_10__ {scalar_t__ def_kind; int def_name; TYPE_2__ def; } ;
typedef TYPE_4__ definition ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;

int
FUNC_1(definition *VAR_1)
{
        version_list *VAR_2;
 int VAR_3 = 0;

 if (VAR_1->def_kind != VAR_0)
   return(0);

 for (VAR_2 = VAR_1->def.pr.versions; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
   FUNC_0(VAR_1->def_name, VAR_2);
   ++VAR_3;
 }
 return(VAR_3);
}
