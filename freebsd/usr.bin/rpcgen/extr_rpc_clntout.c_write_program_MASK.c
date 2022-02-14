
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int vers_num; TYPE_4__* procs; struct TYPE_11__* next; } ;
typedef TYPE_3__ version_list ;
struct TYPE_12__ {int proc_name; int res_type; int res_prefix; struct TYPE_12__* next; } ;
typedef TYPE_4__ proc_list ;
struct TYPE_9__ {TYPE_3__* versions; } ;
struct TYPE_10__ {TYPE_1__ pr; } ;
struct TYPE_13__ {TYPE_2__ def; } ;
typedef TYPE_5__ definition ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,char*,char*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(definition *VAR_3)
{
 version_list *VAR_4;
 proc_list *VAR_5;

 for (VAR_4 = VAR_3->def.pr.versions; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  for (VAR_5 = VAR_4->procs; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
   FUNC_0(VAR_1, "\n");
   if (VAR_2 == 0) {
    FUNC_3(VAR_5->res_prefix, VAR_5->res_type, 1);
    FUNC_0(VAR_1, "*\n");
    FUNC_4(VAR_5->proc_name, VAR_4->vers_num);
    FUNC_1(VAR_5, VAR_0, "clnt", "CLIENT *");
   } else {
    FUNC_0(VAR_1, "enum clnt_stat \n");
    FUNC_4(VAR_5->proc_name, VAR_4->vers_num);
    FUNC_1(VAR_5, VAR_0, "clnt", "CLIENT *");

   }
   FUNC_0(VAR_1, "{\n");
   FUNC_2(VAR_5);

   FUNC_0(VAR_1, "}\n");
  }
 }
}
