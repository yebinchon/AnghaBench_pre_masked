
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, const char *VAR_1,
        char **VAR_2, char **VAR_3)
{
 char *VAR_4, *VAR_5;


 *VAR_2 = ((void*)0);
 *VAR_3 = ((void*)0);
 VAR_4 = FUNC_1(VAR_0, '/');
 VAR_5 = FUNC_1(VAR_1, '/');
 if (VAR_4 == ((void*)0))
  return;





 if (VAR_5 == ((void*)0)) {
  *VAR_2 = FUNC_3(VAR_0, VAR_4 - VAR_0);
  *VAR_3 = FUNC_2("");
  return;
 }


 while (*--VAR_5 == *--VAR_4 &&
        VAR_4 != VAR_0 &&
        VAR_5 != VAR_1)
  ;





 if (VAR_4 == VAR_0 && VAR_5 == VAR_1 &&
     *VAR_4 == *VAR_5)
  return;
 if (VAR_5 == VAR_1 &&
     VAR_4 != VAR_0 && VAR_4[-1] == '/') {
  *VAR_2 = FUNC_3(VAR_0, --VAR_4 - VAR_0);
  *VAR_3 = FUNC_2("");
  return;
 }
 VAR_4 = FUNC_0(++VAR_4, '/');
 VAR_5 = FUNC_0(++VAR_5, '/');


 *VAR_2 = FUNC_3(VAR_0, VAR_4 - VAR_0);
 *VAR_3 = FUNC_3(VAR_1, VAR_5 - VAR_1);
}
