
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char**,char*,char*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int,char**,char*) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*) ;

int
FUNC_14(int VAR_3, char **VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 char *VAR_8;
 const char *VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_7 = VAR_11 = VAR_12 = VAR_13 = VAR_14 = 0;
 VAR_9 = "mktemp";
 VAR_10 = ((void*)0);

 while ((VAR_5 = FUNC_5(VAR_3, VAR_4, "dqt:u")) != -1)
  switch (VAR_5) {
  case 'd':
   VAR_11++;
   break;

  case 'q':
   VAR_12++;
   break;

  case 't':
   VAR_9 = VAR_1;
   VAR_13++;
   break;

  case 'u':
   VAR_14++;
   break;

  default:
   FUNC_12();
  }

 VAR_3 -= VAR_2;
 VAR_4 += VAR_2;

 if (!VAR_13 && VAR_3 < 1) {
  VAR_13 = 1;
  VAR_9 = "tmp";
 }

 if (VAR_13) {
  VAR_8 = FUNC_4("TMPDIR");
  if (VAR_8 == ((void*)0))
   FUNC_0(&VAR_10, "%s%s.XXXXXXXX", VAR_0, VAR_9);
  else
   FUNC_0(&VAR_10, "%s/%s.XXXXXXXX", VAR_8, VAR_9);

  if (VAR_10 == ((void*)0)) {
   if (VAR_12)
    return (1);
   else
    FUNC_2(1, "cannot generate template");
  }
 }


 while (VAR_10 != ((void*)0) || VAR_3 > 0) {
  if (VAR_10 == ((void*)0)) {
   VAR_10 = FUNC_10(VAR_4[0]);
   VAR_4++;
   VAR_3--;
  }

  if (VAR_11) {
   if (FUNC_6(VAR_10) == ((void*)0)) {
    VAR_7 = 1;
    if (!VAR_12)
     FUNC_13("mkdtemp failed on %s", VAR_10);
   } else {
    FUNC_8("%s\n", VAR_10);
    if (VAR_14)
     FUNC_9(VAR_10);
   }
  } else {
   VAR_6 = FUNC_7(VAR_10);
   if (VAR_6 < 0) {
    VAR_7 = 1;
    if (!VAR_12)
     FUNC_13("mkstemp failed on %s", VAR_10);
   } else {
    FUNC_1(VAR_6);
    if (VAR_14)
     FUNC_11(VAR_10);
    FUNC_8("%s\n", VAR_10);
   }
  }
  if (VAR_10)
   FUNC_3(VAR_10);
  VAR_10 = ((void*)0);
 }
 return (VAR_7);
}
