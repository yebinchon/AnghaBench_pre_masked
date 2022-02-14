
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int flags; scalar_t__ family; TYPE_1__* pdev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {struct pci_dev* self; } ;
struct TYPE_3__ {TYPE_2__* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (int) ;
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
 int FUNC_8 (int) ;
 int VAR_45 ;
 int FUNC_9 (int) ;
 int VAR_46 ;
 int FUNC_10 (int) ;
 int VAR_47 ;
 int FUNC_11 (int) ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int FUNC_17 (int) ;
 int VAR_60 ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int) ;
 int VAR_61 ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (struct pci_dev*,int ,int*) ;
 scalar_t__ VAR_62 ;

__attribute__((used)) static void FUNC_26(struct radeon_device *VAR_63)
{
 u32 VAR_64, VAR_65;
 bool VAR_66 = 0, VAR_67 = 0, VAR_68 = 0;
 bool VAR_69 = 0;

 if (VAR_62 == 0)
  return;

 if (!(VAR_63->flags & VAR_54))
  return;

 VAR_65 = VAR_64 = FUNC_14(VAR_40);
 VAR_64 &= ~VAR_18;
 VAR_64 |= FUNC_5(0x24) | VAR_19;
 if (VAR_65 != VAR_64)
  FUNC_20(VAR_40, VAR_64);

 VAR_65 = VAR_64 = FUNC_14(VAR_38);
 VAR_64 |= VAR_11;
 if (VAR_65 != VAR_64)
  FUNC_20(VAR_38, VAR_64);

 VAR_65 = VAR_64 = FUNC_13(VAR_42);
 VAR_64 |= VAR_53;
 if (VAR_65 != VAR_64)
  FUNC_19(VAR_42, VAR_64);

 VAR_65 = VAR_64 = FUNC_14(VAR_36);
 VAR_64 &= ~(VAR_12 | VAR_13);
 VAR_64 |= VAR_15;
 if (!VAR_66)
  VAR_64 |= FUNC_3(7);

 if (!VAR_67) {
  VAR_64 |= FUNC_4(7);
  VAR_64 &= ~VAR_15;
  if (VAR_65 != VAR_64)
   FUNC_20(VAR_36, VAR_64);

  if (!VAR_68) {
   bool VAR_70;

   VAR_65 = VAR_64 = FUNC_15(VAR_26);
   VAR_64 &= ~(VAR_45 | VAR_47);
   VAR_64 |= FUNC_8(7) | FUNC_10(7);
   if (VAR_65 != VAR_64)
    FUNC_21(VAR_26, VAR_64);

   VAR_65 = VAR_64 = FUNC_15(VAR_27);
   VAR_64 &= ~(VAR_46 | VAR_48);
   VAR_64 |= FUNC_9(7) | FUNC_11(7);
   if (VAR_65 != VAR_64)
    FUNC_21(VAR_27, VAR_64);

   VAR_65 = VAR_64 = FUNC_16(VAR_31);
   VAR_64 &= ~(VAR_45 | VAR_47);
   VAR_64 |= FUNC_8(7) | FUNC_10(7);
   if (VAR_65 != VAR_64)
    FUNC_22(VAR_31, VAR_64);

   VAR_65 = VAR_64 = FUNC_16(VAR_32);
   VAR_64 &= ~(VAR_46 | VAR_48);
   VAR_64 |= FUNC_9(7) | FUNC_11(7);
   if (VAR_65 != VAR_64)
    FUNC_22(VAR_32, VAR_64);

   if ((VAR_63->family != VAR_4) && (VAR_63->family != VAR_3)) {
    VAR_65 = VAR_64 = FUNC_15(VAR_26);
    VAR_64 &= ~VAR_49;
    if (VAR_65 != VAR_64)
     FUNC_21(VAR_26, VAR_64);

    VAR_65 = VAR_64 = FUNC_15(VAR_27);
    VAR_64 &= ~VAR_50;
    if (VAR_65 != VAR_64)
     FUNC_21(VAR_27, VAR_64);

    VAR_65 = VAR_64 = FUNC_15(VAR_28);
    VAR_64 &= ~VAR_51;
    if (VAR_65 != VAR_64)
     FUNC_21(VAR_28, VAR_64);

    VAR_65 = VAR_64 = FUNC_15(VAR_29);
    VAR_64 &= ~VAR_52;
    if (VAR_65 != VAR_64)
     FUNC_21(VAR_29, VAR_64);

    VAR_65 = VAR_64 = FUNC_16(VAR_31);
    VAR_64 &= ~VAR_49;
    if (VAR_65 != VAR_64)
     FUNC_22(VAR_31, VAR_64);

    VAR_65 = VAR_64 = FUNC_16(VAR_32);
    VAR_64 &= ~VAR_50;
    if (VAR_65 != VAR_64)
     FUNC_22(VAR_32, VAR_64);

    VAR_65 = VAR_64 = FUNC_16(VAR_33);
    VAR_64 &= ~VAR_51;
    if (VAR_65 != VAR_64)
     FUNC_22(VAR_33, VAR_64);

    VAR_65 = VAR_64 = FUNC_16(VAR_34);
    VAR_64 &= ~VAR_52;
    if (VAR_65 != VAR_64)
     FUNC_22(VAR_34, VAR_64);
   }
   VAR_65 = VAR_64 = FUNC_14(VAR_39);
   VAR_64 &= ~VAR_10;
   VAR_64 |= FUNC_2(3);
   if (VAR_65 != VAR_64)
    FUNC_20(VAR_39, VAR_64);

   VAR_65 = VAR_64 = FUNC_15(VAR_25);
   VAR_64 &= ~VAR_20;
   if ((VAR_63->family == VAR_4) || (VAR_63->family == VAR_3))
    VAR_64 |= FUNC_6(5);
   if (VAR_65 != VAR_64)
    FUNC_21(VAR_25, VAR_64);

   VAR_65 = VAR_64 = FUNC_16(VAR_30);
   VAR_64 &= ~VAR_20;
   if ((VAR_63->family == VAR_4) || (VAR_63->family == VAR_3))
    VAR_64 |= FUNC_6(5);
   if (VAR_65 != VAR_64)
    FUNC_22(VAR_30, VAR_64);

   if (!VAR_69 &&
       !FUNC_24(VAR_63->pdev->bus)) {
    struct pci_dev *VAR_71 = VAR_63->pdev->bus->self;
    u32 VAR_72;

    VAR_70 = 0;
    FUNC_25(VAR_71, VAR_43, &VAR_72);
    if (VAR_72 & VAR_44)
     VAR_70 = 1;
   } else {
    VAR_70 = 0;
   }

   if (VAR_70) {
    VAR_65 = VAR_64 = FUNC_14(VAR_37);
    VAR_64 |= VAR_8 | VAR_9;
    if (VAR_65 != VAR_64)
     FUNC_20(VAR_37, VAR_64);

    VAR_65 = VAR_64 = FUNC_12(VAR_59);
    VAR_64 &= ~(VAR_5 | VAR_60);
    VAR_64 |= FUNC_0(1) | FUNC_17(1);
    if (VAR_65 != VAR_64)
     FUNC_18(VAR_59, VAR_64);

    VAR_65 = VAR_64 = FUNC_12(VAR_21);
    VAR_64 &= ~(VAR_6 | VAR_61);
    VAR_64 |= FUNC_1(1) | FUNC_23(1);
    if (VAR_65 != VAR_64)
     FUNC_18(VAR_21, VAR_64);

    VAR_65 = VAR_64 = FUNC_12(VAR_1);
    VAR_64 &= ~VAR_0;
    if (VAR_65 != VAR_64)
     FUNC_18(VAR_1, VAR_64);

    VAR_65 = VAR_64 = FUNC_12(VAR_2);
    VAR_64 &= ~VAR_7;
    if (VAR_65 != VAR_64)
     FUNC_18(VAR_2, VAR_64);

    VAR_65 = VAR_64 = FUNC_12(VAR_22);
    VAR_64 &= ~VAR_23;
    VAR_64 |= FUNC_7(4);
    if (VAR_65 != VAR_64)
     FUNC_18(VAR_22, VAR_64);

    VAR_65 = VAR_64 = FUNC_12(VAR_57);
    VAR_64 &= ~VAR_58;
    if (VAR_65 != VAR_64)
     FUNC_18(VAR_57, VAR_64);
   }
  }
 } else {
  if (VAR_65 != VAR_64)
   FUNC_20(VAR_36, VAR_64);
 }

 VAR_65 = VAR_64 = FUNC_13(VAR_35);
 VAR_64 |= VAR_56 | VAR_24 | VAR_55;
 if (VAR_65 != VAR_64)
  FUNC_19(VAR_35, VAR_64);

 if (!VAR_66) {
  VAR_64 = FUNC_14(VAR_40);
  if((VAR_64 & VAR_14) == VAR_14) {
   VAR_64 = FUNC_13(VAR_41);
   if ((VAR_64 & VAR_17) && (VAR_64 & VAR_16)) {
    VAR_65 = VAR_64 = FUNC_14(VAR_36);
    VAR_64 &= ~VAR_12;
    if (VAR_65 != VAR_64)
     FUNC_20(VAR_36, VAR_64);
   }
  }
 }
}
