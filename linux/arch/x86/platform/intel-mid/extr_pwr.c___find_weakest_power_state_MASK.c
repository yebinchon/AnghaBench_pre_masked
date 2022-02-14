
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mid_pwr_dev {scalar_t__ state; struct pci_dev* pdev; } ;
typedef scalar_t__ pci_power_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static pci_power_t FUNC_1(struct mid_pwr_dev *VAR_2,
           struct pci_dev *VAR_3,
           pci_power_t VAR_4)
{
 pci_power_t VAR_5 = VAR_1;
 unsigned int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2[VAR_6].pdev == VAR_3 || !VAR_2[VAR_6].pdev)
   break;
 }


 if (VAR_6 < VAR_0) {
  VAR_2[VAR_6].pdev = VAR_3;
  VAR_2[VAR_6].state = VAR_4;
 } else {
  FUNC_0(&VAR_3->dev, "No room for device in PWRMU LSS cache\n");
  VAR_5 = VAR_4;
 }


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2[VAR_6].state < VAR_5)
   VAR_5 = VAR_2[VAR_6].state;
 }

 return VAR_5;
}
