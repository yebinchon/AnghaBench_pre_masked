
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,char*,...) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7(char **VAR_5)
{
 static int VAR_6;
 int VAR_7;

 if (VAR_5) {
  VAR_1 = VAR_5;
  return(1);
 }
 for (;;) {
  if (*VAR_1) {
   VAR_6 = 1;
   if (!(FUNC_5(*VAR_1, "r", VAR_4))) {
    FUNC_6("%s", *VAR_1);
    VAR_2 = 1;
    ++VAR_1;
    continue;
   }
   VAR_7 = 1;
  } else {
   if (VAR_6++)
    return(0);
   VAR_7 = 0;
  }

  if (FUNC_1(FUNC_4(VAR_4), VAR_0) < 0)
   FUNC_3(1, "unable to restrict %s",
       VAR_7 ? *VAR_1 : "stdin");




  if (VAR_7 == 0 || *(VAR_1 + 1) == ((void*)0)) {
   if (FUNC_0() < 0)
    FUNC_3(1, "unable to enter capability mode");
  }

  if (VAR_3)
   FUNC_2(VAR_7 ? *VAR_1 : "stdin", VAR_7);
  if (*VAR_1)
   ++VAR_1;
  if (!VAR_3)
   return(1);
 }

}
