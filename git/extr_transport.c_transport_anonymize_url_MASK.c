
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 void* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char*,int,char const*,int,char*) ;

char *FUNC_7(const char *VAR_0)
{
 char *VAR_1, *VAR_2;
 size_t VAR_3, VAR_4 = 0;

 VAR_2 = FUNC_1(VAR_0, '@');
 if (FUNC_4(VAR_0) || !VAR_2)
  goto literal_copy;

 VAR_3 = FUNC_2(++VAR_2);
 VAR_1 = FUNC_3(VAR_0, "://");
 if (!VAR_1) {
  if (!FUNC_1(VAR_2, ':'))

   goto literal_copy;
 } else {
  const char *VAR_5;

  for (VAR_5 = VAR_0; VAR_5 < VAR_1; VAR_5++) {
   switch (*VAR_5) {

   case '+': case '.': case '-':
    break;
   default:
    if (FUNC_0(*VAR_5))
     break;

    goto literal_copy;
   }
  }

  VAR_5 = FUNC_1(VAR_1 + 3, '/');
  if (VAR_5 && VAR_5 < VAR_2)
   goto literal_copy;
  VAR_4 = VAR_1 - VAR_0 + 3;
 }
 return FUNC_6("%.*s%.*s", (int)VAR_4, VAR_0,
         (int)VAR_3, VAR_2);
literal_copy:
 return FUNC_5(VAR_0);
}
