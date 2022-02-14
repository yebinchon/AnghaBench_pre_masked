
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvebu_gicp {TYPE_1__* res; } ;
struct msi_msg {void* address_hi; void* address_lo; int data; } ;
struct irq_data {int hwirq; struct mvebu_gicp* chip_data; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2, struct msi_msg *VAR_3)
{
 struct mvebu_gicp *VAR_4 = VAR_2->chip_data;
 phys_addr_t VAR_5 = VAR_4->res->start + VAR_1;
 phys_addr_t VAR_6 = VAR_4->res->start + VAR_0;

 VAR_3[0].data = VAR_2->hwirq;
 VAR_3[0].address_lo = FUNC_0(VAR_5);
 VAR_3[0].address_hi = FUNC_1(VAR_5);
 VAR_3[1].data = VAR_2->hwirq;
 VAR_3[1].address_lo = FUNC_0(VAR_6);
 VAR_3[1].address_hi = FUNC_1(VAR_6);
}
