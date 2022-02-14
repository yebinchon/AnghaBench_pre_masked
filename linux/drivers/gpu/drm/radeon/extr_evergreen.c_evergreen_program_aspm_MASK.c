
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int flags; int family; } ;



 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
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
 int FUNC_4 (int) ;
 int VAR_17 ;
 int FUNC_5 (int) ;
 int VAR_18 ;
 int FUNC_6 (int) ;
 int VAR_19 ;
 int FUNC_7 (int) ;
 int VAR_20 ;
 int FUNC_8 (int) ;
 int VAR_21 ;
 int FUNC_9 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;
 scalar_t__ VAR_25 ;

void FUNC_16(struct radeon_device *VAR_26)
{
 u32 VAR_27, VAR_28;
 u32 VAR_29, VAR_30;
 bool VAR_31, VAR_32 = 0, VAR_33 = 0;





 bool VAR_34 = 0;

 if (VAR_25 == 0)
  return;

 if (!(VAR_26->flags & VAR_24))
  return;

 switch (VAR_26->family) {
 case 134:
 case 133:
 case 132:
 case 130:
 case 135:
 case 129:
 case 128:
 case 131:
 case 136:
  VAR_31 = 1;
  break;
 default:
  VAR_31 = 0;
  break;
 }

 if (VAR_26->flags & VAR_23)
  VAR_34 = 1;

 VAR_27 = VAR_28 = FUNC_11(VAR_8);
 if (VAR_34)
  VAR_27 &= ~VAR_6;
 else
  VAR_27 |= VAR_6;
 if (VAR_27 != VAR_28)
  FUNC_14(VAR_8, VAR_27);

 VAR_27 = VAR_28 = FUNC_12(VAR_12);
 if (VAR_34)
  VAR_27 &= ~VAR_6;
 else
  VAR_27 |= VAR_6;
 if (VAR_27 != VAR_28)
  FUNC_15(VAR_12, VAR_27);

 VAR_29 = VAR_30 = FUNC_10(VAR_15);
 VAR_29 &= ~(VAR_2 | VAR_3);
 if (!VAR_31) {
  if (VAR_26->family >= VAR_0)
   VAR_29 |= FUNC_1(7);
  else
   VAR_29 |= FUNC_1(3);
 }

 if (!VAR_32) {
  if (VAR_26->family >= VAR_0)
   VAR_29 |= FUNC_2(7);
  else
   VAR_29 |= FUNC_2(8);

  if (!VAR_33) {
   VAR_27 = VAR_28 = FUNC_11(VAR_9);
   VAR_27 &= ~(VAR_17 | VAR_19);
   VAR_27 |= FUNC_4(7) | FUNC_6(7);
   if (VAR_27 != VAR_28)
    FUNC_14(VAR_9, VAR_27);

   VAR_27 = VAR_28 = FUNC_11(VAR_10);
   VAR_27 &= ~(VAR_18 | VAR_20);
   VAR_27 |= FUNC_5(7) | FUNC_7(7);
   if (VAR_27 != VAR_28)
    FUNC_14(VAR_10, VAR_27);

   VAR_27 = VAR_28 = FUNC_12(VAR_13);
   VAR_27 &= ~(VAR_17 | VAR_19);
   VAR_27 |= FUNC_4(7) | FUNC_6(7);
   if (VAR_27 != VAR_28)
    FUNC_15(VAR_13, VAR_27);

   VAR_27 = VAR_28 = FUNC_12(VAR_14);
   VAR_27 &= ~(VAR_18 | VAR_20);
   VAR_27 |= FUNC_5(7) | FUNC_7(7);
   if (VAR_27 != VAR_28)
    FUNC_15(VAR_14, VAR_27);

   if (VAR_26->family >= VAR_0) {
    VAR_27 = VAR_28 = FUNC_11(VAR_9);
    VAR_27 &= ~VAR_21;
    VAR_27 |= FUNC_8(4);
    if (VAR_27 != VAR_28)
     FUNC_14(VAR_9, VAR_27);

    VAR_27 = VAR_28 = FUNC_11(VAR_10);
    VAR_27 &= ~VAR_22;
    VAR_27 |= FUNC_9(4);
    if (VAR_27 != VAR_28)
     FUNC_14(VAR_10, VAR_27);

    VAR_27 = VAR_28 = FUNC_12(VAR_13);
    VAR_27 &= ~VAR_21;
    VAR_27 |= FUNC_8(4);
    if (VAR_27 != VAR_28)
     FUNC_15(VAR_13, VAR_27);

    VAR_27 = VAR_28 = FUNC_12(VAR_14);
    VAR_27 &= ~VAR_22;
    VAR_27 |= FUNC_9(4);
    if (VAR_27 != VAR_28)
     FUNC_15(VAR_14, VAR_27);
   }

   VAR_27 = VAR_28 = FUNC_10(VAR_16);
   VAR_27 &= ~VAR_1;
   VAR_27 |= FUNC_0(3);
   if (VAR_27 != VAR_28)
    FUNC_13(VAR_16, VAR_27);

   if (VAR_26->family >= VAR_0) {
    VAR_27 = VAR_28 = FUNC_11(VAR_7);
    VAR_27 &= ~VAR_5;
    VAR_27 |= FUNC_3(1);
    if (VAR_27 != VAR_28)
     FUNC_14(VAR_7, VAR_27);

    VAR_27 = VAR_28 = FUNC_12(VAR_11);
    VAR_27 &= ~VAR_5;
    VAR_27 |= FUNC_3(1);
    if (VAR_27 != VAR_28)
     FUNC_15(VAR_11, VAR_27);
   }
  }
 }


 if (VAR_26->family < VAR_0)
  VAR_29 |= VAR_4;

 if (VAR_29 != VAR_30)
  FUNC_13(VAR_15, VAR_29);
}
