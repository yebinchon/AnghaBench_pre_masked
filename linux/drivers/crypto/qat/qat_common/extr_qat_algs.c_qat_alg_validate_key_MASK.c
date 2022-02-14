
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(int VAR_5, int *VAR_6, int VAR_7)
{
 if (VAR_7 != VAR_4) {
  switch (VAR_5) {
  case 130:
   *VAR_6 = VAR_1;
   break;
  case 129:
   *VAR_6 = VAR_2;
   break;
  case 128:
   *VAR_6 = VAR_3;
   break;
  default:
   return -VAR_0;
  }
 } else {
  switch (VAR_5) {
  case 130 << 1:
   *VAR_6 = VAR_1;
   break;
  case 128 << 1:
   *VAR_6 = VAR_3;
   break;
  default:
   return -VAR_0;
  }
 }
 return 0;
}
