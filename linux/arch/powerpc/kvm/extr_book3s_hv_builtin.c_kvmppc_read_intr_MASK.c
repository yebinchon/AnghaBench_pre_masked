
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (int*) ;
 scalar_t__ FUNC_1 () ;

long FUNC_2(void)
{
 long VAR_0 = 0;
 long VAR_1;
 bool VAR_2;

 if (FUNC_1())
  return 1;

 do {
  VAR_2 = 0;
  VAR_1 = FUNC_0(&VAR_2);
  if (VAR_1 && (VAR_0 == 0 || VAR_1 > VAR_0))
   VAR_0 = VAR_1;
 } while (VAR_2);
 return VAR_0;
}
