
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int vers_num; TYPE_4__* procs; int vers_name; struct TYPE_14__* next; } ;
typedef TYPE_3__ version_list ;
struct TYPE_15__ {int proc_num; int proc_name; struct TYPE_15__* next; } ;
typedef TYPE_4__ proc_list ;
struct TYPE_12__ {TYPE_3__* versions; int prog_num; } ;
struct TYPE_13__ {TYPE_1__ pr; } ;
struct TYPE_16__ {int def_name; TYPE_2__ def; } ;
typedef TYPE_5__ definition ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,char*,int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_8(definition *VAR_2, int VAR_3)
{
 version_list *VAR_4;
 proc_list *VAR_5;
 const char *VAR_6;

 FUNC_3(VAR_2);

 FUNC_7(VAR_2->def_name, VAR_2->def.pr.prog_num);
 for (VAR_4 = VAR_2->def.pr.versions; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  if (VAR_1) {
   FUNC_1(VAR_0,
    "extern struct rpcgen_table %s_%s_table[];\n",
    FUNC_2(VAR_2->def_name), VAR_4->vers_num);
   FUNC_1(VAR_0,
    "extern %s_%s_nproc;\n",
    FUNC_2(VAR_2->def_name), VAR_4->vers_num);
  }
  FUNC_7(VAR_4->vers_name, VAR_4->vers_num);

  FUNC_1(VAR_0, "\n");
  VAR_6 = "extern  ";
  if (VAR_3) {
   FUNC_1(VAR_0, "%s", VAR_6);
   FUNC_4(VAR_2->def_name, VAR_4->vers_num);
  }
  for (VAR_5 = VAR_4->procs; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
   if (!FUNC_0(VAR_5, VAR_2->def.pr.versions)) {
    FUNC_7(VAR_5->proc_name, VAR_5->proc_num);
   }
   FUNC_1(VAR_0, "%s", VAR_6);
   FUNC_6(VAR_5, VAR_4, "CLIENT *", 0);
   FUNC_1(VAR_0, "%s", VAR_6);
   FUNC_6(VAR_5, VAR_4, "struct svc_req *", 1);
  }
  FUNC_5(VAR_2->def_name, VAR_4->vers_num);
 }
}
