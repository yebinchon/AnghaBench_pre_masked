
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct adp5588_gpio {unsigned int* dat_out; int lock; int client; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,scalar_t__,unsigned int) ;
 struct adp5588_gpio* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct gpio_chip *VAR_1,
       unsigned VAR_2, int VAR_3)
{
 unsigned VAR_4, VAR_5;
 struct adp5588_gpio *VAR_6 = FUNC_3(VAR_1);

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_2);

 FUNC_4(&VAR_6->lock);
 if (VAR_3)
  VAR_6->dat_out[VAR_4] |= VAR_5;
 else
  VAR_6->dat_out[VAR_4] &= ~VAR_5;

 FUNC_2(VAR_6->client, VAR_0 + VAR_4,
      VAR_6->dat_out[VAR_4]);
 FUNC_5(&VAR_6->lock);
}
