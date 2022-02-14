
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char**,char*,int ,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char const*,...) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char const*,...) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int,char*,char const*) ;
 int FUNC_13 (struct node*) ;
 int FUNC_14 (struct node*,int) ;
 void FUNC_15 (struct node*,char const*) ;
 int FUNC_16 (struct node*,char const*,char const*) ;
 void FUNC_17 (struct node*,char const*,char const*) ;
 int * VAR_2 ;

void
FUNC_18(struct node *VAR_3, const char *VAR_4, const char *VAR_5,
    bool *VAR_6)
{
 char *VAR_7 = ((void*)0);
 int VAR_8, VAR_9;
 bool VAR_10;

 FUNC_2(VAR_4 != ((void*)0));
 FUNC_2(VAR_4[0] != '\0');

 FUNC_10("parsing map \"%s\"", VAR_4);

 if (VAR_6 != ((void*)0))
  *VAR_6 = 0;

 if (VAR_4[0] == '-') {
  if (VAR_6 != ((void*)0))
   *VAR_6 = 1;
  return (FUNC_17(VAR_3, VAR_4, VAR_5));
 }

 if (VAR_4[0] == '/') {
  VAR_7 = FUNC_5(VAR_4);
 } else {
  VAR_9 = FUNC_1(&VAR_7, "%d/%s", VAR_0, VAR_4);
  if (VAR_9 < 0)
   FUNC_11(1, "asprintf");
  FUNC_10("map \"%s\" maps to \"%s\"", VAR_4, VAR_7);





  VAR_8 = FUNC_0(VAR_7, VAR_1);
  if (VAR_8 != 0) {
   FUNC_10("map file \"%s\" does not exist; falling "
       "back to directory services", VAR_7);
   return (FUNC_15(VAR_3, VAR_4));
  }
 }

 VAR_10 = FUNC_7(VAR_7);

 if (VAR_10) {
  FUNC_10("map \"%s\" is executable", VAR_4);

  if (VAR_6 != ((void*)0))
   *VAR_6 = 1;

  if (VAR_5 != ((void*)0)) {
   VAR_2 = FUNC_4(VAR_7, VAR_5, ((void*)0));
  } else {
   VAR_2 = FUNC_4(VAR_7, ((void*)0));
  }
  FUNC_2(VAR_2 != ((void*)0));
 } else {
  VAR_2 = FUNC_8(VAR_7, "r");
  if (VAR_2 == ((void*)0))
   FUNC_11(1, "unable to open \"%s\"", VAR_7);
 }

 FUNC_9(VAR_7);
 VAR_7 = ((void*)0);

 FUNC_16(VAR_3, VAR_4, VAR_10 ? VAR_5 : ((void*)0));

 if (VAR_10) {
  VAR_8 = FUNC_3(VAR_2);
  VAR_2 = ((void*)0);
  if (VAR_8 != 0) {
   FUNC_12(1, "failed to handle executable map \"%s\"",
       VAR_4);
  }
 } else {
  FUNC_6(VAR_2);
 }
 VAR_2 = ((void*)0);

 FUNC_10("done parsing map \"%s\"", VAR_4);

 FUNC_14(VAR_3, 0);
 FUNC_13(VAR_3);
}
