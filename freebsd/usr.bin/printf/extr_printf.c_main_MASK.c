
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*,int,size_t*) ;
 int FUNC_1 (char*,int,int,int ) ;
 char** VAR_5 ;
 int FUNC_2 (int,char**,char*) ;
 char** VAR_6 ;
 size_t VAR_7 ;
 char** VAR_8 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_9 ;
 char* FUNC_4 (char*,int*) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int ,char*) ;
 int VAR_10 ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;

int
FUNC_9(int VAR_11, char *VAR_12[])
{
 size_t VAR_13;
 int VAR_14, VAR_15;
 char *VAR_16, *VAR_17, *VAR_18;

 int VAR_19;

 (void) FUNC_6(VAR_2, "");







 while ((VAR_19 = FUNC_2(VAR_11, VAR_12, "")) != -1)
  switch (VAR_19) {
  case '?':
  default:
   FUNC_7();
   return (1);
  }
 VAR_11 -= VAR_9;
 VAR_12 += VAR_9;


 if (VAR_11 < 1) {
  FUNC_7();
  return (1);
 }
 VAR_17 = VAR_16 = *VAR_12;
 FUNC_0(VAR_17, 1, &VAR_13);
 VAR_15 = VAR_14 = 0;
 VAR_5 = ++VAR_12;

 for (;;) {
  VAR_6 = VAR_5;

  VAR_8 = VAR_5;
  for (VAR_7 = 0; VAR_5[VAR_7]; VAR_7++)
            ;
  VAR_18 = VAR_17;
  while (VAR_17 < VAR_16 + VAR_13) {
   if (VAR_17[0] == '%') {
    FUNC_1(VAR_18, 1, VAR_17 - VAR_18, VAR_10);
    if (VAR_17[1] == '%') {

     FUNC_5('%');
     VAR_17 += 2;
    } else {
     VAR_17 = FUNC_4(VAR_17, &VAR_15);
     if (VAR_17 == ((void*)0) || VAR_17 == VAR_4) {



      return (VAR_17 == ((void*)0) ? 1 : VAR_15);
     }
     VAR_14 = 0;
    }
    VAR_18 = VAR_17;
   } else
    VAR_17++;
   if (VAR_5 > VAR_6)
    VAR_6 = VAR_5;
  }
  VAR_5 = VAR_6;

  if (VAR_14 == 1) {
   FUNC_8("missing format character");



   return (1);
  }
  FUNC_1(VAR_18, 1, VAR_17 - VAR_18, VAR_10);
  if (!*VAR_5) {



   return (VAR_15);
  }

  VAR_17 = VAR_16;
  VAR_14 = 1;
 }

}
