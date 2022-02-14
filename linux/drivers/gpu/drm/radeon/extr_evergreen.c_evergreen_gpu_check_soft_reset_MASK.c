
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int) ;
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
 int FUNC_1 (int ) ;
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
 scalar_t__ FUNC_2 (struct radeon_device*) ;

u32 FUNC_3(struct radeon_device *VAR_43)
{
 u32 VAR_44 = 0;
 u32 VAR_45;


 VAR_45 = FUNC_1(VAR_10);
 if (VAR_45 & (VAR_17 | VAR_31 |
     VAR_33 | VAR_37 |
     VAR_38 | VAR_39 |
     VAR_4 | VAR_0 |
     VAR_34 | VAR_40))
  VAR_44 |= VAR_22;

 if (VAR_45 & (VAR_1 | VAR_18 |
     VAR_2 | VAR_3))
  VAR_44 |= VAR_19;

 if (VAR_45 & VAR_8)
  VAR_44 |= VAR_23 | VAR_22 | VAR_19;


 VAR_45 = FUNC_1(VAR_7);
 if (!(VAR_45 & VAR_6))
  VAR_44 |= VAR_21;


 VAR_45 = FUNC_1(VAR_36);
 if (VAR_45 & VAR_5)
  VAR_44 |= VAR_21;


 VAR_45 = FUNC_1(VAR_35);
 if (VAR_45 & (VAR_30 | VAR_29))
  VAR_44 |= VAR_26;

 if (VAR_45 & VAR_11)
  VAR_44 |= VAR_24;

 if (VAR_45 & VAR_32)
  VAR_44 |= VAR_27;

 if (VAR_45 & VAR_9)
  VAR_44 |= VAR_23;

 if (VAR_45 & VAR_41)
  VAR_44 |= VAR_28;

 if (VAR_45 & (VAR_13 | VAR_14 |
     VAR_15 | VAR_16))
  VAR_44 |= VAR_25;

 if (FUNC_2(VAR_43))
  VAR_44 |= VAR_20;


 VAR_45 = FUNC_1(VAR_42);
 if (VAR_45 & VAR_12)
  VAR_44 |= VAR_28;


 if (VAR_44 & VAR_25) {
  FUNC_0("MC busy: 0x%08X, clearing.\n", VAR_44);
  VAR_44 &= ~VAR_25;
 }

 return VAR_44;
}
