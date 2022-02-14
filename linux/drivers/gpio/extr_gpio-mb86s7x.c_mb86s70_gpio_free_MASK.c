
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mb86s70_gpio_chip {int lock; scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 struct mb86s70_gpio_chip* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct mb86s70_gpio_chip *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_4(&VAR_2->lock, VAR_3);

 VAR_4 = FUNC_3(VAR_2->base + FUNC_1(VAR_1));
 VAR_4 |= FUNC_0(VAR_1);
 FUNC_6(VAR_4, VAR_2->base + FUNC_1(VAR_1));

 FUNC_5(&VAR_2->lock, VAR_3);
}
