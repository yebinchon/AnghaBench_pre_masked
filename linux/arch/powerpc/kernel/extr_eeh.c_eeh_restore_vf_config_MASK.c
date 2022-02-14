
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dn {int mps; } ;
struct eeh_dev {scalar_t__ aer_cap; scalar_t__ pcie_cap; } ;
struct TYPE_2__ {int (* write_config ) (struct pci_dn*,scalar_t__,int,int) ;int (* read_config ) (struct pci_dn*,scalar_t__,int,int*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__* VAR_16 ;
 int FUNC_0 (int ) ;
 struct eeh_dev* FUNC_1 (struct pci_dn*) ;
 int FUNC_2 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_3 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_4 (struct pci_dn*,scalar_t__,int,int) ;
 int FUNC_5 (struct pci_dn*,scalar_t__,int,int) ;
 int FUNC_6 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_7 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_8 (struct pci_dn*,scalar_t__,int,int) ;
 int FUNC_9 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_10 (struct pci_dn*,scalar_t__,int,int) ;
 int FUNC_11 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_12 (struct pci_dn*,scalar_t__,int,int) ;

int FUNC_13(struct pci_dn *VAR_17)
{
 struct eeh_dev *VAR_18 = FUNC_1(VAR_17);
 u32 VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23;

 if (VAR_18->pcie_cap) {

  VAR_23 = (FUNC_0(VAR_17->mps) - 8) << 5;
  VAR_16->read_config(VAR_17, VAR_18->pcie_cap + VAR_8,
         2, &VAR_19);
  VAR_19 &= ~VAR_14;
  VAR_19 |= VAR_23;
  VAR_16->write_config(VAR_17, VAR_18->pcie_cap + VAR_8,
          2, VAR_19);


  VAR_16->read_config(VAR_17, VAR_18->pcie_cap + VAR_6,
         4, &VAR_21);
  if (VAR_21 & VAR_7) {
   VAR_16->read_config(VAR_17,
          VAR_18->pcie_cap + VAR_9,
          4, &VAR_21);
   VAR_21 |= VAR_10;
   VAR_16->write_config(VAR_17,
           VAR_18->pcie_cap + VAR_9,
           4, VAR_21);
  }
 }


 VAR_16->read_config(VAR_17, VAR_0, 2, &VAR_20);
 VAR_20 |= (VAR_1 | VAR_2);
 VAR_16->write_config(VAR_17, VAR_0, 2, VAR_20);


 if (VAR_18->pcie_cap) {
  VAR_16->read_config(VAR_17, VAR_18->pcie_cap + VAR_8,
         2, &VAR_19);
  VAR_19 &= ~VAR_11;
  VAR_19 |= (VAR_13 |
      VAR_12 |
      VAR_15);
  VAR_16->write_config(VAR_17, VAR_18->pcie_cap + VAR_8,
          2, VAR_19);
 }


 if (VAR_18->pcie_cap && VAR_18->aer_cap) {
  VAR_16->read_config(VAR_17, VAR_18->aer_cap + VAR_3,
         4, &VAR_22);
  VAR_22 |= (VAR_5 | VAR_4);
  VAR_16->write_config(VAR_17, VAR_18->aer_cap + VAR_3,
          4, VAR_22);
 }

 return 0;
}
