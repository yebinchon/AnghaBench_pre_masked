
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {TYPE_1__* gdev; } ;
struct gpio_chip {int (* set ) (struct gpio_chip*,int ,int) ;} ;
struct TYPE_2__ {struct gpio_chip* chip; } ;


 int FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_chip*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct gpio_desc *VAR_0, bool VAR_1)
{
 struct gpio_chip *VAR_2;

 VAR_2 = VAR_0->gdev->chip;
 FUNC_3(FUNC_0(VAR_0), 0, VAR_1);
 VAR_2->set(VAR_2, FUNC_1(VAR_0), VAR_1);
}
