
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int pci_ers_result_t ;
typedef enum pci_channel_state { ____Placeholder_pci_channel_state } pci_channel_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_2(struct pci_dev *VAR_2,
       enum pci_channel_state VAR_3)
{
 FUNC_0(&VAR_2->dev, "%s: PCIe AER error %d\n", VAR_0, VAR_3);


 FUNC_1(VAR_2);

 return VAR_1;
}
