
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_si544 {int speed_grade; } ;


 unsigned long VAR_0 ;




__attribute__((used)) static bool FUNC_0(const struct clk_si544 *VAR_1,
 unsigned long VAR_2)
{
 unsigned long VAR_3 = 0;

 if (VAR_2 < VAR_0)
  return 0;

 switch (VAR_1->speed_grade) {
 case 130:
  VAR_3 = 1500000000;
  break;
 case 129:
  VAR_3 = 800000000;
  break;
 case 128:
  VAR_3 = 350000000;
  break;
 }

 return VAR_2 <= VAR_3;
}
