
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_1 = FUNC_4();
 int VAR_2;


 if (FUNC_1(VAR_1))
  return 0;

 VAR_2 = 0;
 while (++VAR_2 < VAR_0)
  if (FUNC_0(VAR_1 + VAR_2))
   return 0;


 for (VAR_2 = 1; VAR_2 < VAR_0; ++VAR_2) {
  if (FUNC_2(VAR_1 + VAR_2)) {

   do {
    FUNC_3(VAR_1 + VAR_2);
   } while (--VAR_2 > 0);
   return 0;
  }
 }
 return 1;
}
