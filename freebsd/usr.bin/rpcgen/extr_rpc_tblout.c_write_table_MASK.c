
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int vers_num; TYPE_7__* procs; struct TYPE_16__* next; } ;
typedef TYPE_6__ version_list ;
struct TYPE_15__ {TYPE_4__* decls; int argname; } ;
struct TYPE_17__ {int arg_num; char* res_prefix; int res_type; TYPE_5__ args; int proc_name; int proc_num; struct TYPE_17__* next; } ;
typedef TYPE_7__ proc_list ;
struct TYPE_11__ {TYPE_6__* versions; } ;
struct TYPE_12__ {TYPE_1__ pr; } ;
struct TYPE_18__ {int def_name; TYPE_2__ def; } ;
typedef TYPE_8__ definition ;
struct TYPE_13__ {char* prefix; int type; } ;
struct TYPE_14__ {TYPE_3__ decl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,char*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static void
FUNC_10(definition *VAR_7)
{
 version_list *VAR_8;
 proc_list *VAR_9;
 int VAR_10;
 int VAR_11;
 char VAR_12[100];
 int VAR_13;

 for (VAR_8 = VAR_7->def.pr.versions; VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {
  VAR_13 = 0;
  FUNC_8(VAR_12, "%s_%s",
      FUNC_3(VAR_7->def_name), VAR_8->vers_num);

  FUNC_1(VAR_0, VAR_5, VAR_12);

  if (FUNC_4(VAR_8->procs)) {
   VAR_11 = 0;
  } else {
   VAR_11 = 1;
   FUNC_2(VAR_3, VAR_0);
  }
  for (VAR_9 = VAR_8->procs; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
   VAR_10 = FUNC_0(VAR_9->proc_num);
   if (VAR_10 != VAR_11++) {
    FUNC_1(VAR_0,
   "\n/*\n * WARNING: table out of order\n */\n");
    if (VAR_13 == 0) {
     FUNC_9("WARNING %s table is out of order", VAR_12);
     VAR_13 = 1;
     VAR_2 = 1;
    }
    VAR_11 = VAR_10 + 1;
   }
   FUNC_1(VAR_0, "\n\t(char *(*)())RPCGEN_ACTION(");


   if( !VAR_1 )
     FUNC_7(VAR_9->proc_name, VAR_8->vers_num);
   else {
     if( VAR_1 )
       FUNC_1( VAR_0, "_");
     FUNC_6(VAR_9->proc_name, VAR_8->vers_num);
   }
   FUNC_1(VAR_0, "),\n");


   if( VAR_9->arg_num > 1 )
     FUNC_5((char*) ((void*)0), VAR_9->args.argname );
   else

     FUNC_5( VAR_9->args.decls->decl.prefix,
      VAR_9->args.decls->decl.type );

   FUNC_5(VAR_9->res_prefix, VAR_9->res_type);
  }


  FUNC_2(VAR_4, VAR_0);
  FUNC_1(VAR_0, VAR_6, VAR_12, VAR_12, VAR_12);
 }
}
