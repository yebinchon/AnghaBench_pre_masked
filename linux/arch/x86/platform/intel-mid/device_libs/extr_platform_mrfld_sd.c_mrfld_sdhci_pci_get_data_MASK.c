
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_data {int dummy; } ;
struct pci_dev {int devfn; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 struct sdhci_pci_data VAR_1 ;

__attribute__((used)) static struct sdhci_pci_data *
FUNC_1(struct pci_dev *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2->devfn);

 if (VAR_4 == VAR_0)
  return &VAR_1;

 return ((void*)0);
}
