
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, int VAR_3)
{

 if (VAR_0 != VAR_2) {

  return 0;
 }
 if (VAR_0 == 1) {
  switch (VAR_1) {
  case 0:
  case 1:
  case 2:

   return 0;
  case 3:

   return VAR_3 == 3;
  default:

   return VAR_3 <= VAR_1;
  }
 }

 return 0;
}
