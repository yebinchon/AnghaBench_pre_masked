
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, unsigned VAR_3)
{
 if (!VAR_3)
  return 1;

 if ((VAR_3 & VAR_0) &&
     FUNC_0(VAR_2, "refs/heads/"))
  return 1;
 if ((VAR_3 & VAR_1) &&
     FUNC_0(VAR_2, "refs/remotes/"))
  return 1;

 return 0;
}
