
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77650_gpio_chip {int map; } ;
struct gpio_chip {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 struct max77650_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_4,
        unsigned int VAR_5, int VAR_6)
{
 struct max77650_gpio_chip *VAR_7 = FUNC_1(VAR_4);
 int VAR_8, VAR_9;

 VAR_9 = VAR_6 ? VAR_1 : VAR_2;

 VAR_8 = FUNC_2(VAR_7->map, VAR_3,
    VAR_0, VAR_9);
 if (VAR_8)
  FUNC_0(VAR_4->parent, "cannot set GPIO value: %d\n", VAR_8);
}
