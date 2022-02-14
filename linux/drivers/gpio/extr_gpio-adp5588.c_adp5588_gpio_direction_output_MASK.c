
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct adp5588_gpio {unsigned int* dir; unsigned int* dat_out; int lock; int client; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,scalar_t__,unsigned int) ;
 struct adp5588_gpio* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_2,
      unsigned VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned VAR_6, VAR_7;
 struct adp5588_gpio *VAR_8 = FUNC_3(VAR_2);

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = FUNC_1(VAR_3);

 FUNC_4(&VAR_8->lock);
 VAR_8->dir[VAR_6] |= VAR_7;

 if (VAR_4)
  VAR_8->dat_out[VAR_6] |= VAR_7;
 else
  VAR_8->dat_out[VAR_6] &= ~VAR_7;

 VAR_5 = FUNC_2(VAR_8->client, VAR_0 + VAR_6,
     VAR_8->dat_out[VAR_6]);
 VAR_5 |= FUNC_2(VAR_8->client, VAR_1 + VAR_6,
     VAR_8->dir[VAR_6]);
 FUNC_5(&VAR_8->lock);

 return VAR_5;
}
