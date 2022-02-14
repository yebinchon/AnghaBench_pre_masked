
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char**) ;

__attribute__((used)) static inline int FUNC_4(const char *VAR_4)
{
 const char *VAR_5;

 if (VAR_3 == VAR_1)
  return 0;


 FUNC_3((char **)&VAR_4);
 if (!*VAR_4)
  return 0;

 for (VAR_5 = VAR_4; *VAR_4; VAR_4++)
  if (FUNC_1(*VAR_4)) {
   do {
    VAR_4++;
   } while (FUNC_1(*VAR_4));

   if (*VAR_4)
    VAR_5 = VAR_4;
   else
    break;
  }

 if (VAR_3 == VAR_2)
  return *VAR_5 == '.';

 FUNC_0(VAR_3 == VAR_0);
 return !FUNC_2(".git", VAR_5, 4) &&
  (!VAR_5[4] || FUNC_1(VAR_5[4]));
}
