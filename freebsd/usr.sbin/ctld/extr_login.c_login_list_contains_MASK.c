
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;

 VAR_2 = VAR_3 = FUNC_0(VAR_0);

 while ((VAR_4 = FUNC_3(&VAR_3, ",")) != ((void*)0)) {
  if (FUNC_2(VAR_4, VAR_1) == 0) {
   FUNC_1(VAR_2);
   return (1);
  }
 }
 FUNC_1(VAR_2);
 return (0);
}
