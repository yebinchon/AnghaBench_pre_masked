
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct SPU2_FMD {int ctrl1; } ;


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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct SPU2_FMD *VAR_20, bool VAR_21,
     u64 VAR_22,
     u64 VAR_23, u64 VAR_24,
     bool VAR_25, bool VAR_26, bool VAR_27,
     u64 VAR_28, u64 VAR_29,
     u64 VAR_30, u64 VAR_31,
     bool VAR_32, bool VAR_33)
{
 u64 VAR_34 = 0;

 if (VAR_21 && VAR_31)
  VAR_34 |= VAR_19;

 if (VAR_22) {
  VAR_34 |= VAR_8;
  VAR_34 |= VAR_12;
 }

 if (VAR_23)
  VAR_34 |= ((VAR_23 << VAR_5) &
     VAR_4);

 if (VAR_24)
  VAR_34 |= ((VAR_24 << VAR_1) &
     VAR_0);

 if (VAR_25)
  VAR_34 |= VAR_2;

 if (VAR_26)
  VAR_34 |= VAR_3;

 if (VAR_27) {
  VAR_34 |= VAR_16;
  VAR_34 |= VAR_28 << VAR_17;
  VAR_34 |= VAR_29 << VAR_11;
 }

 VAR_34 |= ((VAR_30 << VAR_10) & VAR_9);

 if (VAR_31)
  VAR_34 |= ((VAR_31 << VAR_7) &
     VAR_6);




 if (VAR_33)
  VAR_34 |= ((u64)VAR_15 << VAR_13);
 else
  VAR_34 |= ((u64)VAR_18 << VAR_13);



 if (VAR_32)
  VAR_34 |= VAR_14;

 VAR_20->ctrl1 = FUNC_0(VAR_34);
}
