
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct tqmx86_gpio_data {int spinlock; } ;
struct irq_data {unsigned int hwirq; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct tqmx86_gpio_data* FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (struct tqmx86_gpio_data*,int ) ;
 int FUNC_5 (struct tqmx86_gpio_data*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_4)
{
 unsigned int VAR_5 = (VAR_4->hwirq - VAR_3);
 struct tqmx86_gpio_data *VAR_6 = FUNC_0(
  FUNC_1(VAR_4));
 unsigned long VAR_7;
 u8 VAR_8, VAR_9;

 VAR_9 = VAR_2 << (VAR_5 * VAR_1);

 FUNC_2(&VAR_6->spinlock, VAR_7);
 VAR_8 = FUNC_4(VAR_6, VAR_0);
 VAR_8 &= ~VAR_9;
 FUNC_5(VAR_6, VAR_8, VAR_0);
 FUNC_3(&VAR_6->spinlock, VAR_7);
}
