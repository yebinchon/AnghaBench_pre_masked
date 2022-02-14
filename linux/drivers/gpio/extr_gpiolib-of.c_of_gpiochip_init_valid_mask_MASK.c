
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gpio_chip {scalar_t__ ngpio; int valid_mask; struct device_node* of_node; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*,char*,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0)
{
 int VAR_1, VAR_2;
 u32 VAR_3, VAR_4;
 struct device_node *VAR_5 = VAR_0->of_node;

 VAR_1 = FUNC_1(VAR_5, "gpio-reserved-ranges");
 if (VAR_1 < 0 || VAR_1 % 2 != 0)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 2) {
  FUNC_2(VAR_5, "gpio-reserved-ranges",
        VAR_2, &VAR_3);
  FUNC_2(VAR_5, "gpio-reserved-ranges",
        VAR_2 + 1, &VAR_4);
  if (VAR_3 >= VAR_0->ngpio || VAR_3 + VAR_4 >= VAR_0->ngpio)
   continue;

  FUNC_0(VAR_0->valid_mask, VAR_3, VAR_4);
 }
}
