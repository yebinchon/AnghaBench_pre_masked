
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 for (; FUNC_1(*VAR_0); ++VAR_0)
  continue;
 if (*VAR_0 == '*') {
  for (++VAR_0; FUNC_1(*VAR_0); ++VAR_0)
   continue;
  if (!FUNC_0(*VAR_0))
   --VAR_0;
  else
   while (FUNC_0(*++VAR_0))
    continue;
 }
}
