
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static unsigned int FUNC_3(struct irq_data *VAR_0)
{
 unsigned int VAR_1 = VAR_0->irq;

 FUNC_2(VAR_0);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 return 0;
}
