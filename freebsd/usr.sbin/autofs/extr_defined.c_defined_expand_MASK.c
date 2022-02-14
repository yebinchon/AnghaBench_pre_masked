
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,int,char const*,char const*,char const*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (char const*,int) ;

char *
FUNC_10(const char *VAR_0)
{
 const char *VAR_1;
 char VAR_2, *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 bool VAR_11 = 0, VAR_12 = 0;

 VAR_3 = FUNC_2(VAR_0);

 for (VAR_5 = 0; VAR_0[VAR_5] != '\0'; VAR_5++) {
  VAR_2 = VAR_0[VAR_5];
  if (VAR_2 == '\\' && VAR_11 == 0) {
   VAR_11 = 1;
   continue;
  }
  if (VAR_11) {
   VAR_11 = 0;
   continue;
  }
  VAR_11 = 0;
  if (VAR_2 != '$')
   continue;





  VAR_7 = VAR_5;
  FUNC_1(VAR_5 + 1 < (int)FUNC_8(VAR_0));
  if (VAR_0[VAR_5 + 1] == '{')
   VAR_12 = 1;

  if (VAR_0[VAR_5 + 1] == '\0') {
   FUNC_7("truncated variable");
   return (((void*)0));
  }




  VAR_5++;

  if (VAR_12) {
   if (VAR_0[VAR_5 + 1] == '\0') {
    FUNC_7("truncated variable");
    return (((void*)0));
   }




   VAR_5++;
  }






  VAR_8 = VAR_5;

  for (; VAR_0[VAR_5] != '\0'; VAR_5++) {
   VAR_2 = VAR_0[VAR_5];




   if (FUNC_5(VAR_2) || VAR_2 == '_')
    continue;




   if (VAR_12) {
    if (VAR_2 != '}')
     continue;






    VAR_10 = VAR_5 + 1;
    FUNC_1(VAR_5 > 1);
    FUNC_1(VAR_5 - 1 > VAR_8);
    VAR_9 = VAR_5 - VAR_8;
    break;
   }

   VAR_10 = VAR_5;
   FUNC_1(VAR_5 > 1);
   FUNC_1(VAR_5 > VAR_8);
   VAR_9 = VAR_5 - VAR_8;
   break;
  }

  VAR_4 = FUNC_9(VAR_0 + VAR_8, VAR_9);
  if (VAR_4 == ((void*)0))
   FUNC_6(1, "strndup");
  VAR_1 = FUNC_3(VAR_4);
  if (VAR_1 == ((void*)0)) {
   FUNC_7("undefined variable ${%s}", VAR_4);
   return (((void*)0));
  }




  VAR_6 = FUNC_0(&VAR_3, "%.*s%s%s",
      VAR_7, VAR_0, VAR_1, VAR_0 + VAR_10);
  if (VAR_6 < 0)
   FUNC_6(1, "asprintf");


  FUNC_4(VAR_4);




  VAR_0 = VAR_3;
  VAR_5 = VAR_7 + FUNC_8(VAR_1);
  VAR_11 = VAR_12 = 0;
  VAR_7 = VAR_8 = VAR_9 = VAR_10 = 0;
  FUNC_1(VAR_5 <= (int)FUNC_8(VAR_0));
 }

 if (VAR_7 != 0 || VAR_8 != 0 || VAR_9 != 0 || VAR_10 != 0) {
  FUNC_7("truncated variable");
  return (((void*)0));
 }

 return (VAR_3);
}
