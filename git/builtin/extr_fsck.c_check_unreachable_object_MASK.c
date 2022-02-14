
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int flags; scalar_t__ type; int oid; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct object*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (struct object*) ;
 int FUNC_10 (int ,int ,char*) ;
 scalar_t__ FUNC_11 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_12 (int ,int *,int *,int) ;
 scalar_t__ VAR_6 ;
 int * FUNC_13 (char*,char*) ;

__attribute__((used)) static void FUNC_14(struct object *VAR_7)
{






 if (!(VAR_7->flags & VAR_0))
  return;





 if (VAR_5) {
  FUNC_10(FUNC_0("unreachable %s %s"), FUNC_9(VAR_7),
     FUNC_1(VAR_7));
  return;
 }
 if (!(VAR_7->flags & VAR_3)) {
  if (VAR_4)
   FUNC_10(FUNC_0("dangling %s %s"), FUNC_9(VAR_7),
      FUNC_1(VAR_7));
  if (VAR_6) {
   char *VAR_8 = FUNC_8("lost-found/%s/%s",
    VAR_7->type == VAR_2 ? "commit" : "other",
    FUNC_1(VAR_7));
   FILE *VAR_9;

   if (FUNC_11(VAR_8)) {
    FUNC_3(FUNC_0("could not create lost-found"));
    FUNC_7(VAR_8);
    return;
   }
   VAR_9 = FUNC_13(VAR_8, "w");
   if (VAR_7->type == VAR_1) {
    if (FUNC_12(FUNC_5(VAR_9), &VAR_7->oid, ((void*)0), 1))
     FUNC_2(FUNC_0("could not write '%s'"), VAR_8);
   } else
    FUNC_6(VAR_9, "%s\n", FUNC_1(VAR_7));
   if (FUNC_4(VAR_9))
    FUNC_2(FUNC_0("could not finish '%s'"),
       VAR_8);
   FUNC_7(VAR_8);
  }
  return;
 }






}
