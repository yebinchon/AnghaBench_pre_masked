
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1)
{
 if (!VAR_0)
  return FUNC_0("%s: does not exist and --remove not passed", VAR_1);
 if (FUNC_1(VAR_1))
  return FUNC_0("%s: cannot remove from the index", VAR_1);
 return 0;
}
