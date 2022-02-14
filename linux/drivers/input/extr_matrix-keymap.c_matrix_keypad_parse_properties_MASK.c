
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,unsigned int*) ;

int FUNC_2(struct device *VAR_1,
       unsigned int *VAR_2, unsigned int *VAR_3)
{
 *VAR_2 = *VAR_3 = 0;

 FUNC_1(VAR_1, "keypad,num-rows", VAR_2);
 FUNC_1(VAR_1, "keypad,num-columns", VAR_3);

 if (!*VAR_2 || !*VAR_3) {
  FUNC_0(VAR_1, "number of keypad rows/columns not specified\n");
  return -VAR_0;
 }

 return 0;
}
