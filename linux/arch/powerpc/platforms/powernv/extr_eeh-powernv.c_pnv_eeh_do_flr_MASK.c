
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dn {int dummy; } ;
struct eeh_dev {scalar_t__ pcie_cap; } ;
struct TYPE_2__ {int (* write_config ) (struct pci_dn*,scalar_t__,int,int) ;int (* read_config ) (struct pci_dn*,scalar_t__,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_1 (int ) ;
 struct eeh_dev* FUNC_2 (struct pci_dn*) ;
 int FUNC_3 (struct pci_dn*,char*,scalar_t__,int ) ;
 int FUNC_4 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_5 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_6 (struct pci_dn*,scalar_t__,int,int) ;
 int FUNC_7 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_8 (struct pci_dn*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_9(struct pci_dn *VAR_10, int VAR_11)
{
 struct eeh_dev *VAR_12 = FUNC_2(VAR_10);
 u32 VAR_13 = 0;

 if (FUNC_0(!VAR_12->pcie_cap))
  return -VAR_2;

 VAR_9->read_config(VAR_10, VAR_12->pcie_cap + VAR_3, 4, &VAR_13);
 if (!(VAR_13 & VAR_4))
  return -VAR_2;

 switch (VAR_11) {
 case 128:
 case 129:
  FUNC_3(VAR_10, "",
      VAR_12->pcie_cap + VAR_7,
      VAR_8);
  VAR_9->read_config(VAR_10, VAR_12->pcie_cap + VAR_5,
         4, &VAR_13);
  VAR_13 |= VAR_6;
  VAR_9->write_config(VAR_10, VAR_12->pcie_cap + VAR_5,
          4, VAR_13);
  FUNC_1(VAR_0);
  break;
 case 130:
  VAR_9->read_config(VAR_10, VAR_12->pcie_cap + VAR_5,
         4, &VAR_13);
  VAR_13 &= ~VAR_6;
  VAR_9->write_config(VAR_10, VAR_12->pcie_cap + VAR_5,
          4, VAR_13);
  FUNC_1(VAR_1);
  break;
 }

 return 0;
}
