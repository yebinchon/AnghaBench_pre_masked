
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int options; scalar_t__ htw_seq; int ases; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
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
 scalar_t__ VAR_40 ;
 unsigned int FUNC_0 () ;

__attribute__((used)) static inline unsigned int FUNC_1(struct cpuinfo_mips *VAR_41)
{
 unsigned int VAR_42;

 VAR_42 = FUNC_0();

 if (VAR_42 & VAR_20) {
  VAR_41->ases |= VAR_5;
  VAR_41->options |= VAR_34 | VAR_30;
 }
 if (VAR_42 & VAR_18)
  VAR_41->options |= VAR_34;
 if (VAR_42 & VAR_10)
  VAR_41->options |= VAR_30;
 if (VAR_42 & VAR_11)
  VAR_41->ases |= VAR_0;
 if (VAR_42 & VAR_12) {
  VAR_41->ases |= VAR_1;
  if (VAR_40)
   VAR_41->ases |= VAR_2;
 }
 if (VAR_42 & VAR_24)
  VAR_41->options |= VAR_39;
 if (VAR_42 & VAR_23)
  VAR_41->options |= VAR_38;
 if (VAR_42 & VAR_14)
  VAR_41->options |= VAR_32;
 if (VAR_42 & VAR_16)
  VAR_41->ases |= VAR_3;
 if (VAR_42 & VAR_22)
  VAR_41->options |= VAR_37;
 if (VAR_42 & VAR_13)
  VAR_41->options |= VAR_33;
 if (VAR_42 & VAR_25)
  VAR_41->ases |= VAR_6;
 if (VAR_42 & VAR_19)
  VAR_41->options |= VAR_35;
 if (VAR_42 & VAR_7)
  VAR_41->options |= VAR_27;
 if (VAR_42 & VAR_8)
  VAR_41->options |= VAR_28;
 if (VAR_42 & VAR_15)
  VAR_41->ases |= VAR_4;
 if (VAR_42 & VAR_17) {
  VAR_41->htw_seq = 0;
  VAR_41->options |= VAR_31;
 }
 if (VAR_42 & VAR_9)
  VAR_41->options |= VAR_29;
 if (VAR_42 & VAR_21)
  VAR_41->options |= VAR_36;

 return VAR_42 & VAR_26;
}
