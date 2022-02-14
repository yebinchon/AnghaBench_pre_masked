
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;

int FUNC_3(int VAR_0)
{




 switch (VAR_0) {
 case 128:
  return FUNC_0();
 case 129:
  return FUNC_1();
 default:
  FUNC_2("unknown slot type: %d\n", VAR_0);
  return 0;
 }
}
