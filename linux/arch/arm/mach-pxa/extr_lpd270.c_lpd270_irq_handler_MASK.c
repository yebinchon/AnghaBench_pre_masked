
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
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 unsigned long VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_2)
{
 unsigned int VAR_3;
 unsigned long VAR_4;

 VAR_4 = FUNC_2(VAR_0) & VAR_1;
 do {

  VAR_2->irq_data.chip->irq_ack(&VAR_2->irq_data);
  if (FUNC_4(VAR_4)) {
   VAR_3 = FUNC_0(0) + FUNC_1(VAR_4);
   FUNC_3(VAR_3);

   VAR_4 = FUNC_2(VAR_0) &
      VAR_1;
  }
 } while (VAR_4);
}
