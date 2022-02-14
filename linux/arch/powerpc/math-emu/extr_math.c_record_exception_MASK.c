
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


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

__attribute__((used)) static int
FUNC_0(struct pt_regs *VAR_36, int VAR_37)
{
 u32 VAR_38;

 VAR_38 = VAR_35;

 if (VAR_37) {
  VAR_38 |= VAR_15;
  if (VAR_37 & VAR_3)
   VAR_38 |= VAR_17;
  if (VAR_37 & VAR_4)
   VAR_38 |= VAR_19;
  if (VAR_37 & VAR_0)
   VAR_38 |= VAR_34;
  if (VAR_37 & VAR_1)
   VAR_38 |= VAR_32;
  if (VAR_37 & VAR_2)
   VAR_38 |= VAR_21;
  if (VAR_37 & VAR_9)
   VAR_38 |= VAR_26;
  if (VAR_37 & VAR_8)
   VAR_38 |= VAR_25;
  if (VAR_37 & VAR_6)
   VAR_38 |= VAR_23;
  if (VAR_37 & VAR_13)
   VAR_38 |= VAR_30;
  if (VAR_37 & VAR_7)
   VAR_38 |= VAR_24;
  if (VAR_37 & VAR_12)
   VAR_38 |= VAR_29;
  if (VAR_37 & VAR_10)
   VAR_38 |= VAR_27;
  if (VAR_37 & VAR_11)
   VAR_38 |= VAR_28;
  if (VAR_37 & VAR_5)
   VAR_38 |= VAR_22;
 }


 if (VAR_38 & (VAR_26 | VAR_25 | VAR_23 |
       VAR_30 | VAR_24 | VAR_29 |
       VAR_27 | VAR_28 | VAR_22))
  VAR_38 |= VAR_21;

 VAR_38 &= ~(VAR_14);
 if (((VAR_38 & VAR_21) && (VAR_38 & VAR_20)) ||
     ((VAR_38 & VAR_17) && (VAR_38 & VAR_16)) ||
     ((VAR_38 & VAR_19) && (VAR_38 & VAR_18)) ||
     ((VAR_38 & VAR_34) && (VAR_38 & VAR_33)) ||
     ((VAR_38 & VAR_32) && (VAR_38 & VAR_31)))
  VAR_38 |= VAR_14;

 VAR_35 = VAR_38;

 return (VAR_38 & VAR_14) ? 1 : 0;
}
