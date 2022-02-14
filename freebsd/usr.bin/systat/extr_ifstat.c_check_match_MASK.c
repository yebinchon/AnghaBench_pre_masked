
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*,int ) ;
 char* VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2)
{
 char *VAR_3 = VAR_1, *VAR_4, VAR_5;
 int VAR_6 = 0, VAR_7;

 if (VAR_1 == ((void*)0))
  return (0);


 while (*VAR_3 == ' ')
  VAR_3 ++;

 VAR_4 = VAR_3;
 while ((VAR_7 = FUNC_1(VAR_4, " ;,")) != 0) {
  VAR_3 = VAR_4 + VAR_7;
  VAR_5 = *VAR_3;
  if (VAR_3 - VAR_4 > 0) {
   *VAR_3 = '\0';
   if (FUNC_0(VAR_4, VAR_2, VAR_0) == 0) {
    *VAR_3 = VAR_5;
    return (1);
   }
   *VAR_3 = VAR_5;
   VAR_4 = VAR_3 + FUNC_2(VAR_3, " ;,");
  }
  else {
   VAR_4 = VAR_3 + FUNC_2(VAR_3, " ;,");
  }
 }

 return (VAR_6);
}
