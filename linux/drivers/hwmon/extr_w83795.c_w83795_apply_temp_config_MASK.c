
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83795_data {int has_in; int temp_mode; int has_temp; } ;



__attribute__((used)) static void FUNC_0(struct w83795_data *VAR_0, u8 VAR_1,
         int VAR_2, int VAR_3)
{

 switch (VAR_1) {
 case 0x2:
  VAR_0->has_in |= 1 << VAR_3;
  break;
 case 0x1:
  if (VAR_2 >= 4)
   break;
  VAR_0->temp_mode |= 1 << VAR_2;

 case 0x3:
  VAR_0->has_temp |= 1 << VAR_2;
  break;
 }
}
