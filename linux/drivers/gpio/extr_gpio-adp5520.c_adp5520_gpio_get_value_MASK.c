
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct gpio_chip {int dummy; } ;
struct adp5520_gpio {int* lut; int master; int output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 struct adp5520_gpio* FUNC_1 (struct gpio_chip*) ;
 scalar_t__ FUNC_2 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct adp5520_gpio *VAR_4;
 uint8_t VAR_5;

 VAR_4 = FUNC_1(VAR_2);






 if (FUNC_2(VAR_3, &VAR_4->output))
  FUNC_0(VAR_4->master, VAR_1, &VAR_5);
 else
  FUNC_0(VAR_4->master, VAR_0, &VAR_5);

 return !!(VAR_5 & VAR_4->lut[VAR_3]);
}
