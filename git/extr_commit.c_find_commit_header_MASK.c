
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;

const char *FUNC_3(const char *VAR_0, const char *VAR_1, size_t *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1);
 const char *VAR_4 = VAR_0;

 while (VAR_4) {
  const char *VAR_5 = FUNC_0(VAR_4, '\n');

  if (VAR_4 == VAR_5)
   return ((void*)0);

  if (VAR_5 - VAR_4 > VAR_3 &&
      !FUNC_2(VAR_4, VAR_1, VAR_3) &&
      VAR_4[VAR_3] == ' ') {
   *VAR_2 = VAR_5 - VAR_4 - VAR_3 - 1;
   return VAR_4 + VAR_3 + 1;
  }
  VAR_4 = *VAR_5 ? VAR_5 + 1 : ((void*)0);
 }
 return ((void*)0);
}
