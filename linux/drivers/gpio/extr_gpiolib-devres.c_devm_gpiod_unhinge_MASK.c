
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,int ,int ,struct gpio_desc**) ;

void FUNC_3(struct device *VAR_3, struct gpio_desc *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_4))
  return;
 VAR_5 = FUNC_2(VAR_3, VAR_2,
        VAR_1, &VAR_4);





 if (VAR_5 == -VAR_0)
  return;

 FUNC_1(VAR_5);
}
