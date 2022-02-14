
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct tqmx86_gpio_data {unsigned int* irq_type; int spinlock; } ;
struct irq_data {unsigned int hwirq; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct tqmx86_gpio_data* FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (struct tqmx86_gpio_data*,int ) ;
 int FUNC_5 (struct tqmx86_gpio_data*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_8, unsigned int VAR_9)
{
 struct tqmx86_gpio_data *VAR_10 = FUNC_0(
  FUNC_1(VAR_8));
 unsigned int VAR_11 = (VAR_8->hwirq - VAR_7);
 unsigned int VAR_12 = VAR_9 & VAR_1;
 unsigned long VAR_13;
 u8 VAR_14, VAR_15;

 switch (VAR_12) {
 case 128:
  VAR_14 = VAR_6;
  break;
 case 129:
  VAR_14 = VAR_4;
  break;
 case 130:
  VAR_14 = VAR_4 | VAR_6;
  break;
 default:
  return -VAR_0;
 }

 VAR_10->irq_type[VAR_11] = VAR_14;

 FUNC_2(&VAR_10->spinlock, VAR_13);
 VAR_15 = FUNC_4(VAR_10, VAR_2);
 VAR_15 &= ~((VAR_5) << (VAR_11 * VAR_3));
 VAR_15 |= VAR_14 << (VAR_11 * VAR_3);
 FUNC_5(VAR_10, VAR_15, VAR_2);
 FUNC_3(&VAR_10->spinlock, VAR_13);

 return 0;
}
