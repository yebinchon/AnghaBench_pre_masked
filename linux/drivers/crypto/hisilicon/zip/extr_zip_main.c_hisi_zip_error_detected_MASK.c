
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; scalar_t__ is_virtfn; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static pci_ers_result_t FUNC_2(struct pci_dev *VAR_3,
      pci_channel_state_t VAR_4)
{
 if (VAR_3->is_virtfn)
  return VAR_1;

 FUNC_0(&VAR_3->dev, "PCI error detected, state(=%d)!!\n", VAR_4);
 if (VAR_4 == VAR_2)
  return VAR_0;

 return FUNC_1(VAR_3);
}
