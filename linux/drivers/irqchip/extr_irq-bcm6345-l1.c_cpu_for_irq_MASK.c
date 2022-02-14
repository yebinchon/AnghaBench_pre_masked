
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct bcm6345_l1_chip {int cpumask; } ;


 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct irq_data*) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct bcm6345_l1_chip *VAR_0,
     struct irq_data *VAR_1)
{
 return FUNC_0(&VAR_0->cpumask, FUNC_1(VAR_1));
}
