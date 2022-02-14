
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; } ;
struct gpio_bank {int lock; int mod_usage; } ;


 int FUNC_0 (unsigned int) ;
 struct gpio_bank* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct gpio_bank*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct gpio_bank *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;

 FUNC_3(VAR_0->parent);

 FUNC_4(&VAR_2->lock, VAR_3);
 FUNC_2(VAR_2, VAR_1);
 VAR_2->mod_usage |= FUNC_0(VAR_1);
 FUNC_5(&VAR_2->lock, VAR_3);

 return 0;
}
