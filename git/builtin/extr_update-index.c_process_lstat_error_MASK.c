
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, int VAR_1)
{
 if (FUNC_1(VAR_1))
  return FUNC_2(VAR_0);
 return FUNC_0("lstat(\"%s\"): %s", VAR_0, FUNC_3(VAR_1));
}
