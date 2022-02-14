
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct irq_data {int hwirq; TYPE_1__* parent_data; struct bridge_irq_chip_data* chip_data; } ;
struct cpumask {int dummy; } ;
struct bridge_irq_chip_data {TYPE_2__* bc; } ;
typedef int nasid_t ;
struct TYPE_7__ {int addr; } ;
struct TYPE_6__ {int intr_addr; } ;
struct TYPE_5__ {int hwirq; } ;


 int FUNC_0 (int ) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cpumask const*,int ) ;
 int FUNC_5 (struct irq_data*,struct cpumask const*,int) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_3, const struct cpumask *VAR_4,
          bool VAR_5)
{
 return FUNC_5(VAR_3, VAR_4, VAR_5);

}
