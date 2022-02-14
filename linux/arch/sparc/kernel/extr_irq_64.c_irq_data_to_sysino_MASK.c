
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_handler_data {unsigned long sysino; } ;
struct irq_data {int dummy; } ;


 struct irq_handler_data* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct irq_data *VAR_0)
{
 struct irq_handler_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->sysino;
}
