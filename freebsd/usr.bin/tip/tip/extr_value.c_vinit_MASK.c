
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_type; char* v_value; int v_access; int * v_name; } ;
typedef TYPE_1__ value_t ;
typedef int file ;
typedef int FILE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int,char*,char*) ;
 int VAR_7 ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (char*) ;
 TYPE_1__* VAR_9 ;

void
FUNC_13(void)
{
 char VAR_10[VAR_2], *VAR_11;
 value_t *VAR_12;
 FILE *VAR_13;

 for (VAR_12 = VAR_9; VAR_12->v_name != ((void*)0); VAR_12++) {
  if (VAR_12->v_type&VAR_0)
   if ((VAR_11 = FUNC_5(VAR_12->v_name)))
    VAR_12->v_value = VAR_11;
  if (VAR_12->v_type&VAR_4)
   FUNC_7(VAR_12->v_value, *FUNC_0(VAR_12->v_value));
 }




 VAR_11 = FUNC_11(VAR_3);
 if (VAR_11 == ((void*)0)) {
  (void)FUNC_4(VAR_7,
      "$HOME not set. Skipping check for ~/.tiprc\n");
 } else if (FUNC_9(VAR_11) + sizeof("/.tiprc") > sizeof(VAR_10)) {
  (void)FUNC_4(VAR_7, "Home directory path too long: %s\n",
      FUNC_11(VAR_3));
 } else {
  FUNC_8(VAR_10, sizeof VAR_10, "%s/.tiprc", FUNC_11(VAR_3));
  if ((VAR_13 = FUNC_3(VAR_10, "r")) != ((void*)0)) {
   char *VAR_14;

   while (FUNC_2(VAR_10, sizeof(VAR_10)-1, VAR_13) != ((void*)0)) {
    if (VAR_8)
     FUNC_6("set %s", VAR_10);
    if ((VAR_14 = FUNC_10(VAR_10, '\n')))
     *VAR_14 = '\0';
    FUNC_12(VAR_10);
   }
   FUNC_1(VAR_13);
  }
 }



 VAR_9[VAR_1].v_access &= ~(VAR_6<<VAR_5);
}
