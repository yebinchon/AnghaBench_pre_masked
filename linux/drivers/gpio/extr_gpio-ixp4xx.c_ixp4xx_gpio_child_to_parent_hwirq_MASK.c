
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct gpio_chip *VAR_2,
          unsigned int VAR_3,
          unsigned int VAR_4,
          unsigned int *VAR_5,
          unsigned int *VAR_6)
{

 *VAR_6 = VAR_1;


 if (VAR_3 == 0) {
  *VAR_5 = 6;
  return 0;
 }
 if (VAR_3 == 1) {
  *VAR_5 = 7;
  return 0;
 }
 if (VAR_3 >= 2 && VAR_3 <= 12) {
  *VAR_5 = VAR_3 + 17;
  return 0;
 }
 return -VAR_0;
}
