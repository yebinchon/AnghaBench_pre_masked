
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int irq; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* irq_unmask ) (struct irq_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int* VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_5 ;
 int* VAR_6 ;
 struct irq_data** VAR_7 ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct irq_data *VAR_10;
 int VAR_11, VAR_12, VAR_13;





 for (VAR_11 = VAR_1;
   VAR_11 <= VAR_0; VAR_11++) {
  VAR_10 = VAR_7[VAR_11];
  VAR_12 = VAR_10->irq;
  VAR_13 = VAR_4[VAR_2 + VAR_11];

  if (VAR_6[VAR_11] < VAR_13 &&
    VAR_11 != VAR_1) {





   if (!FUNC_0(!VAR_5->irq_unmask))
    VAR_5->irq_unmask(VAR_10);
  }
  for (; VAR_6[VAR_11] < VAR_13; VAR_6[VAR_11]++)
   FUNC_1(VAR_12);
 }
 return VAR_3;
}
