
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
typedef enum gic_intid_range { ____Placeholder_gic_intid_range } gic_intid_range ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_data*) ;

__attribute__((used)) static inline int FUNC_1(struct irq_data *VAR_2)
{
 enum gic_intid_range VAR_3 = FUNC_0(VAR_2);
 return VAR_3 == VAR_1 || VAR_3 == VAR_0;
}
