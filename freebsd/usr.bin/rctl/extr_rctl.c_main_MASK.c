
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int,int) ;
 int FUNC_7 (char*,char*,int,int) ;
 int FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 () ;

int
FUNC_11(int VAR_1, char **VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0,
     VAR_9 = 0;
 char *VAR_10 = ((void*)0), *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 while ((VAR_3 = FUNC_4(VAR_1, VAR_2, "ahlnru")) != -1) {
  switch (VAR_3) {
  case 'a':
   VAR_4 = 1;
   break;
  case 'h':
   VAR_5 = 1;
   break;
  case 'l':
   VAR_7 = 1;
   break;
  case 'n':
   VAR_6 = 1;
   break;
  case 'r':
   VAR_8 = 1;
   break;
  case 'u':
   VAR_9 = 1;
   break;

  case '?':
  default:
   FUNC_10();
  }
 }

 VAR_1 -= VAR_0;
 VAR_2 += VAR_0;

 if (VAR_4 + VAR_7 + VAR_8 + VAR_9 > 1)
  FUNC_1(1, "at most one of -a, -l, -r, or -u may be specified");

 if (VAR_1 == 0) {
  if (VAR_4 + VAR_7 + VAR_8 + VAR_9 == 0) {
   VAR_10 = FUNC_9("::");
   FUNC_7(VAR_10, VAR_10, VAR_5, VAR_6);

   return (0);
  }

  FUNC_10();
 }

 VAR_13 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  VAR_11 = VAR_2[VAR_12];






  if (VAR_4 != 0 && VAR_6 != 0)
   VAR_10 = FUNC_2(VAR_11, 0);
  else
   VAR_10 = FUNC_2(VAR_11, 1);

  if (VAR_10 == ((void*)0)) {
   VAR_13++;
   continue;
  }






  if (VAR_4) {
   VAR_14 = FUNC_0(VAR_10, VAR_11);
  } else if (VAR_7) {
   VAR_14 = FUNC_6(VAR_10, VAR_11,
       VAR_5, VAR_6);
  } else if (VAR_8) {
   VAR_14 = FUNC_5(VAR_10, VAR_11);
  } else if (VAR_9) {
   VAR_14 = FUNC_8(VAR_10, VAR_11, VAR_5);
  } else {
   VAR_14 = FUNC_7(VAR_10, VAR_11,
       VAR_5, VAR_6);
  }

  if (VAR_14 != 0)
   VAR_13++;

  FUNC_3(VAR_10);
 }

 return (VAR_13);
}
