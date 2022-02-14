
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;
struct bt8xxgpio {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct bt8xxgpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct bt8xxgpio *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_0(VAR_0);
 FUNC_3(&VAR_3->lock, VAR_4);

 return !!(VAR_5 & (1 << VAR_2));
}
