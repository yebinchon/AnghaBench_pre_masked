
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_data {int dummy; } ;
struct irq_chip {int (* irq_ack ) (struct irq_data*) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long VAR_1 ;
 int FUNC_3 (unsigned int) ;
 struct irq_chip* FUNC_4 (struct irq_desc*) ;
 struct irq_data* FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct irq_data*) ;

__attribute__((used)) static void FUNC_7(struct irq_desc *VAR_2)
{
 unsigned long VAR_3 = FUNC_2(VAR_0) &
     VAR_1;
 do {
  struct irq_data *VAR_4 = FUNC_5(VAR_2);
  struct irq_chip *VAR_5 = FUNC_4(VAR_2);
  unsigned int VAR_6;


  if (VAR_5->irq_ack)
   VAR_5->irq_ack(VAR_4);

  while (VAR_3) {
   VAR_6 = FUNC_0(0) + FUNC_1(VAR_3);
   FUNC_3(VAR_6);
   VAR_3 &= VAR_3 - 1;
  }
  VAR_3 = FUNC_2(VAR_0) &
    VAR_1;
 } while (VAR_3);
}
