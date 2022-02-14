
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct irq_data {int irq; } ;
struct TYPE_8__ {unsigned int imask; } ;
struct TYPE_5__ {int imask; } ;
struct TYPE_6__ {TYPE_1__ ctrl; } ;
struct TYPE_7__ {TYPE_2__ perif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 TYPE_4__* VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_11)
{
 unsigned int VAR_12 = 0;

 VAR_10 &= ~(1 << (VAR_11->irq - VAR_1));
 if (!(VAR_10 & VAR_0))
  VAR_12 |= VAR_4;
 if (!(VAR_10 & VAR_2))
  VAR_12 |= VAR_5;
 if (!(VAR_10 & VAR_3))
  VAR_12 |= VAR_6;
 VAR_8 &= ~VAR_12;
 VAR_7->imask = VAR_8;
 FUNC_0();
 VAR_9->perif.ctrl.imask = VAR_10;
 FUNC_1();
}
