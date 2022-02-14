
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{
 static int VAR_3 = -1;
 int *VAR_4 = VAR_2 == 1 ? &VAR_0 : &VAR_3;
 if (*VAR_4 < 0)
  *VAR_4 = FUNC_1(VAR_2);
 if (*VAR_4 || (VAR_2 == 1 && FUNC_2() && VAR_1)) {
  if (!FUNC_0())
   return 1;
 }
 return 0;
}
