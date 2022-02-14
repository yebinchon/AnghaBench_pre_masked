
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

int FUNC_3(void)
{
 int VAR_0 = 30;
 int VAR_1, VAR_2;

 VAR_1 = FUNC_1();

 while (VAR_0) {
  if (FUNC_2())
   return FUNC_0();

  VAR_2 = FUNC_1();
  if (VAR_1 != VAR_2) {
   VAR_0--;
   VAR_1 = VAR_2;
  }
 }

 return 0;
}
