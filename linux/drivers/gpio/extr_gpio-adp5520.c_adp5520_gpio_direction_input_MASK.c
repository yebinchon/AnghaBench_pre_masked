
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct adp5520_gpio {int * lut; int master; int output; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (unsigned int,int *) ;
 struct adp5520_gpio* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct adp5520_gpio *VAR_3;
 VAR_3 = FUNC_2(VAR_1);

 FUNC_1(VAR_2, &VAR_3->output);

 return FUNC_0(VAR_3->master, VAR_0,
    VAR_3->lut[VAR_2]);
}
