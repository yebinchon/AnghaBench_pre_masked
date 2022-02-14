
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0, const char *VAR_1, int *VAR_2)
{
 int VAR_3;

 if (!VAR_0)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1);
 while (*VAR_0) {
  const char *VAR_4 = FUNC_3(VAR_0, VAR_1);
  if (!VAR_4)
   return ((void*)0);
  if (VAR_0 == VAR_4 || FUNC_0(VAR_4[-1])) {
   const char *VAR_5 = VAR_4 + VAR_3;

   if (!*VAR_5 || FUNC_0(*VAR_5)) {
    if (VAR_2)
     *VAR_2 = 0;
    return VAR_5;
   }

   else if (*VAR_5 == '=') {
    VAR_5++;
    if (VAR_2)
     *VAR_2 = FUNC_1(VAR_5, " \t\n");
    return VAR_5;
   }




  }
  VAR_0 = VAR_4 + 1;
 }
 return ((void*)0);
}
