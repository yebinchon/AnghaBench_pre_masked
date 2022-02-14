
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_1)
{
 if (FUNC_0(VAR_1, "refs/")) {
  FUNC_1(VAR_0, "not a valid reference '%s'", VAR_1);
  return -1;
 }

 return 0;
}
