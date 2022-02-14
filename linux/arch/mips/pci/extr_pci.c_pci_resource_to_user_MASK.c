
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
struct pci_dev {int dummy; } ;
typedef scalar_t__ resource_size_t ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct resource const*) ;

void FUNC_2(const struct pci_dev *VAR_0, int VAR_1,
     const struct resource *VAR_2, resource_size_t *VAR_3,
     resource_size_t *VAR_4)
{
 phys_addr_t VAR_5 = FUNC_1(VAR_2);

 *VAR_3 = FUNC_0(VAR_2->start, VAR_5);
 *VAR_4 = VAR_2->start + VAR_5 - 1;
}
