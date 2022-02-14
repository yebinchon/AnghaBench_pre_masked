
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_laptop {scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; } ;
struct pci_dev {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;


 struct sis_laptop* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_1)
{
 const struct sis_laptop *VAR_2 = &VAR_0[0];

 while (VAR_2->device) {
  if (VAR_2->device == VAR_1->device &&
      VAR_2->subvendor == VAR_1->subsystem_vendor &&
      VAR_2->subdevice == VAR_1->subsystem_device)
   return 1;
  VAR_2++;
 }

 return 0;
}
