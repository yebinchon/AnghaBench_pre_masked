
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;
struct bt8xxgpio {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 struct bt8xxgpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct bt8xxgpio *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6, VAR_7;

 FUNC_3(&VAR_4->lock, VAR_5);

 VAR_7 = FUNC_0(VAR_0);
 VAR_7 &= ~(1 << VAR_3);
 FUNC_1(VAR_7, VAR_0);

 VAR_6 = FUNC_0(VAR_1);
 VAR_6 &= ~(1 << VAR_3);
 FUNC_1(VAR_6, VAR_1);

 FUNC_4(&VAR_4->lock, VAR_5);

 return 0;
}
