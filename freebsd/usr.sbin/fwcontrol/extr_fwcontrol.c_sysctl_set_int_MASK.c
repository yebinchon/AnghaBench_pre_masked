
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,int *,int *,int*,int) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0, int VAR_1)
{
 if (FUNC_1(VAR_0, ((void*)0), ((void*)0), &VAR_1, sizeof(int)) < 0)
  FUNC_0(1, "sysctl %s failed.", VAR_0);
}
