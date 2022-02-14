
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,char*,char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;
 size_t FUNC_6 (char*,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(char **VAR_0)
{
 size_t VAR_1;
 char **VAR_2, *VAR_3, *VAR_4;

 while ((VAR_3 = *++VAR_0) != ((void*)0)) {

  if (VAR_3[0] == '-' && VAR_3[1] == '-')
   return;

  if (VAR_3[0] != '-')
   continue;
  switch (VAR_3[1]) {
  case 'a':
   if (VAR_3[2] == '\0' && (VAR_0[1] == ((void*)0) ||
       (FUNC_4(VAR_0[1], "1") != 0 &&
       FUNC_4(VAR_0[1], "2") != 0))) {
    VAR_3[1] = '\01';
    FUNC_8("-a option used without an argument; "
        "reverting to historical behavior");
   }
   break;
  case 'j':





   switch(VAR_3[2]) {
   case '1':
    if (VAR_3[3] != '\0')
     goto jbad;
    VAR_3[1] = '1';
    VAR_3[2] = '\0';
    break;
   case '2':
    if (VAR_3[3] != '\0')
     goto jbad;
    VAR_3[1] = '2';
    VAR_3[2] = '\0';
    break;
   case '\0':
    break;
   default:
jbad: FUNC_1(1, "illegal option -- %s", VAR_3);
    FUNC_7();
   }
   break;
  case 'o':




   if (VAR_3[2] != '\0')
    break;
   for (VAR_2 = VAR_0 + 2; *VAR_2; ++VAR_2) {
    if (VAR_2[0][0] == '0' || ((VAR_2[0][0] != '1' &&
        VAR_2[0][0] != '2') || VAR_2[0][1] != '.'))
     break;
    VAR_1 = FUNC_5(*VAR_2);
    if (VAR_1 - 2 != FUNC_6(*VAR_2 + 2, "0123456789"))
     break;
    if ((VAR_4 = FUNC_2(VAR_1 + 3)) == ((void*)0))
     FUNC_0(1, ((void*)0));
    VAR_4[0] = '-';
    VAR_4[1] = 'o';
    FUNC_3(VAR_4 + 2, *VAR_2, VAR_1 + 1);
    *VAR_2 = VAR_4;
   }
   VAR_0 = VAR_2 - 1;
   break;
  }
 }
}
