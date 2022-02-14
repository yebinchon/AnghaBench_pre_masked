
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ hwirq; } ;
struct evic_chip_data {scalar_t__* ext_irqs; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct irq_data*,unsigned int) ;
 struct evic_chip_data* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_3,
          unsigned int VAR_4)
{
 struct evic_chip_data *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;
 int VAR_7;

 if (!(VAR_4 & VAR_2))
  return -VAR_0;


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->ext_irqs); VAR_7++) {
  if (VAR_5->ext_irqs[VAR_7] == VAR_3->hwirq) {
   VAR_6 = FUNC_3(VAR_7, VAR_4);
   if (VAR_6)
    return VAR_6;
  }
 }

 FUNC_1(VAR_3, VAR_4);

 return VAR_1;
}
