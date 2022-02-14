
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int candidate ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char const*,char*) ;
 int * FUNC_2 (char*,char) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_2, char *VAR_3)
{
 char VAR_4[VAR_0];
 const char *VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_3, '/') != ((void*)0))
  return (FUNC_0(VAR_3) ? 0 : -1);
 VAR_6 = 0;
 while ((VAR_5 = FUNC_3(&VAR_2, ":")) != ((void*)0)) {
  if (*VAR_5 == '\0')
   VAR_5 = ".";
  if (FUNC_1(VAR_4, sizeof(VAR_4), "%s/%s", VAR_5,
      VAR_3) >= (int)sizeof(VAR_4))
   continue;
  if (FUNC_0(VAR_4)) {
   VAR_6 = 1;
   if (!VAR_1)
    break;
  }
 }
 return (VAR_6 ? 0 : -1);
}
