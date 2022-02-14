
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; TYPE_1__* parent_data; struct bridge_irq_chip_data* chip_data; } ;
struct bridge_irq_chip_data {int nasid; struct bridge_controller* bc; } ;
struct bridge_controller {int intr_addr; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int hwirq; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bridge_controller*,int ) ;
 int FUNC_1 (struct bridge_controller*,int ,unsigned long) ;
 int FUNC_2 (struct bridge_controller*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_5,
      struct irq_data *VAR_6, bool VAR_7)
{
 struct bridge_irq_chip_data *VAR_8 = VAR_6->chip_data;
 struct bridge_controller *VAR_9 = VAR_8->bc;
 int VAR_10 = VAR_6->parent_data->hwirq;
 int VAR_11 = VAR_6->hwirq;
 u32 VAR_12;

 FUNC_2(VAR_9, VAR_0[VAR_11].addr,
       (((VAR_9->intr_addr >> 30) & 0x30000) |
        VAR_10 | (VAR_8->nasid << 8)));
 FUNC_1(VAR_9, VAR_2, (1 << VAR_11));
 FUNC_1(VAR_9, VAR_2, 0x7ffffe00);
 FUNC_1(VAR_9, VAR_3, (1UL << VAR_11));





 VAR_12 = FUNC_0(VAR_9, VAR_1);
 VAR_12 &= ~(7 << (VAR_11*3));
 VAR_12 |= (VAR_11 << (VAR_11*3));
 FUNC_2(VAR_9, VAR_1, VAR_12);

 FUNC_0(VAR_9, VAR_4);
 return 0;
}
