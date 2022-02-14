
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; } ;
typedef enum qm_hw_ver { ____Placeholder_qm_hw_ver } qm_hw_ver ;


 int VAR_0 ;



enum qm_hw_ver FUNC_0(struct pci_dev *VAR_1)
{
 switch (VAR_1->revision) {
 case 129:
 case 128:
  return VAR_1->revision;
 default:
  return VAR_0;
 }
}
