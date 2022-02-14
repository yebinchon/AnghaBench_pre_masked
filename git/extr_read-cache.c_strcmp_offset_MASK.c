
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;

int FUNC_1(const char *VAR_0, const char *VAR_1, size_t *VAR_2)
{
 size_t VAR_3;

 if (!VAR_2)
  return FUNC_0(VAR_0, VAR_1);

 for (VAR_3 = 0; VAR_0[VAR_3] == VAR_1[VAR_3]; VAR_3++)
  if (VAR_0[VAR_3] == '\0')
   break;

 *VAR_2 = VAR_3;
 return (unsigned char)VAR_0[VAR_3] - (unsigned char)VAR_1[VAR_3];
}
