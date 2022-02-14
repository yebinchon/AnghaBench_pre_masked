
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(int VAR_0)
{
 char VAR_1[512];
 char *VAR_2;

 if (VAR_0 <= 0)
  return;
 for (VAR_2 = VAR_1; VAR_2 < &VAR_1[512]; *VAR_2++ = 0xFF)
  ;
 FUNC_0(VAR_0 - 1);
}
