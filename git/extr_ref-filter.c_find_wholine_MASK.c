
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, int VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 while (*VAR_2) {
  if (!FUNC_1(VAR_2, VAR_0, VAR_1) &&
      VAR_2[VAR_1] == ' ')
   return VAR_2 + VAR_1 + 1;
  VAR_3 = FUNC_0(VAR_2, '\n');
  if (!VAR_3)
   return "";
  VAR_3++;
  if (*VAR_3 == '\n')
   return "";
  VAR_2 = VAR_3;
 }
 return "";
}
