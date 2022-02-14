
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition_desc {int chained_desc; } ;
struct irq_data {int dummy; } ;
struct irq_chip {int (* irq_set_type ) (struct irq_data*,unsigned int) ;} ;


 int VAR_0 ;
 struct partition_desc* FUNC_0 (struct irq_data*) ;
 struct irq_chip* FUNC_1 (int ) ;
 struct irq_data* FUNC_2 (int ) ;
 int FUNC_3 (struct irq_data*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct partition_desc *VAR_3 = FUNC_0(VAR_1);
 struct irq_chip *VAR_4 = FUNC_1(VAR_3->chained_desc);
 struct irq_data *VAR_5 = FUNC_2(VAR_3->chained_desc);

 if (VAR_4->irq_set_type)
  return VAR_4->irq_set_type(VAR_5, VAR_2);

 return -VAR_0;
}
