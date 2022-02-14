
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 (char*,char const*) ;
 size_t FUNC_5 (char const*) ;
 char* FUNC_6 (size_t) ;

int FUNC_7(const char *VAR_0)
{
 const char *VAR_1;

 if (FUNC_3(VAR_0, "refs/", &VAR_1)) {
  char *VAR_2;
  int VAR_3;
  size_t VAR_4 = FUNC_5(VAR_1);


  if (!VAR_4 || *VAR_1 == '/' || VAR_1[VAR_4 - 1] == '/')
   return 0;






  VAR_2 = FUNC_6(VAR_4);
  VAR_3 = !FUNC_2(VAR_2, VAR_1) && !FUNC_4(VAR_2, VAR_1);
  FUNC_0(VAR_2);
  return VAR_3;
 }

 do {
  if (!FUNC_1(*VAR_0) && *VAR_0 != '_')
   return 0;
  VAR_0++;
 } while (*VAR_0);
 return 1;
}
