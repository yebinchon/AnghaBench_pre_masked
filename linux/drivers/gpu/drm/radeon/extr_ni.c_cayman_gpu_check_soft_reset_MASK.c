
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
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
 int FUNC_1 (scalar_t__) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;

u32 FUNC_3(struct radeon_device *VAR_49)
{
 u32 VAR_50 = 0;
 u32 VAR_51;


 VAR_51 = FUNC_1(VAR_14);
 if (VAR_51 & (VAR_23 | VAR_38 |
     VAR_40 | VAR_44 |
     VAR_45 | VAR_46 |
     VAR_4 | VAR_0 |
     VAR_11 | VAR_41 |
     VAR_15 | VAR_16))
  VAR_50 |= VAR_29;

 if (VAR_51 & (VAR_1 | VAR_24 |
     VAR_2 | VAR_3))
  VAR_50 |= VAR_25;

 if (VAR_51 & VAR_12)
  VAR_50 |= VAR_30 | VAR_29 | VAR_25;


 VAR_51 = FUNC_1(VAR_10 + VAR_5);
 if (!(VAR_51 & VAR_9))
  VAR_50 |= VAR_27;


 VAR_51 = FUNC_1(VAR_10 + VAR_7);
 if (!(VAR_51 & VAR_9))
  VAR_50 |= VAR_28;


 VAR_51 = FUNC_1(VAR_43);
 if (VAR_51 & VAR_8)
  VAR_50 |= VAR_27;

 if (VAR_51 & VAR_6)
  VAR_50 |= VAR_28;


 VAR_51 = FUNC_1(VAR_42);
 if (VAR_51 & (VAR_37 | VAR_36))
  VAR_50 |= VAR_33;

 if (VAR_51 & VAR_17)
  VAR_50 |= VAR_31;

 if (VAR_51 & VAR_39)
  VAR_50 |= VAR_34;

 if (VAR_51 & VAR_13)
  VAR_50 |= VAR_30;

 if (VAR_51 & VAR_47)
  VAR_50 |= VAR_35;

 if (VAR_51 & (VAR_19 | VAR_20 |
     VAR_21 | VAR_22))
  VAR_50 |= VAR_32;

 if (FUNC_2(VAR_49))
  VAR_50 |= VAR_26;


 VAR_51 = FUNC_1(VAR_48);
 if (VAR_51 & VAR_18)
  VAR_50 |= VAR_35;


 if (VAR_50 & VAR_32) {
  FUNC_0("MC busy: 0x%08X, clearing.\n", VAR_50);
  VAR_50 &= ~VAR_32;
 }

 return VAR_50;
}
