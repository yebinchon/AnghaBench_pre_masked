
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
 int FUNC_0 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int FUNC_1 (scalar_t__) ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;

u32 FUNC_3(struct radeon_device *VAR_44)
{
 u32 VAR_45 = 0;
 u32 VAR_46;


 VAR_46 = FUNC_1(VAR_7);
 if (VAR_46 & (VAR_16 | VAR_29 |
     VAR_0 | VAR_40 |
     VAR_41 | VAR_42 |
     VAR_4 | VAR_1 |
     VAR_5 | VAR_37 |
     VAR_9 | VAR_10))
  VAR_45 |= VAR_21;

 if (VAR_46 & (VAR_2 | VAR_3))
  VAR_45 |= VAR_17;


 VAR_46 = FUNC_1(VAR_8);
 if (VAR_46 & VAR_28)
  VAR_45 |= VAR_25;


 VAR_46 = FUNC_1(VAR_31 + VAR_30);
 if (!(VAR_46 & VAR_35))
  VAR_45 |= VAR_19;


 VAR_46 = FUNC_1(VAR_31 + VAR_33);
 if (!(VAR_46 & VAR_35))
  VAR_45 |= VAR_20;


 VAR_46 = FUNC_1(VAR_39);
 if (VAR_46 & VAR_34)
  VAR_45 |= VAR_19;

 if (VAR_46 & VAR_32)
  VAR_45 |= VAR_20;


 VAR_46 = FUNC_1(VAR_38);

 if (VAR_46 & VAR_11)
  VAR_45 |= VAR_23;

 if (VAR_46 & VAR_36)
  VAR_45 |= VAR_26;

 if (VAR_46 & VAR_6)
  VAR_45 |= VAR_22;

 if (VAR_46 & VAR_43)
  VAR_45 |= VAR_27;

 if (VAR_46 & (VAR_12 | VAR_13 |
     VAR_14 | VAR_15))
  VAR_45 |= VAR_24;

 if (FUNC_2(VAR_44))
  VAR_45 |= VAR_18;


 if (VAR_45 & VAR_24) {
  FUNC_0("MC busy: 0x%08X, clearing.\n", VAR_45);
  VAR_45 &= ~VAR_24;
 }

 return VAR_45;
}
