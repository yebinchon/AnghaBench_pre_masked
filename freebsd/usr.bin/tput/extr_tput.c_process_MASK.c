
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char const*,int,char const*) ;
 int VAR_0 ;
 char* FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char const*,char,char const*) ;

__attribute__((used)) static char **
FUNC_5(const char *VAR_1, char *VAR_2, char **VAR_3)
{
 static const char VAR_4[] =
     "not enough arguments (%d) for capability `%s'";
 static const char VAR_5[] =
     "too many arguments (%d) for capability `%s'";
 static const char VAR_6[] =
     "unknown %% escape `%c' for capability `%s'";
 char *VAR_7;
 int VAR_8, VAR_9, VAR_10;


 for (VAR_7 = VAR_2, VAR_8 = 0; *VAR_7 != '\0'; VAR_7++)
  if (*VAR_7 == '%')
       switch (*++VAR_7) {
       case 'd':
       case '2':
       case '3':
       case '.':
       case '+':
        VAR_8++;
        break;
       case '%':
       case '>':
       case 'i':
       case 'r':
       case 'n':
       case 'B':
       case 'D':
        break;
       case 'p':
        if (VAR_7[1]) {
     VAR_7++;
     break;
        }
       default:



     FUNC_4(VAR_6, *VAR_7, VAR_1);
       }


 switch (VAR_8) {
 case 0:
  (void)FUNC_3(VAR_2, 1, VAR_0);
  break;
 case 1:
  VAR_10 = 0;

  if (*++VAR_3 == ((void*)0) || *VAR_3[0] == '\0')
   FUNC_1(2, VAR_4, 1, VAR_1);
  VAR_9 = FUNC_0(*VAR_3);

  (void)FUNC_3(FUNC_2(VAR_2, VAR_10, VAR_9), 1, VAR_0);
  break;
 case 2:
  if (*++VAR_3 == ((void*)0) || *VAR_3[0] == '\0')
   FUNC_1(2, VAR_4, 2, VAR_1);
  VAR_10 = FUNC_0(*VAR_3);

  if (*++VAR_3 == ((void*)0) || *VAR_3[0] == '\0')
   FUNC_1(2, VAR_4, 2, VAR_1);
  VAR_9 = FUNC_0(*VAR_3);

  (void) FUNC_3(FUNC_2(VAR_2, VAR_10, VAR_9), VAR_9, VAR_0);
  break;

 default:
  FUNC_1(2, VAR_5, VAR_8, VAR_1);
 }
 return (VAR_3);
}
