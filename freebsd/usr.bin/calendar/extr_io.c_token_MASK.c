
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int * VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,char*) ;
 int * FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char**) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int
FUNC_10(char *VAR_4, FILE *VAR_5, bool *VAR_6)
{
 char *VAR_7, VAR_8, VAR_9;

 if (FUNC_7(VAR_4, "endif", 5) == 0) {
  *VAR_6 = 0;
  return (VAR_1);
 }

 if (*VAR_6)
  return (VAR_1);

 if (FUNC_7(VAR_4, "include", 7) == 0) {
  VAR_7 = VAR_4 + 7;

  FUNC_8(&VAR_7);

  if (*VAR_7 == '\0') {
   FUNC_9("Expecting arguments after #include");
   return (VAR_0);
  }

  if (*VAR_7 != '<' && *VAR_7 != '\"') {
   FUNC_9("Excecting '<' or '\"' after #include");
   return (VAR_0);
  }

  VAR_9 = *VAR_7;
  VAR_7++;
  VAR_8 = VAR_7[FUNC_6(VAR_7) - 1];

  switch(VAR_8) {
  case '>':
   if (VAR_9 != '<') {
    FUNC_9("Unterminated include expecting '\"'");
    return (VAR_0);
   }
   break;
  case '\"':
   if (VAR_9 != '\"') {
    FUNC_9("Unterminated include expecting '>'");
    return (VAR_0);
   }
   break;
  default:
   FUNC_9("Unterminated include expecting '%c'",
       VAR_9 == '<' ? '>' : '\"' );
   return (VAR_0);
  }
  VAR_7[FUNC_6(VAR_7) - 1] = '\0';

  if (FUNC_1(FUNC_0(VAR_7), VAR_5))
   return (VAR_0);

  return (VAR_1);
 }

 if (FUNC_7(VAR_4, "define", 6) == 0) {
  if (VAR_3 == ((void*)0))
   VAR_3 = FUNC_4();
  VAR_7 = VAR_4 + 6;
  FUNC_8(&VAR_7);

  if (*VAR_7 == '\0') {
   FUNC_9("Expecting arguments after #define");
   return (VAR_0);
  }

  FUNC_2(VAR_3, FUNC_5(VAR_7));
  return (VAR_1);
 }

 if (FUNC_7(VAR_4, "ifndef", 6) == 0) {
  VAR_7 = VAR_4 + 6;
  FUNC_8(&VAR_7);

  if (*VAR_7 == '\0') {
   FUNC_9("Expecting arguments after #ifndef");
   return (VAR_0);
  }

  if (VAR_3 != ((void*)0) && FUNC_3(VAR_3, VAR_7) != ((void*)0))
   *VAR_6 = 1;

  return (VAR_1);
 }

 return (VAR_2);

}
