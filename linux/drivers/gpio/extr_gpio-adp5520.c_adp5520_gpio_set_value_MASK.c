
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct adp5520_gpio {int * lut; int master; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct adp5520_gpio* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_1,
  unsigned VAR_2, int VAR_3)
{
 struct adp5520_gpio *VAR_4;
 VAR_4 = FUNC_2(VAR_1);

 if (VAR_3)
  FUNC_1(VAR_4->master, VAR_0, VAR_4->lut[VAR_2]);
 else
  FUNC_0(VAR_4->master, VAR_0, VAR_4->lut[VAR_2]);
}
