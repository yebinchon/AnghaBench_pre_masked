
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; scalar_t__ device; scalar_t__ subsystem_vendor; int subsystem_device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct pci_dev *VAR_3)
{
 return VAR_3->vendor == VAR_2 &&
  VAR_3->device == VAR_0 &&
  VAR_3->subsystem_vendor == VAR_1 &&
  VAR_3->subsystem_device == 0xcb89;
}
