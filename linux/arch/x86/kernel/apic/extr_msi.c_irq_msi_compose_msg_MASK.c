
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msi_msg {int address_lo; int data; int address_hi; } ;
struct irq_data {int dummy; } ;
struct irq_cfg {int vector; int dest_apicid; } ;
struct TYPE_2__ {scalar_t__ irq_dest_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_8 ;
 struct irq_cfg* FUNC_3 (struct irq_data*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_9, struct msi_msg *VAR_10)
{
 struct irq_cfg *VAR_11 = FUNC_3(VAR_9);

 VAR_10->address_hi = VAR_0;

 if (FUNC_4())
  VAR_10->address_hi |= FUNC_1(VAR_11->dest_apicid);

 VAR_10->address_lo =
  VAR_1 |
  ((VAR_8->irq_dest_mode == 0) ?
   VAR_3 :
   VAR_2) |
  VAR_4 |
  FUNC_0(VAR_11->dest_apicid);

 VAR_10->data =
  VAR_7 |
  VAR_6 |
  VAR_5 |
  FUNC_2(VAR_11->vector);
}
