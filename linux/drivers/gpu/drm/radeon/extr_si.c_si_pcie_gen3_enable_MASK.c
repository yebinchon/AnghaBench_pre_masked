
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct radeon_device {int flags; int usec_timeout; struct pci_dev* pdev; } ;
struct pci_dev {TYPE_1__* bus; } ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_9 (struct pci_dev*) ;
 scalar_t__ VAR_33 ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct radeon_device *VAR_34)
{
 struct pci_dev *VAR_35 = VAR_34->pdev->bus->self;
 enum pci_bus_speed VAR_36;
 int VAR_37, VAR_38;
 u32 VAR_39, VAR_40;
 int VAR_41;
 u16 VAR_42;

 if (FUNC_5(VAR_34->pdev->bus))
  return;

 if (VAR_33 == 0)
  return;

 if (VAR_34->flags & VAR_31)
  return;

 if (!(VAR_34->flags & VAR_32))
  return;

 VAR_36 = FUNC_9(VAR_35);
 if (VAR_36 == VAR_30)
  return;

 if ((VAR_36 != VAR_24) &&
     (VAR_36 != VAR_23))
  return;

 VAR_39 = FUNC_2(VAR_21);
 VAR_40 = (VAR_39 & VAR_0) >>
  VAR_1;
 if (VAR_36 == VAR_24) {
  if (VAR_40 == 2) {
   FUNC_0("PCIE gen 3 link speeds already enabled\n");
   return;
  }
  FUNC_0("enabling PCIE gen 3 link speeds, disable with radeon.pcie_gen2=0\n");
 } else if (VAR_36 == VAR_23) {
  if (VAR_40 == 1) {
   FUNC_0("PCIE gen 2 link speeds already enabled\n");
   return;
  }
  FUNC_0("enabling PCIE gen 2 link speeds, disable with radeon.pcie_gen2=0\n");
 }

 VAR_37 = FUNC_6(VAR_35);
 if (!VAR_37)
  return;

 VAR_38 = FUNC_6(VAR_34->pdev);
 if (!VAR_38)
  return;

 if (VAR_36 == VAR_24) {

  if (VAR_40 != 2) {
   u16 VAR_43, VAR_44;
   u16 VAR_45, VAR_46;
   u32 VAR_47, VAR_48, VAR_49;

   FUNC_7(VAR_35, VAR_37 + VAR_27, &VAR_43);
   FUNC_7(VAR_34->pdev, VAR_38 + VAR_27, &VAR_44);

   VAR_42 = VAR_43 | VAR_29;
   FUNC_8(VAR_35, VAR_37 + VAR_27, VAR_42);

   VAR_42 = VAR_44 | VAR_29;
   FUNC_8(VAR_34->pdev, VAR_38 + VAR_27, VAR_42);

   VAR_49 = FUNC_1(VAR_22);
   VAR_47 = (VAR_49 & VAR_2) >> VAR_3;
   VAR_48 = (VAR_49 & VAR_10) >> VAR_11;

   if (VAR_48 < VAR_47) {
    VAR_49 = FUNC_2(VAR_20);
    if (VAR_49 & VAR_15) {
     VAR_49 &= ~(VAR_8 | VAR_17);
     VAR_49 |= (VAR_47 << VAR_9);
     VAR_49 |= VAR_18 | VAR_14 | VAR_12;
     FUNC_3(VAR_20, VAR_49);
    }
   }

   for (VAR_41 = 0; VAR_41 < 10; VAR_41++) {

    FUNC_7(VAR_34->pdev, VAR_38 + VAR_25, &VAR_42);
    if (VAR_42 & VAR_26)
     break;

    FUNC_7(VAR_35, VAR_37 + VAR_27, &VAR_43);
    FUNC_7(VAR_34->pdev, VAR_38 + VAR_27, &VAR_44);

    FUNC_7(VAR_35, VAR_37 + VAR_28, &VAR_45);
    FUNC_7(VAR_34->pdev, VAR_38 + VAR_28, &VAR_46);

    VAR_49 = FUNC_2(VAR_19);
    VAR_49 |= VAR_16;
    FUNC_3(VAR_19, VAR_49);

    VAR_49 = FUNC_2(VAR_19);
    VAR_49 |= VAR_13;
    FUNC_3(VAR_19, VAR_49);

    FUNC_4(100);


    FUNC_7(VAR_35, VAR_37 + VAR_27, &VAR_42);
    VAR_42 &= ~VAR_29;
    VAR_42 |= (VAR_43 & VAR_29);
    FUNC_8(VAR_35, VAR_37 + VAR_27, VAR_42);

    FUNC_7(VAR_34->pdev, VAR_38 + VAR_27, &VAR_42);
    VAR_42 &= ~VAR_29;
    VAR_42 |= (VAR_44 & VAR_29);
    FUNC_8(VAR_34->pdev, VAR_38 + VAR_27, VAR_42);


    FUNC_7(VAR_35, VAR_37 + VAR_28, &VAR_42);
    VAR_42 &= ~((1 << 4) | (7 << 9));
    VAR_42 |= (VAR_45 & ((1 << 4) | (7 << 9)));
    FUNC_8(VAR_35, VAR_37 + VAR_28, VAR_42);

    FUNC_7(VAR_34->pdev, VAR_38 + VAR_28, &VAR_42);
    VAR_42 &= ~((1 << 4) | (7 << 9));
    VAR_42 |= (VAR_46 & ((1 << 4) | (7 << 9)));
    FUNC_8(VAR_34->pdev, VAR_38 + VAR_28, VAR_42);

    VAR_49 = FUNC_2(VAR_19);
    VAR_49 &= ~VAR_16;
    FUNC_3(VAR_19, VAR_49);
   }
  }
 }


 VAR_39 |= VAR_6 | VAR_4;
 VAR_39 &= ~VAR_5;
 FUNC_3(VAR_21, VAR_39);

 FUNC_7(VAR_34->pdev, VAR_38 + VAR_28, &VAR_42);
 VAR_42 &= ~0xf;
 if (VAR_36 == VAR_24)
  VAR_42 |= 3;
 else if (VAR_36 == VAR_23)
  VAR_42 |= 2;
 else
  VAR_42 |= 1;
 FUNC_8(VAR_34->pdev, VAR_38 + VAR_28, VAR_42);

 VAR_39 = FUNC_2(VAR_21);
 VAR_39 |= VAR_7;
 FUNC_3(VAR_21, VAR_39);

 for (VAR_41 = 0; VAR_41 < VAR_34->usec_timeout; VAR_41++) {
  VAR_39 = FUNC_2(VAR_21);
  if ((VAR_39 & VAR_7) == 0)
   break;
  FUNC_10(1);
 }
}
