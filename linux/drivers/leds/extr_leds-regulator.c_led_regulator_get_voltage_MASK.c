
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int FUNC_0 (struct regulator*,int) ;

__attribute__((used)) static int FUNC_1(struct regulator *VAR_1,
  enum led_brightness VAR_2)
{
 if (VAR_2 == 0)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2 - 1);
}
