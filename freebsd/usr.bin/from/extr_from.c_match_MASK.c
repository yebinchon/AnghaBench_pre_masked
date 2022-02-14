
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char FUNC_1 (char const) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 char VAR_2, VAR_3, VAR_4;
 const char *VAR_5, *VAR_6;

 for (VAR_4 = *VAR_1++;;) {
  if (FUNC_0(VAR_2 = *VAR_0))
   return(0);
  ++VAR_0;
  VAR_2 = FUNC_1(VAR_2);
  if (VAR_2 != VAR_4)
   continue;
  for (VAR_5 = VAR_1, VAR_6 = VAR_0;;) {
   if (!(VAR_3 = *VAR_5++))
    return(1);
   VAR_2 = FUNC_1(*VAR_6);
   VAR_6++;
   if (VAR_2 != VAR_3)
    break;
  }
 }

}
