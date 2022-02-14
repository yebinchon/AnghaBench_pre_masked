
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* argname; TYPE_4__* decls; } ;
struct TYPE_8__ {int arg_num; char* proc_name; int res_type; TYPE_2__ args; int res_prefix; } ;
typedef TYPE_3__ proc_list ;
struct TYPE_6__ {char* name; int type; } ;
struct TYPE_9__ {TYPE_1__ decl; struct TYPE_9__* next; } ;
typedef TYPE_4__ decl_list ;
typedef int bool_t ;


 char* VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(proc_list *VAR_4)
{
 decl_list *VAR_5;
 bool_t VAR_6 = (VAR_4->arg_num > 1);







 if (VAR_3 && VAR_6) {
  FUNC_1(VAR_1, "\t%s", VAR_4->args.argname);
  FUNC_1(VAR_1, " arg;\n");
 }
 if (!VAR_2) {
  FUNC_1(VAR_1, "\tstatic ");
  if (FUNC_3(VAR_4->res_type, "void")) {
   FUNC_1(VAR_1, "char ");
  } else {
   FUNC_2(VAR_4->res_prefix, VAR_4->res_type, 0);
  }
  FUNC_1(VAR_1, "%s;\n", VAR_0);
  FUNC_1(VAR_1, "\n");
  FUNC_1(VAR_1, "\tmemset((char *)%s%s, 0, sizeof (%s));\n",
   FUNC_0(VAR_4->res_type), VAR_0, VAR_0);

 }
 if (VAR_3 && !VAR_6 &&
     (FUNC_3(VAR_4->args.decls->decl.type, "void"))) {


  if (VAR_2)
   FUNC_1(VAR_1, "\t return ");
  else
   FUNC_1(VAR_1, "\t if ");

  FUNC_1(VAR_1,
   "(clnt_call(clnt, %s,\n\t\t(xdrproc_t) xdr_void, ",
   VAR_4->proc_name);
  FUNC_1(VAR_1,
   "(caddr_t) NULL,\n\t\t(xdrproc_t) xdr_%s, (caddr_t) %s%s,",
   FUNC_4(VAR_4->res_type), (VAR_2)?"":FUNC_0(VAR_4->res_type),
   VAR_0);

  if (VAR_2)
   FUNC_1(VAR_1, "\n\t\tTIMEOUT));\n");
  else
   FUNC_1(VAR_1, "\n\t\tTIMEOUT) != RPC_SUCCESS) {\n");

 } else if (VAR_3 && VAR_6) {




  for (VAR_5 = VAR_4->args.decls; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
   FUNC_1(VAR_1, "\targ.%s = %s;\n",
    VAR_5->decl.name, VAR_5->decl.name);
  }
  if (VAR_2)
   FUNC_1(VAR_1, "\treturn ");
  else
   FUNC_1(VAR_1, "\tif ");
  FUNC_1(VAR_1,
   "(clnt_call(clnt, %s,\n\t\t(xdrproc_t) xdr_%s",
   VAR_4->proc_name,VAR_4->args.argname);
  FUNC_1(VAR_1,
   ", (caddr_t) &arg,\n\t\t(xdrproc_t) xdr_%s, (caddr_t) %s%s,",
   FUNC_4(VAR_4->res_type), (VAR_2)?"":FUNC_0(VAR_4->res_type),
   VAR_0);
  if (VAR_2)
   FUNC_1(VAR_1, "\n\t\tTIMEOUT));\n");
  else
   FUNC_1(VAR_1, "\n\t\tTIMEOUT) != RPC_SUCCESS) {\n");
 } else {
  if (!VAR_2)
   FUNC_1(VAR_1,
   "\tif (clnt_call(clnt, %s,\n\t\t(xdrproc_t) xdr_%s, (caddr_t) %s%s,\n\t\t(xdrproc_t) xdr_%s, (caddr_t) %s%s,\n\t\tTIMEOUT) != RPC_SUCCESS) {\n",
   VAR_4->proc_name,
   FUNC_4(VAR_4->args.decls->decl.type),
   (VAR_3 ? "&" : ""),
   (VAR_3 ? VAR_4->args.decls->decl.name : "argp"),
   FUNC_4(VAR_4->res_type), FUNC_0(VAR_4->res_type),
   VAR_0);
  else

  FUNC_1(VAR_1,
   "\treturn (clnt_call(clnt, %s,\n\t\t(xdrproc_t) xdr_%s, (caddr_t) %s%s,\n\t\t(xdrproc_t) xdr_%s, (caddr_t) %s%s,\n\t\tTIMEOUT));\n",
   VAR_4->proc_name,
   FUNC_4(VAR_4->args.decls->decl.type),
   (VAR_3 ? "&" : ""),
   (VAR_3 ? VAR_4->args.decls->decl.name : "argp"),
   FUNC_4(VAR_4->res_type), "",
   VAR_0);
 }
 if (!VAR_2) {
  FUNC_1(VAR_1, "\t\treturn (NULL);\n");
  FUNC_1(VAR_1, "\t}\n");

  if (FUNC_3(VAR_4->res_type, "void")) {
   FUNC_1(VAR_1, "\treturn ((void *)%s%s);\n",
    FUNC_0(VAR_4->res_type), VAR_0);
  } else {
   FUNC_1(VAR_1, "\treturn (%s%s);\n",
    FUNC_0(VAR_4->res_type), VAR_0);
  }
 }
}
