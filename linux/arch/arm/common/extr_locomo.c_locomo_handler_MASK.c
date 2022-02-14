
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct locomo {unsigned int irq_base; scalar_t__ base; } ;
struct TYPE_4__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct TYPE_3__ {int (* irq_ack ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 struct locomo* FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct irq_desc *VAR_1)
{
 struct locomo *VAR_2 = FUNC_1(VAR_1);
 int VAR_3, VAR_4;


 VAR_1->irq_data.chip->irq_ack(&VAR_1->irq_data);


 VAR_3 = FUNC_2(VAR_2->base + VAR_0) & 0x0f00;

 if (VAR_3) {
  unsigned int VAR_5;


  VAR_5 = VAR_2->irq_base;
  for (VAR_4 = 0; VAR_4 <= 3; VAR_4++, VAR_5++) {
   if (VAR_3 & (0x0100 << VAR_4)) {
    FUNC_0(VAR_5);
   }

  }
 }
}
