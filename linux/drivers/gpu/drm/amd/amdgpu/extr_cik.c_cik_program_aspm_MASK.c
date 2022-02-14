
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct amdgpu_device {int flags; TYPE_1__* pdev; } ;
struct TYPE_4__ {struct pci_dev* self; } ;
struct TYPE_3__ {TYPE_2__* bus; } ;


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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_69)
{
 u32 VAR_70, VAR_71;
 bool VAR_72 = 0, VAR_73 = 0, VAR_74 = 0;
 bool VAR_75 = 0;

 if (VAR_51 == 0)
  return;

 if (FUNC_4(VAR_69->pdev->bus))
  return;


 if (VAR_69->flags & VAR_0)
  return;

 VAR_71 = VAR_70 = FUNC_0(VAR_65);
 VAR_70 &= ~VAR_39;
 VAR_70 |= (0x24 << VAR_41) |
  VAR_40;
 if (VAR_71 != VAR_70)
  FUNC_2(VAR_65, VAR_70);

 VAR_71 = VAR_70 = FUNC_0(VAR_63);
 VAR_70 |= VAR_30;
 if (VAR_71 != VAR_70)
  FUNC_2(VAR_63, VAR_70);

 VAR_71 = VAR_70 = FUNC_0(VAR_67);
 VAR_70 |= VAR_44;
 if (VAR_71 != VAR_70)
  FUNC_2(VAR_67, VAR_70);

 VAR_71 = VAR_70 = FUNC_0(VAR_61);
 VAR_70 &= ~(VAR_31 |
  VAR_33);
 VAR_70 |= VAR_35;
 if (!VAR_72)
  VAR_70 |= (7 << VAR_32);

 if (!VAR_73) {
  VAR_70 |= (7 << VAR_34);
  VAR_70 &= ~VAR_35;
  if (VAR_71 != VAR_70)
   FUNC_2(VAR_61, VAR_70);

  if (!VAR_74) {
   bool VAR_76;

   VAR_71 = VAR_70 = FUNC_0(VAR_56);
   VAR_70 &= ~(VAR_9 |
    VAR_11);
   VAR_70 |= (7 << VAR_10) |
    (7 << VAR_12);
   if (VAR_71 != VAR_70)
    FUNC_2(VAR_56, VAR_70);

   VAR_71 = VAR_70 = FUNC_0(VAR_57);
   VAR_70 &= ~(VAR_13 |
    VAR_15);
   VAR_70 |= (7 << VAR_14) |
    (7 << VAR_16);
   if (VAR_71 != VAR_70)
    FUNC_2(VAR_57, VAR_70);

   VAR_71 = VAR_70 = FUNC_0(VAR_58);
   VAR_70 &= ~(VAR_17 |
    VAR_19);
   VAR_70 |= (7 << VAR_18) |
    (7 << VAR_20);
   if (VAR_71 != VAR_70)
    FUNC_2(VAR_58, VAR_70);

   VAR_71 = VAR_70 = FUNC_0(VAR_59);
   VAR_70 &= ~(VAR_21 |
    VAR_23);
   VAR_70 |= (7 << VAR_22) |
    (7 << VAR_24);
   if (VAR_71 != VAR_70)
    FUNC_2(VAR_59, VAR_70);

   VAR_71 = VAR_70 = FUNC_0(VAR_64);
   VAR_70 &= ~VAR_36;
   VAR_70 |= ~(3 << VAR_37);
   if (VAR_71 != VAR_70)
    FUNC_2(VAR_64, VAR_70);

   if (!VAR_75) {
    struct pci_dev *VAR_77 = VAR_69->pdev->bus->self;
    u32 VAR_78;

    VAR_76 = 0;
    FUNC_5(VAR_77, VAR_45, &VAR_78);
    if (VAR_78 & VAR_46)
     VAR_76 = 1;
   } else {
    VAR_76 = 0;
   }

   if (VAR_76) {
    VAR_71 = VAR_70 = FUNC_0(VAR_62);
    VAR_70 |= VAR_28 |
     VAR_29;
    if (VAR_71 != VAR_70)
     FUNC_2(VAR_62, VAR_70);

    VAR_71 = VAR_70 = FUNC_1(VAR_68);
    VAR_70 &= ~(VAR_47 |
     VAR_49);
    VAR_70 |= (1 << VAR_48) |
     (1 << VAR_50);
    if (VAR_71 != VAR_70)
     FUNC_3(VAR_68, VAR_70);

    VAR_71 = VAR_70 = FUNC_1(VAR_54);
    VAR_70 &= ~(VAR_3 |
     VAR_5);
    VAR_70 |= (1 << VAR_4) |
     (1 << VAR_6);
    if (VAR_71 != VAR_70)
     FUNC_3(VAR_54, VAR_70);

    VAR_71 = VAR_70 = FUNC_1(VAR_52);
    VAR_70 &= ~VAR_2;
    if (VAR_71 != VAR_70)
     FUNC_3(VAR_52, VAR_70);

    VAR_71 = VAR_70 = FUNC_1(VAR_53);
    VAR_70 &= ~VAR_1;
    if (VAR_71 != VAR_70)
     FUNC_3(VAR_53, VAR_70);

    VAR_71 = VAR_70 = FUNC_1(VAR_55);
    VAR_70 &= ~VAR_7;
    VAR_70 |= (4 << VAR_8);
    if (VAR_71 != VAR_70)
     FUNC_3(VAR_55, VAR_70);
   }
  }
 } else {
  if (VAR_71 != VAR_70)
   FUNC_2(VAR_61, VAR_70);
 }

 VAR_71 = VAR_70 = FUNC_0(VAR_60);
 VAR_70 |= VAR_27 |
  VAR_25 |
  VAR_26;
 if (VAR_71 != VAR_70)
  FUNC_2(VAR_60, VAR_70);

 if (!VAR_72) {
  VAR_70 = FUNC_0(VAR_65);
  if ((VAR_70 & VAR_38) ==
    VAR_38) {
   VAR_70 = FUNC_0(VAR_66);
   if ((VAR_70 & VAR_43) &&
   (VAR_70 & VAR_42)) {
    VAR_71 = VAR_70 = FUNC_0(VAR_61);
    VAR_70 &= ~VAR_31;
    if (VAR_71 != VAR_70)
     FUNC_2(VAR_61, VAR_70);
   }
  }
 }
}
