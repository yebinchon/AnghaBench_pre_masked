
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sun4m_handler_data {scalar_t__ mask; scalar_t__ percpu; } ;
struct irq_data {int dummy; } ;
struct TYPE_4__ {int mask_clear; } ;
struct TYPE_3__ {int clear; } ;


 struct sun4m_handler_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 () ;
 TYPE_2__* VAR_0 ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_2)
{
 struct sun4m_handler_data *VAR_3;
 int VAR_4 = FUNC_4();

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3->mask) {
  unsigned long VAR_5;

  FUNC_2(VAR_5);
  if (VAR_3->percpu) {
   FUNC_3(VAR_3->mask, &VAR_1[VAR_4]->clear);
  } else {
   FUNC_3(VAR_3->mask, &VAR_0->mask_clear);
  }
  FUNC_1(VAR_5);
 }
}
