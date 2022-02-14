
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
typedef int USHORT ;
typedef int PP_StateClassificationFlags ;


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

__attribute__((used)) static PP_StateClassificationFlags FUNC_0(
         struct pp_hwmgr *VAR_30,
          USHORT VAR_31,
         USHORT VAR_32)
{
 PP_StateClassificationFlags VAR_33 = 0;

 if (VAR_31 & VAR_5)
  VAR_33 |= VAR_18;

 if (VAR_31 & VAR_13)
  VAR_33 |= VAR_24;

 if (VAR_31 &
   VAR_9)
  VAR_33 |= VAR_21;

 if (VAR_31 & VAR_11)
  VAR_33 |= VAR_23;

 if (VAR_31 & VAR_6)
  VAR_33 |= VAR_19;

 if (VAR_31 & VAR_3)
  VAR_33 |= VAR_15;


 if (VAR_31 & VAR_10)
  VAR_33 |= VAR_16;

 if (VAR_31 & VAR_14)
  VAR_33 |= VAR_26;

 if (VAR_31 & VAR_8)
  VAR_33 |= VAR_27;

 if (VAR_31 & VAR_12)
  VAR_33 |= VAR_29;

 if (VAR_31 & VAR_7)
  VAR_33 |= VAR_20;

 if (VAR_31 & VAR_4)
  VAR_33 |= VAR_17;

 if (VAR_32 & VAR_0)
  VAR_33 |= VAR_22;


 if (VAR_32 & VAR_2)
  VAR_33 |= VAR_25;

 if (VAR_32 & VAR_1)
  VAR_33 |= VAR_28;

 return VAR_33;
}
