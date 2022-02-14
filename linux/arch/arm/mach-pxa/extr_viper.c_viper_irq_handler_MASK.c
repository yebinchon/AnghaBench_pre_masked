
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct TYPE_3__ {int (* irq_ack ) (TYPE_2__*) ;} ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (TYPE_2__*) ;
 unsigned int FUNC_4 (int ) ;
 unsigned long FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_0)
{
 unsigned int VAR_1;
 unsigned long VAR_2;

 VAR_2 = FUNC_5();
 do {


  VAR_0->irq_data.chip->irq_ack(&VAR_0->irq_data);

  if (FUNC_2(VAR_2)) {
   VAR_1 = FUNC_4(FUNC_0(VAR_2));
   FUNC_1(VAR_1);
  }
  VAR_2 = FUNC_5();
 } while (VAR_2);
}
