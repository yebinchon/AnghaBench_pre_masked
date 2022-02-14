
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, const char **VAR_1)
{
 int VAR_2;
 size_t VAR_3;
 int VAR_4 = -1;
 int VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_0);


 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
  if (!FUNC_1(VAR_1[VAR_2], VAR_0, VAR_3)) {
   if (FUNC_0(VAR_1[VAR_2]) == VAR_3)

    return VAR_2;
   else if (VAR_4 == -1)

    VAR_4 = VAR_2;
   else

    VAR_5 = 1;
  }
 }
 if (VAR_5)
  return -2;
 else
  return VAR_4;
}
