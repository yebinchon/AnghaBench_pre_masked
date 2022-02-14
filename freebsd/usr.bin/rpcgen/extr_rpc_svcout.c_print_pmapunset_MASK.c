
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int vers_name; struct TYPE_9__* next; } ;
typedef TYPE_3__ version_list ;
struct TYPE_10__ {scalar_t__ val; struct TYPE_10__* next; } ;
typedef TYPE_4__ list ;
struct TYPE_8__ {TYPE_3__* versions; } ;
struct TYPE_7__ {TYPE_2__ pr; } ;
struct TYPE_11__ {scalar_t__ def_kind; int def_name; TYPE_1__ def; } ;
typedef TYPE_5__ definition ;


 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int ,char*,char const*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_3)
{
 list *VAR_4;
 definition *VAR_5;
 version_list *VAR_6;

 for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  VAR_5 = (definition *) VAR_4->val;
  if (VAR_5->def_kind == VAR_0) {
   for (VAR_6 = VAR_5->def.pr.versions; VAR_6 != ((void*)0);
     VAR_6 = VAR_6->next) {
    FUNC_0(VAR_2, "%s(void) pmap_unset(%s, %s);\n",
     VAR_3, VAR_5->def_name, VAR_6->vers_name);
   }
  }
 }
}
