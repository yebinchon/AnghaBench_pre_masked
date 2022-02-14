
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mvebu_sei {TYPE_3__* caps; TYPE_1__* res; } ;
struct msi_msg {int address_hi; int address_lo; scalar_t__ data; } ;
struct irq_data {scalar_t__ hwirq; struct mvebu_sei* chip_data; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_5__ {scalar_t__ first; } ;
struct TYPE_6__ {TYPE_2__ cp_range; } ;
struct TYPE_4__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1,
      struct msi_msg *VAR_2)
{
 struct mvebu_sei *VAR_3 = VAR_1->chip_data;
 phys_addr_t VAR_4 = VAR_3->res->start + VAR_0;

 VAR_2->data = VAR_1->hwirq + VAR_3->caps->cp_range.first;
 VAR_2->address_lo = FUNC_0(VAR_4);
 VAR_2->address_hi = FUNC_1(VAR_4);
}
