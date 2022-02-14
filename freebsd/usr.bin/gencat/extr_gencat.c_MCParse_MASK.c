
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 char* FUNC_7 (int,char*,char) ;
 scalar_t__ FUNC_8 (unsigned char) ;
 scalar_t__ FUNC_9 (unsigned char) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*) ;

void
FUNC_13(int VAR_0)
{
 char *VAR_1, *VAR_2;
 int VAR_3, VAR_4 = 0;
 char VAR_5 = 0;



 while ((VAR_1 = FUNC_6(VAR_0))) {
  if (*VAR_1 == '$') {
   ++VAR_1;
   if (FUNC_10(VAR_1, "set", 3) == 0) {
    VAR_1 += 3;
    VAR_1 = FUNC_12(VAR_1);
    VAR_3 = FUNC_4(VAR_1);
    FUNC_1(VAR_3);
    VAR_4 = 0;
   } else if (FUNC_10(VAR_1, "delset", 6) == 0) {
    VAR_1 += 6;
    VAR_1 = FUNC_12(VAR_1);
    VAR_3 = FUNC_4(VAR_1);
    FUNC_3(VAR_3);
   } else if (FUNC_10(VAR_1, "quote", 5) == 0) {
    VAR_1 += 5;
    if (!*VAR_1)
     VAR_5 = 0;
    else {
     VAR_1 = FUNC_12(VAR_1);
     if (!*VAR_1)
      VAR_5 = 0;
     else
      VAR_5 = *VAR_1;
    }
   } else if (FUNC_9((unsigned char) *VAR_1)) {
    ;
   } else {
    if (*VAR_1) {
     VAR_1 = FUNC_12(VAR_1);
     if (*VAR_1)
      FUNC_11(VAR_1, "unrecognized line");
    }
   }
  } else {



   if (!*VAR_1)
    continue;




   if (FUNC_8((unsigned char) *VAR_1)) {
    VAR_4 = FUNC_4(VAR_1);
    VAR_1 = FUNC_5(VAR_1);
    VAR_1 = FUNC_12(VAR_1);

   } else {
    FUNC_11(VAR_1, "neither blank line nor start of a message id");
    continue;
   }





   if (!*VAR_1) {
    FUNC_2(VAR_4);
   } else {
    VAR_2 = FUNC_7(VAR_0, VAR_1, VAR_5);
    FUNC_0(VAR_4, VAR_2);
   }
  }
 }
}
