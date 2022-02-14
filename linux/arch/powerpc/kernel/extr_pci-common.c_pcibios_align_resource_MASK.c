
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int flags; } ;
struct pci_dev {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;

resource_size_t FUNC_1(void *VAR_1, const struct resource *VAR_2,
    resource_size_t VAR_3, resource_size_t VAR_4)
{
 struct pci_dev *VAR_5 = VAR_1;
 resource_size_t VAR_6 = VAR_2->start;

 if (VAR_2->flags & VAR_0) {
  if (FUNC_0(VAR_5))
   return VAR_6;
  if (VAR_6 & 0x300)
   VAR_6 = (VAR_6 + 0x3ff) & ~0x3ff;
 }

 return VAR_6;
}
