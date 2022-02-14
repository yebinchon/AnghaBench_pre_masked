
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*,char const*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char const*,int ) ;

int FUNC_4(struct gpio_desc *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_2);
 if (VAR_3) {
  VAR_3 = FUNC_3(VAR_3, VAR_1);
  if (!VAR_3)
   return -VAR_0;
 }

 FUNC_2(VAR_2->label);
 FUNC_1(VAR_2, VAR_3);

 return 0;
}
