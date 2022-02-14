
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct group_for_pci_data {int * group; struct pci_dev* pdev; } ;


 int * FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_0, u16 VAR_1, void *VAR_2)
{
 struct group_for_pci_data *VAR_3 = VAR_2;

 VAR_3->pdev = VAR_0;
 VAR_3->group = FUNC_0(&VAR_0->dev);

 return VAR_3->group != ((void*)0);
}
