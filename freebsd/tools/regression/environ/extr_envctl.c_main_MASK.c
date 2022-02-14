
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char** FUNC_2 (int,int) ;
 int FUNC_3 () ;
 char** VAR_2 ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char*) ;
 char FUNC_6 (int,char**,char*) ;
 char* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;

int
FUNC_13(int VAR_5, char **VAR_6)
{
 char VAR_7;
 const char *VAR_8 = "\n";
 const char *VAR_9;
 static char *VAR_10[] = { ((void*)0) };
 static char *VAR_11[] = { "FOO=bar", ((void*)0) };

 if (VAR_5 == 1) {
  FUNC_12(VAR_6[0]);
  FUNC_4(VAR_0);
 }


 while ((VAR_7 = FUNC_6(VAR_5, VAR_6, "DGS:Ub:c:g:hp:rs:tu:")) != -1) {
  switch (VAR_7) {
  case 'b':
   FUNC_1(VAR_3);
   break;

  case 'c':
   switch (FUNC_0(VAR_3)) {
   case 1:
    VAR_2 = ((void*)0);
    break;

   case 2:
    VAR_2[0] = ((void*)0);
    break;

   case 3:
    VAR_2 = FUNC_2(1, sizeof(*VAR_2));
    break;

   case 4:
    VAR_2 = VAR_10;
    break;
   }
   break;

  case 'D':
   FUNC_3();
   break;

  case 'G':
  case 'g':
   VAR_9 = FUNC_5(VAR_7 == 'g' ? VAR_3 : ((void*)0));
   FUNC_8("%s%s", VAR_9 == ((void*)0) ? "*NULL*" : VAR_9, VAR_8);
   break;

  case 'p':
   FUNC_7(FUNC_9(VAR_3), VAR_8);
   break;

  case 'r':
   VAR_2 = VAR_11;
   break;

  case 'S':
   FUNC_7(FUNC_10(((void*)0), VAR_3,
       FUNC_0(VAR_6[VAR_4])), VAR_8);
   VAR_4 += 1;
   break;

  case 's':
   FUNC_7(FUNC_10(VAR_3, VAR_6[VAR_4],
       FUNC_0(VAR_6[VAR_4 + 1])), VAR_8);
   VAR_4 += 2;
   break;

  case 't':
   VAR_8 = " ";
   break;

  case 'U':
  case 'u':
   FUNC_7(FUNC_11(VAR_7 == 'u' ? VAR_3 : ((void*)0)),
       VAR_8);
   break;

  case 'h':
  default:
   FUNC_12(VAR_6[0]);
   FUNC_4(VAR_0);
  }
 }


 if (VAR_8[0] == ' ')
  FUNC_8("\n");

 return (VAR_1);
}
