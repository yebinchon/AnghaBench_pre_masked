
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static ssize_t FUNC_3(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0), VAR_3 = FUNC_2(VAR_1);

 while (VAR_3) {
  if (!VAR_2)
   return -1;

  if (FUNC_1(VAR_0[VAR_2 - 1])) {
   if (!FUNC_1(VAR_1[VAR_3 - 1]))
    return -1;
   VAR_2 = FUNC_0(VAR_0, VAR_2);
   VAR_3 = FUNC_0(VAR_1, VAR_3);
  }
  else if (VAR_0[--VAR_2] != VAR_1[--VAR_3])
   return -1;
 }

 if (VAR_2 && !FUNC_1(VAR_0[VAR_2 - 1]))
  return -1;
 return FUNC_0(VAR_0, VAR_2);
}
