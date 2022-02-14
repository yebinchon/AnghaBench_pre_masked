
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int flags; TYPE_1__* pdev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {struct pci_dev* self; } ;
struct TYPE_3__ {TYPE_2__* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int) ;
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
 int FUNC_7 (int) ;
 int VAR_36 ;
 int FUNC_8 (int) ;
 int VAR_37 ;
 int FUNC_9 (int) ;
 int VAR_38 ;
 int FUNC_10 (int) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_13 (int) ;
 int VAR_46 ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int) ;
 int VAR_47 ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (struct pci_dev*,int ,int*) ;
 scalar_t__ VAR_48 ;

__attribute__((used)) static void FUNC_19(struct radeon_device *VAR_49)
{
 u32 VAR_50, VAR_51;
 bool VAR_52 = 0, VAR_53 = 0, VAR_54 = 0;
 bool VAR_55 = 0;

 if (VAR_48 == 0)
  return;


 if (VAR_49->flags & VAR_41)
  return;

 if (!(VAR_49->flags & VAR_42))
  return;

 VAR_51 = VAR_50 = FUNC_11(VAR_31);
 VAR_50 &= ~VAR_16;
 VAR_50 |= FUNC_5(0x24) | VAR_17;
 if (VAR_51 != VAR_50)
  FUNC_14(VAR_31, VAR_50);

 VAR_51 = VAR_50 = FUNC_11(VAR_29);
 VAR_50 |= VAR_9;
 if (VAR_51 != VAR_50)
  FUNC_14(VAR_29, VAR_50);

 VAR_51 = VAR_50 = FUNC_11(VAR_33);
 VAR_50 |= VAR_40;
 if (VAR_51 != VAR_50)
  FUNC_14(VAR_33, VAR_50);

 VAR_51 = VAR_50 = FUNC_11(VAR_27);
 VAR_50 &= ~(VAR_10 | VAR_11);
 VAR_50 |= VAR_13;
 if (!VAR_52)
  VAR_50 |= FUNC_3(7);

 if (!VAR_53) {
  VAR_50 |= FUNC_4(7);
  VAR_50 &= ~VAR_13;
  if (VAR_51 != VAR_50)
   FUNC_14(VAR_27, VAR_50);

  if (!VAR_54) {
   bool VAR_56;

   VAR_51 = VAR_50 = FUNC_11(VAR_22);
   VAR_50 &= ~(VAR_36 | VAR_38);
   VAR_50 |= FUNC_7(7) | FUNC_9(7);
   if (VAR_51 != VAR_50)
    FUNC_14(VAR_22, VAR_50);

   VAR_51 = VAR_50 = FUNC_11(VAR_23);
   VAR_50 &= ~(VAR_37 | VAR_39);
   VAR_50 |= FUNC_8(7) | FUNC_10(7);
   if (VAR_51 != VAR_50)
    FUNC_14(VAR_23, VAR_50);

   VAR_51 = VAR_50 = FUNC_11(VAR_24);
   VAR_50 &= ~(VAR_36 | VAR_38);
   VAR_50 |= FUNC_7(7) | FUNC_9(7);
   if (VAR_51 != VAR_50)
    FUNC_14(VAR_24, VAR_50);

   VAR_51 = VAR_50 = FUNC_11(VAR_25);
   VAR_50 &= ~(VAR_37 | VAR_39);
   VAR_50 |= FUNC_8(7) | FUNC_10(7);
   if (VAR_51 != VAR_50)
    FUNC_14(VAR_25, VAR_50);

   VAR_51 = VAR_50 = FUNC_11(VAR_30);
   VAR_50 &= ~VAR_8;
   VAR_50 |= FUNC_2(3);
   if (VAR_51 != VAR_50)
    FUNC_14(VAR_30, VAR_50);

   if (!VAR_55 &&
       !FUNC_17(VAR_49->pdev->bus)) {
    struct pci_dev *VAR_57 = VAR_49->pdev->bus->self;
    u32 VAR_58;

    VAR_56 = 0;
    FUNC_18(VAR_57, VAR_34, &VAR_58);
    if (VAR_58 & VAR_35)
     VAR_56 = 1;
   } else {
    VAR_56 = 0;
   }

   if (VAR_56) {
    VAR_51 = VAR_50 = FUNC_11(VAR_28);
    VAR_50 |= VAR_6 | VAR_7;
    if (VAR_51 != VAR_50)
     FUNC_14(VAR_28, VAR_50);

    VAR_51 = VAR_50 = FUNC_12(VAR_45);
    VAR_50 &= ~(VAR_3 | VAR_46);
    VAR_50 |= FUNC_0(1) | FUNC_13(1);
    if (VAR_51 != VAR_50)
     FUNC_15(VAR_45, VAR_50);

    VAR_51 = VAR_50 = FUNC_12(VAR_18);
    VAR_50 &= ~(VAR_4 | VAR_47);
    VAR_50 |= FUNC_1(1) | FUNC_16(1);
    if (VAR_51 != VAR_50)
     FUNC_15(VAR_18, VAR_50);

    VAR_51 = VAR_50 = FUNC_12(VAR_1);
    VAR_50 &= ~VAR_0;
    if (VAR_51 != VAR_50)
     FUNC_15(VAR_1, VAR_50);

    VAR_51 = VAR_50 = FUNC_12(VAR_2);
    VAR_50 &= ~VAR_5;
    if (VAR_51 != VAR_50)
     FUNC_15(VAR_2, VAR_50);

    VAR_51 = VAR_50 = FUNC_12(VAR_19);
    VAR_50 &= ~VAR_20;
    VAR_50 |= FUNC_6(4);
    if (VAR_51 != VAR_50)
     FUNC_15(VAR_19, VAR_50);
   }
  }
 } else {
  if (VAR_51 != VAR_50)
   FUNC_14(VAR_27, VAR_50);
 }

 VAR_51 = VAR_50 = FUNC_11(VAR_26);
 VAR_50 |= VAR_44 | VAR_21 | VAR_43;
 if (VAR_51 != VAR_50)
  FUNC_14(VAR_26, VAR_50);

 if (!VAR_52) {
  VAR_50 = FUNC_11(VAR_31);
  if((VAR_50 & VAR_12) == VAR_12) {
   VAR_50 = FUNC_11(VAR_32);
   if ((VAR_50 & VAR_15) && (VAR_50 & VAR_14)) {
    VAR_51 = VAR_50 = FUNC_11(VAR_27);
    VAR_50 &= ~VAR_10;
    if (VAR_51 != VAR_50)
     FUNC_14(VAR_27, VAR_50);
   }
  }
 }
}
