
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const**,int) ;

__attribute__((used)) static void
FUNC_1 (const char *VAR_0, const char *VAR_1[], int *VAR_2, int VAR_3)
{
  if (FUNC_0 (VAR_0, VAR_1, *VAR_2) < 0 && *VAR_2 < VAR_3)
    VAR_1[(*VAR_2)++] = VAR_0;
}
