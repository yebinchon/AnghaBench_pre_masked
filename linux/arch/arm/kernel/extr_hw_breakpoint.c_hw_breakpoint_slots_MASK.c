
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;

int FUNC_4(int VAR_0)
{
 if (!FUNC_0())
  return 0;





 switch (VAR_0) {
 case 128:
  return FUNC_1();
 case 129:
  return FUNC_2();
 default:
  FUNC_3("unknown slot type: %d\n", VAR_0);
  return 0;
 }
}
