
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int pointerp; int name; } ;
typedef TYPE_1__ xdrfunc ;
struct TYPE_6__ {int val; struct TYPE_6__* next; } ;
typedef TYPE_2__ list ;
typedef int definition ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_1 ;
 char const* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 long FUNC_4 (int ) ;
 void* FUNC_5 (char const*) ;
 int * FUNC_6 () ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char const*,char const*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (char const*) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void
FUNC_13(const char *VAR_7, const char *VAR_8, int VAR_9, const char *VAR_10, int VAR_11)
{
 definition *VAR_12;
 const char *VAR_13;
 long VAR_14;
 const char *VAR_15;
 list *VAR_16;
 xdrfunc *VAR_17;
 void *VAR_18 = ((void*)0);

 FUNC_7(VAR_7, VAR_8);
 VAR_13 = VAR_9 ? FUNC_1(VAR_7, VAR_10) : VAR_10;
 FUNC_8(VAR_7, VAR_13);
 FUNC_0();
 if (VAR_13 || VAR_7){
  VAR_15 = VAR_18 = FUNC_5(VAR_13 ? VAR_13: VAR_7);
 } else
  VAR_15 = "STDIN_";

 FUNC_2(VAR_2, "#ifndef _%s\n#define	_%s\n\n", VAR_15,
  VAR_15);

 FUNC_2(VAR_2, "#include <rpc/rpc.h>\n");

 if (VAR_3)
  FUNC_2(VAR_2, "#include <pthread.h>\n");


 if (!VAR_0) {
  FUNC_2(VAR_2, "\n#ifdef __cplusplus\n");
  FUNC_2(VAR_2, "extern \"C\" {\n");
  FUNC_2(VAR_2, "#endif\n\n");
 }



 VAR_14 = FUNC_4(VAR_2);


 while ( (VAR_12 = FUNC_6()) ) {
  FUNC_9(VAR_12, VAR_11);
 }






 for (VAR_16 = VAR_1; VAR_16 != ((void*)0); VAR_16 = VAR_16->next) {
  FUNC_10(VAR_16->val, VAR_11);
 }

 if (VAR_6 != ((void*)0)){

  FUNC_2(VAR_2,
   "\n/* the xdr functions */\n");

  if (VAR_0){
   FUNC_2(VAR_2, "\n#ifdef __cplusplus\n");
   FUNC_2(VAR_2, "extern \"C\" {\n");
   FUNC_2(VAR_2, "#endif\n");
  }

  VAR_17 = VAR_6;
  while (VAR_17 != ((void*)0)){
   FUNC_11(VAR_17->name, VAR_17->pointerp);
   VAR_17 = VAR_17->next;
  }
 }

 if (VAR_9 && VAR_14 == FUNC_4(VAR_2)) {
  (void) FUNC_12(VAR_13);
 } else if (VAR_5) {
  FUNC_2(VAR_2, VAR_4);
 }

 FUNC_2(VAR_2, "\n#ifdef __cplusplus\n");
 FUNC_2(VAR_2, "}\n");
 FUNC_2(VAR_2, "#endif\n");

 FUNC_2(VAR_2, "\n#endif /* !_%s */\n", VAR_15);
 FUNC_3(VAR_18);
}
