
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_device {struct gpio_device* descs; int label; int id; int list; } ;
struct device {int dummy; } ;


 struct gpio_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct gpio_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct gpio_device *VAR_2 = FUNC_0(VAR_1);

 FUNC_4(&VAR_2->list);
 FUNC_1(&VAR_0, VAR_2->id);
 FUNC_3(VAR_2->label);
 FUNC_2(VAR_2->descs);
 FUNC_2(VAR_2);
}
