
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_1 >> (VAR_0 - 3);
 VAR_3 = VAR_2 >> 3;
 VAR_4 = VAR_2 & 0x7;

 switch (VAR_3) {
 case 0:
  return 0;
 case 1:
  return VAR_4;
 case 2:
  return 8 + (VAR_4 >> 1);
 case 3:
  return 12;
 case 4:
  return 13;
 default:
  return 14;
 }
}
