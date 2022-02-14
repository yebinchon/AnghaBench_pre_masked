
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {TYPE_2__* bus; } ;
struct TYPE_3__ {int pcie_gen_mask; } ;
struct amdgpu_device {int flags; int usec_timeout; struct pci_dev* pdev; TYPE_1__ pm; } ;
struct TYPE_4__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
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
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct amdgpu_device *VAR_32)
{
 struct pci_dev *VAR_33 = VAR_32->pdev->bus->self;
 int VAR_34, VAR_35;
 u32 VAR_36, VAR_37;
 int VAR_38;
 u16 VAR_39;

 if (FUNC_4(VAR_32->pdev->bus))
  return;

 if (VAR_27 == 0)
  return;

 if (VAR_32->flags & VAR_0)
  return;

 if (!(VAR_32->pm.pcie_gen_mask & (VAR_1 |
     VAR_2)))
  return;

 VAR_36 = FUNC_1(VAR_30);
 VAR_37 = (VAR_36 & VAR_12) >>
  VAR_13;
 if (VAR_32->pm.pcie_gen_mask & VAR_2) {
  if (VAR_37 == 2) {
   FUNC_0("PCIE gen 3 link speeds already enabled\n");
   return;
  }
  FUNC_0("enabling PCIE gen 3 link speeds, disable with amdgpu.pcie_gen2=0\n");
 } else if (VAR_32->pm.pcie_gen_mask & VAR_1) {
  if (VAR_37 == 1) {
   FUNC_0("PCIE gen 2 link speeds already enabled\n");
   return;
  }
  FUNC_0("enabling PCIE gen 2 link speeds, disable with amdgpu.pcie_gen2=0\n");
 }

 VAR_34 = FUNC_5(VAR_33);
 if (!VAR_34)
  return;

 VAR_35 = FUNC_5(VAR_32->pdev);
 if (!VAR_35)
  return;

 if (VAR_32->pm.pcie_gen_mask & VAR_2) {

  if (VAR_37 != 2) {
   u16 VAR_40, VAR_41;
   u16 VAR_42, VAR_43;
   u32 VAR_44, VAR_45, VAR_46;

   FUNC_6(VAR_33, VAR_34 + VAR_24, &VAR_40);
   FUNC_6(VAR_32->pdev, VAR_35 + VAR_24, &VAR_41);

   VAR_39 = VAR_40 | VAR_26;
   FUNC_7(VAR_33, VAR_34 + VAR_24, VAR_39);

   VAR_39 = VAR_41 | VAR_26;
   FUNC_7(VAR_32->pdev, VAR_35 + VAR_24, VAR_39);

   VAR_46 = FUNC_1(VAR_31);
   VAR_44 = (VAR_46 & VAR_18) >>
    VAR_19;
   VAR_45 = (VAR_46 & VAR_20)
    >> VAR_21;

   if (VAR_45 < VAR_44) {
    VAR_46 = FUNC_1(VAR_29);
    if (VAR_46 & VAR_9) {
     VAR_46 &= ~(VAR_5 |
      VAR_10);
     VAR_46 |= (VAR_44 <<
      VAR_6);
     VAR_46 |= VAR_11 |
     VAR_8 |
     VAR_7;
     FUNC_2(VAR_29, VAR_46);
    }
   }

   for (VAR_38 = 0; VAR_38 < 10; VAR_38++) {

    FUNC_6(VAR_32->pdev, VAR_35 + VAR_22, &VAR_39);
    if (VAR_39 & VAR_23)
     break;

    FUNC_6(VAR_33, VAR_34 + VAR_24, &VAR_40);
    FUNC_6(VAR_32->pdev, VAR_35 + VAR_24, &VAR_41);

    FUNC_6(VAR_33, VAR_34 + VAR_25, &VAR_42);
    FUNC_6(VAR_32->pdev, VAR_35 + VAR_25, &VAR_43);

    VAR_46 = FUNC_1(VAR_28);
    VAR_46 |= VAR_4;
    FUNC_2(VAR_28, VAR_46);

    VAR_46 = FUNC_1(VAR_28);
    VAR_46 |= VAR_3;
    FUNC_2(VAR_28, VAR_46);

    FUNC_3(100);


    FUNC_6(VAR_33, VAR_34 + VAR_24, &VAR_39);
    VAR_39 &= ~VAR_26;
    VAR_39 |= (VAR_40 & VAR_26);
    FUNC_7(VAR_33, VAR_34 + VAR_24, VAR_39);

    FUNC_6(VAR_32->pdev, VAR_35 + VAR_24, &VAR_39);
    VAR_39 &= ~VAR_26;
    VAR_39 |= (VAR_41 & VAR_26);
    FUNC_7(VAR_32->pdev, VAR_35 + VAR_24, VAR_39);


    FUNC_6(VAR_33, VAR_34 + VAR_25, &VAR_39);
    VAR_39 &= ~((1 << 4) | (7 << 9));
    VAR_39 |= (VAR_42 & ((1 << 4) | (7 << 9)));
    FUNC_7(VAR_33, VAR_34 + VAR_25, VAR_39);

    FUNC_6(VAR_32->pdev, VAR_35 + VAR_25, &VAR_39);
    VAR_39 &= ~((1 << 4) | (7 << 9));
    VAR_39 |= (VAR_43 & ((1 << 4) | (7 << 9)));
    FUNC_7(VAR_32->pdev, VAR_35 + VAR_25, VAR_39);

    VAR_46 = FUNC_1(VAR_28);
    VAR_46 &= ~VAR_4;
    FUNC_2(VAR_28, VAR_46);
   }
  }
 }


 VAR_36 |= VAR_16 |
  VAR_14;
 VAR_36 &= ~VAR_15;
 FUNC_2(VAR_30, VAR_36);

 FUNC_6(VAR_32->pdev, VAR_35 + VAR_25, &VAR_39);
 VAR_39 &= ~0xf;
 if (VAR_32->pm.pcie_gen_mask & VAR_2)
  VAR_39 |= 3;
 else if (VAR_32->pm.pcie_gen_mask & VAR_1)
  VAR_39 |= 2;
 else
  VAR_39 |= 1;
 FUNC_7(VAR_32->pdev, VAR_35 + VAR_25, VAR_39);

 VAR_36 = FUNC_1(VAR_30);
 VAR_36 |= VAR_17;
 FUNC_2(VAR_30, VAR_36);

 for (VAR_38 = 0; VAR_38 < VAR_32->usec_timeout; VAR_38++) {
  VAR_36 = FUNC_1(VAR_30);
  if ((VAR_36 & VAR_17) == 0)
   break;
  FUNC_8(1);
 }
}
