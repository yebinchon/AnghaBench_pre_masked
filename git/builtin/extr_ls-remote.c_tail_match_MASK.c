
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*,int ) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(const char **VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 char *VAR_3;

 if (!VAR_0)
  return 1;

 VAR_3 = FUNC_2("/%s", VAR_1);
 while ((VAR_2 = *(VAR_0++)) != ((void*)0)) {
  if (!FUNC_1(VAR_2, VAR_3, 0)) {
   FUNC_0(VAR_3);
   return 1;
  }
 }
 FUNC_0(VAR_3);
 return 0;
}
