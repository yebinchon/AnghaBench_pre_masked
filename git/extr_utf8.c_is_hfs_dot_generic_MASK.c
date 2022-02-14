
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char ucs_char_t ;


 int FUNC_0 (char) ;
 char FUNC_1 (char const**) ;
 char const FUNC_2 (char) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0,
         const char *VAR_1, size_t VAR_2)
{
 ucs_char_t VAR_3;

 VAR_3 = FUNC_1(&VAR_0);
 if (VAR_3 != '.')
  return 0;






 for (; VAR_2 > 0; VAR_1++, VAR_2--) {
  VAR_3 = FUNC_1(&VAR_0);





  if (VAR_3 > 127)
   return 0;
  if (FUNC_2(VAR_3) != *VAR_1)
   return 0;
 }

 VAR_3 = FUNC_1(&VAR_0);
 if (VAR_3 && !FUNC_0(VAR_3))
  return 0;

 return 1;
}
