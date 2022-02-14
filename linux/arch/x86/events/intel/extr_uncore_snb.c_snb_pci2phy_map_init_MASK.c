
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; } ;
struct pci2phy_map {scalar_t__* pbus_to_physid; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci2phy_map* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct pci_dev* FUNC_3 (int ,int,struct pci_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(int VAR_4)
{
 struct pci_dev *VAR_5 = ((void*)0);
 struct pci2phy_map *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_3(VAR_2, VAR_4, VAR_5);
 if (!VAR_5)
  return -VAR_1;

 VAR_7 = VAR_5->bus->number;
 VAR_8 = FUNC_2(VAR_5->bus);

 FUNC_4(&VAR_3);
 VAR_6 = FUNC_0(VAR_8);
 if (!VAR_6) {
  FUNC_5(&VAR_3);
  FUNC_1(VAR_5);
  return -VAR_0;
 }
 VAR_6->pbus_to_physid[VAR_7] = 0;
 FUNC_5(&VAR_3);

 FUNC_1(VAR_5);

 return 0;
}
