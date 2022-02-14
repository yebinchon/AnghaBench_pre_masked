
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int) ;
 long FUNC_2 (long,long) ;
 scalar_t__ FUNC_3 (char const**) ;
 char** VAR_0 ;
 int VAR_1 ;

int FUNC_4(u64 VAR_2, const char **VAR_3)
{
 u64 VAR_4 = VAR_2 & ~VAR_1;

 if (FUNC_3(VAR_3)) {
  long VAR_5, VAR_6;
  u64 VAR_7;







  if (VAR_4)
   VAR_7 = VAR_4;
  else
   VAR_7 = VAR_2;

  VAR_5 = FUNC_1(VAR_7)-1;
  VAR_6 = FUNC_0(VAR_0)-1;
  VAR_5 = FUNC_2(VAR_5, VAR_6);

  *VAR_3 = VAR_0[VAR_5];
 }

 if (VAR_4)
  return 0;

 return 1;
}
