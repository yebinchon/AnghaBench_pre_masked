
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int,char*) ;

int FUNC_6(int VAR_1)
{
 unsigned VAR_2;
 int VAR_3 = 0;

 switch (VAR_1) {
 case 0:
  VAR_2 = 128;
  break;
 case 2:
  VAR_2 = 34;
  break;
 default:
  FUNC_0("Invalid output\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_5(VAR_2, "gfx");
 if (VAR_3) {
  FUNC_0("gpio_rqueset failed\n");
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_2, 1);
 if (VAR_3) {
  FUNC_0("gpio_direction_output failed\n");
  goto gpio_error;
 }

 FUNC_3(128);

gpio_error:
 if (FUNC_4(VAR_2))
  FUNC_2(VAR_2);

 return VAR_3;
}
