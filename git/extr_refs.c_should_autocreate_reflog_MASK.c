
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_1)
{
 switch (VAR_0) {
 case 129:
  return 1;
 case 128:
  return FUNC_0(VAR_1, "refs/heads/") ||
   FUNC_0(VAR_1, "refs/remotes/") ||
   FUNC_0(VAR_1, "refs/notes/") ||
   !FUNC_1(VAR_1, "HEAD");
 default:
  return 0;
 }
}
