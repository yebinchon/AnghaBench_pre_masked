
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0 (int VAR_1, char *VAR_2)
{
 unsigned long* VAR_3 = (unsigned long*) (VAR_0 + 0xE0) + VAR_1;
 int VAR_4;
 for (VAR_4 = VAR_1; VAR_4 < 8; VAR_4++)
  if ((*VAR_3++ = *VAR_2++) == 0)
      break;
}
