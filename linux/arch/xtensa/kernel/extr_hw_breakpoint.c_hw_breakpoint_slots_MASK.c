
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

int FUNC_1(int VAR_2)
{
 switch (VAR_2) {
 case 128:
  return VAR_1;
 case 129:
  return VAR_0;
 default:
  FUNC_0("unknown slot type: %d\n", VAR_2);
  return 0;
 }
}
