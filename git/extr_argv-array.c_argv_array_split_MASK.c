
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int dummy; } ;


 int FUNC_0 (struct argv_array*,int ) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*,int) ;

void FUNC_3(struct argv_array *VAR_0, const char *VAR_1)
{
 while (FUNC_1(*VAR_1))
  VAR_1++;
 for (;;) {
  const char *VAR_2 = VAR_1;

  if (!*VAR_2)
   break;

  while (*VAR_2 && !FUNC_1(*VAR_2))
   VAR_2++;
  FUNC_0(VAR_0, FUNC_2(VAR_1, VAR_2 - VAR_1));

  while (FUNC_1(*VAR_2))
   VAR_2++;
  VAR_1 = VAR_2;
 }
}
