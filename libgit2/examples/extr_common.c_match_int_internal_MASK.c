
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(
 int *VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3)
{
 char *VAR_4 = ((void*)0);
 int VAR_5 = (int)FUNC_1(VAR_1, &VAR_4, 10);

 if (!VAR_4 || *VAR_4 != '\0')
  FUNC_0("expected number", VAR_3);
 else if (VAR_5 < 0 && !VAR_2)
  FUNC_0("negative values are not allowed", VAR_3);

 if (VAR_0)
  *VAR_0 = VAR_5;

 return 1;
}
