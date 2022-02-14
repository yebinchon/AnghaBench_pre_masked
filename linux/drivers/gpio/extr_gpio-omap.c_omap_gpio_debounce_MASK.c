
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; } ;
struct gpio_bank {int lock; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int,int) ;
 struct gpio_bank* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct gpio_bank*,unsigned int,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1,
         unsigned VAR_2)
{
 struct gpio_bank *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_0);

 FUNC_3(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_2);
 FUNC_4(&VAR_3->lock, VAR_4);

 if (VAR_5)
  FUNC_0(VAR_0->parent,
    "Could not set line %u debounce to %u microseconds (%d)",
    VAR_1, VAR_2, VAR_5);

 return VAR_5;
}
