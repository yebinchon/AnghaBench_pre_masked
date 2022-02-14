
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
struct TYPE_12__ {int res_type; int proc_name; struct TYPE_12__* next; } ;
typedef TYPE_4__ proc_list ;
struct TYPE_9__ {TYPE_3__* versions; } ;
struct TYPE_10__ {TYPE_1__ pr; } ;
struct TYPE_13__ {int def_name; TYPE_2__ def; } ;
typedef TYPE_5__ definition ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,char*,int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(definition *VAR_3)
{
 version_list *VAR_4;
 proc_list *VAR_5;

 for (VAR_4 = VAR_3->def.pr.versions; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  for (VAR_5 = VAR_4->procs; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
   FUNC_0(VAR_1, "\n");
   if (!VAR_2) {
    FUNC_4(VAR_5);
    FUNC_0(VAR_1, "*\n");
   } else
    FUNC_0(VAR_1, "bool_t\n");
   FUNC_3(VAR_5->proc_name, VAR_4->vers_num);
   FUNC_1(VAR_5, "result", VAR_0, "struct svc_req *");

   FUNC_0(VAR_1, "{\n");
   if (!VAR_2) {
    FUNC_0(VAR_1, "\tstatic ");
    if(!FUNC_5(VAR_5->res_type, "void"))
     FUNC_4(VAR_5);
    else
     FUNC_0(VAR_1, "char *");

    FUNC_0(VAR_1, " result;\n");
   }
   else
    FUNC_0(VAR_1, "\tbool_t retval;\n");
   FUNC_0(VAR_1,
    "\n\t/*\n\t * insert server code here\n\t */\n\n");

   if (!VAR_2)
    if(!FUNC_5(VAR_5->res_type, "void"))
     FUNC_0(VAR_1, "\treturn (&result);\n}\n");
    else
     FUNC_0(VAR_1, "\treturn((void *) &result);\n}\n");
   else
    FUNC_0(VAR_1, "\treturn (retval);\n}\n");
  }

  if (VAR_2) {
  FUNC_0(VAR_1, "\nint\n");
  FUNC_2(VAR_3->def_name, VAR_4->vers_num);
  FUNC_0(VAR_1,"_freeresult(SVCXPRT *transp, xdrproc_t xdr_result, caddr_t result)\n");
  FUNC_0(VAR_1, "{\n");
  FUNC_0(VAR_1, "\t(void) xdr_free(xdr_result, result);\n");
  FUNC_0(VAR_1,
   "\n\t/*\n\t * Insert additional freeing code here, if needed\n\t */\n");
  FUNC_0(VAR_1, "\n}\n");


 }
 }
}
