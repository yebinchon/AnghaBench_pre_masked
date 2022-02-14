
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int (* init_valid_mask ) (struct gpio_chip*,int ,int ) ;int ngpio; int valid_mask; } ;


 int FUNC_0 (struct gpio_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_0)
{
 if (VAR_0->init_valid_mask)
  return VAR_0->init_valid_mask(VAR_0,
        VAR_0->valid_mask,
        VAR_0->ngpio);

 return 0;
}
