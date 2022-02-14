
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct irq_data {unsigned int irq; } ;
struct TYPE_4__ {int r; } ;
struct TYPE_6__ {TYPE_1__ edc; } ;
struct TYPE_5__ {int mode; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int,int *) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (struct irq_data*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_4)
{
 unsigned int VAR_5 = VAR_4->irq - VAR_0;

 FUNC_2(VAR_4);
 if (FUNC_0(VAR_3[VAR_5].mode)) {
  VAR_5--;

  FUNC_1((VAR_1 | (VAR_5 & 0xf))
        << (VAR_5 & 0x10),
        &VAR_2->edc.r);
 }
}
