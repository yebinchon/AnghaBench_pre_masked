
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,size_t*,char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0)
{
 if (VAR_0 && !FUNC_3(VAR_0, "sh")) {
  static int VAR_1 = -1;
  char *VAR_2;

  if (VAR_1 >= 0)
   return VAR_1;

  VAR_2 = FUNC_2(VAR_0, 0);
  if (!VAR_2)
   VAR_1 = 0;
  else {
   size_t VAR_3 = FUNC_4(VAR_2);

   VAR_1 = FUNC_1(VAR_2, &VAR_3, "sh.exe") &&
    FUNC_1(VAR_2, &VAR_3, "bin") &&
    FUNC_1(VAR_2, &VAR_3, "usr");
   FUNC_0(VAR_2);
  }
  return VAR_1;
 }
 return 0;
}
