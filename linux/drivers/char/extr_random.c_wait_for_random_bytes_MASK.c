
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(void)
{
 if (FUNC_1(FUNC_0()))
  return 0;

 do {
  int VAR_2;
  VAR_2 = FUNC_3(VAR_1, FUNC_0(), VAR_0);
  if (VAR_2)
   return VAR_2 > 0 ? 0 : VAR_2;

  FUNC_2();
 } while (!FUNC_0());

 return 0;
}
