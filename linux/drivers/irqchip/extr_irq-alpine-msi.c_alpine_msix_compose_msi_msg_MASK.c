
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_msg {scalar_t__ data; int address_lo; int address_hi; } ;
struct irq_data {int hwirq; } ;
struct alpine_msix_data {int addr; } ;
typedef int phys_addr_t ;


 struct alpine_msix_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0,
     struct msi_msg *VAR_1)
{
 struct alpine_msix_data *VAR_2 = FUNC_0(VAR_0);
 phys_addr_t VAR_3 = VAR_2->addr;

 VAR_3 |= (VAR_0->hwirq << 3);

 VAR_1->address_hi = FUNC_2(VAR_3);
 VAR_1->address_lo = FUNC_1(VAR_3);
 VAR_1->data = 0;
}
