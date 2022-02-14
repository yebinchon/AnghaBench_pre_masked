
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, uint8_t *VAR_2,
           uint8_t *VAR_3)
{
 switch (VAR_1) {
 case 1:
  *VAR_2 = 1;
  *VAR_3 = 2;
  break;
 case 2:
  *VAR_2 = 2;
  *VAR_3 = 1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
