
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_data {unsigned int irq; } ;
struct TYPE_4__ {int scr; } ;
struct TYPE_3__ {int mode; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int,int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (struct irq_data*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_4)
{
 unsigned int VAR_5 = VAR_4->irq - VAR_0;

 FUNC_2(VAR_4);

 if (FUNC_3(FUNC_0(VAR_3[VAR_5].mode)))
  FUNC_1(VAR_1 | VAR_5, &VAR_2->scr);
}
