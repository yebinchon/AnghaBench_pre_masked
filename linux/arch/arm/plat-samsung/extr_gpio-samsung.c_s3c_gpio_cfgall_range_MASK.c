
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int samsung_gpio_pull_t ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;

int FUNC_2(unsigned int VAR_0, unsigned int VAR_1,
     unsigned int VAR_2, samsung_gpio_pull_t VAR_3)
{
 int VAR_4;

 for (; VAR_1 > 0; VAR_1--, VAR_0++) {
  FUNC_1(VAR_0, VAR_3);
  VAR_4 = FUNC_0(VAR_0, VAR_2);
  if (VAR_4 != 0)
   return VAR_4;
 }

 return 0;
}
