
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct TYPE_3__ {int (* irq_ack ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int* VAR_2 ;
 int FUNC_1 (unsigned int) ;
 struct irq_desc* VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct irq_desc *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_1) & 0xf;

 if (FUNC_3(VAR_5 == 0)) {


  VAR_4 = VAR_3 + VAR_0;
  VAR_4->irq_data.chip->irq_ack(&VAR_4->irq_data);
 } else {


  for (VAR_7 = 0; VAR_5 != 0; VAR_7++, VAR_5 >>= 1) {
   if (VAR_5 & 1) {
    VAR_6 = VAR_2[VAR_7];
    FUNC_1(VAR_6);
   }
  }
 }
}
