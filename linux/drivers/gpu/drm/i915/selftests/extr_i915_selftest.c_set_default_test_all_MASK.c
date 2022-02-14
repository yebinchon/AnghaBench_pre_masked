
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selftest {int enabled; } ;



__attribute__((used)) static void FUNC_0(struct selftest *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  if (VAR_0[VAR_2].enabled)
   return;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_0[VAR_2].enabled = 1;
}
