
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* vers_name; int vers_num; struct TYPE_9__* next; } ;
typedef TYPE_3__ version_list ;
struct TYPE_10__ {scalar_t__ val; struct TYPE_10__* next; } ;
typedef TYPE_4__ list ;
struct TYPE_7__ {TYPE_3__* versions; } ;
struct TYPE_8__ {TYPE_1__ pr; } ;
struct TYPE_11__ {scalar_t__ def_kind; char* def_name; TYPE_2__ def; } ;
typedef TYPE_5__ definition ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,char*,char*,char const*) ;

void
FUNC_4(const char *VAR_4)
{
 list *VAR_5;
 definition *VAR_6;
 version_list *VAR_7;

 for (VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
  VAR_6 = (definition *) VAR_5->val;
  if (VAR_6->def_kind != VAR_0) {
   continue;
  }
  for (VAR_7 = VAR_6->def.pr.versions; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
   FUNC_0(VAR_3, "\tif (!svc_create(");
   FUNC_2(VAR_6->def_name, VAR_7->vers_num);
   FUNC_0(VAR_3, ", %s, %s, \"%s\")) {\n",
    VAR_6->def_name, VAR_7->vers_name, VAR_4);
   (void) FUNC_3(VAR_1,
    "unable to create (%s, %s) for %s.",
     VAR_6->def_name, VAR_7->vers_name, VAR_4);
   FUNC_1("\t\t");
   FUNC_0(VAR_3, "\t\texit(1);\n");
   FUNC_0(VAR_3, "\t}\n");
  }
 }
}
