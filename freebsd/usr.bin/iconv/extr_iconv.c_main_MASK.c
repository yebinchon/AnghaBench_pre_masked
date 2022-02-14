
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ iconv_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char**,char*,int ,int *) ;
 int FUNC_8 (scalar_t__,int *,int *,int *,int *) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;
 int FUNC_11 (int ,int *) ;
 int VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*) ;
 int * VAR_7 ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;

int
FUNC_17(int VAR_8, char **VAR_9)
{
 iconv_t VAR_10;
 FILE *VAR_11;
 const char *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 bool VAR_17 = 0, VAR_18 = 0;

 VAR_12 = VAR_13 = "";

 FUNC_12(VAR_2, "");
 FUNC_13(VAR_9[0]);

 while ((VAR_14 = FUNC_7(VAR_8, VAR_9, "csLlf:t:",
     VAR_4, ((void*)0))) != -1) {
  switch (VAR_14) {
  case 'c':
   VAR_17 = 1;
   break;
  case 's':
   VAR_18 = 1;
   break;
  case 'l':

   if (VAR_18 || VAR_17 || FUNC_14(VAR_12, "") != 0 ||
       FUNC_14(VAR_13, "") != 0) {
    FUNC_16("-l is not allowed with other flags.");
    FUNC_15();
   }
   FUNC_11(VAR_3, ((void*)0));
   return (VAR_1);
  case 'f':

   if (VAR_5 != ((void*)0))
    VAR_12 = VAR_5;
   break;
  case 't':

   if (VAR_5 != ((void*)0))
    VAR_13 = VAR_5;
   break;
  default:
   FUNC_15();
  }
 }
 VAR_8 -= VAR_6;
 VAR_9 += VAR_6;
 if ((FUNC_14(VAR_12, "") == 0) && (FUNC_14(VAR_13, "") == 0))
  FUNC_15();

 if (FUNC_2() < 0)
  FUNC_4(VAR_0, "capsicum");





 FUNC_0();




 VAR_10 = FUNC_10(VAR_13, VAR_12);
 if (VAR_10 == (iconv_t)-1)
  FUNC_4(VAR_0, "iconv_open(%s, %s)", VAR_13, VAR_12);

 if (VAR_8 == 0) {
  if (FUNC_1() < 0)
   FUNC_4(VAR_0, "unable to enter capability mode");
  VAR_16 = FUNC_3(VAR_7, VAR_10, VAR_18, VAR_17);
 } else {
  VAR_16 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
   VAR_11 = (FUNC_14(VAR_9[VAR_15], "-") != 0) ?
       FUNC_6(VAR_9[VAR_15], "r") : VAR_7;
   if (VAR_11 == ((void*)0))
    FUNC_4(VAR_0, "Cannot open `%s'",
        VAR_9[VAR_15]);

   if (VAR_15 + 1 == VAR_8 && FUNC_1() < 0)
    FUNC_4(VAR_0,
        "unable to enter capability mode");
   VAR_16 |= FUNC_3(VAR_11, VAR_10, VAR_18, VAR_17);
   (void)FUNC_5(VAR_11);


   (void)FUNC_8(VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  }
 }
 FUNC_9(VAR_10);
 return (VAR_16 == 0 ? VAR_1 : VAR_0);
}
