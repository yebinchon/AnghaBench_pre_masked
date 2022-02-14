
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 (char*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(const char *VAR_2)
{
 if (FUNC_0(VAR_2))
  return 1;

 FUNC_2("git-", &VAR_0, &VAR_1);
 return FUNC_1(&VAR_0, VAR_2) ||
  FUNC_1(&VAR_1, VAR_2);
}
