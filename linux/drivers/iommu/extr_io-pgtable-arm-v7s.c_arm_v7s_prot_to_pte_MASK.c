
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int quirks; } ;
typedef int arm_v7s_iopte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
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

__attribute__((used)) static arm_v7s_iopte FUNC_3(int VAR_16, int VAR_17,
      struct io_pgtable_cfg *VAR_18)
{
 bool VAR_19 = !(VAR_18->quirks & VAR_15);
 arm_v7s_iopte VAR_20 = VAR_2 | VAR_4;

 if (!(VAR_16 & VAR_10))
  VAR_20 |= FUNC_1(1);
 if (VAR_19) {
  VAR_20 |= VAR_5;
  if (!(VAR_16 & VAR_12))
   VAR_20 |= VAR_7;
  if (!(VAR_16 & VAR_13))
   VAR_20 |= VAR_6;
 }
 VAR_20 <<= FUNC_0(VAR_17);

 if ((VAR_16 & VAR_11) && VAR_19)
  VAR_20 |= FUNC_2(VAR_17);
 if (VAR_16 & VAR_10)
  VAR_20 |= VAR_0;
 else if (VAR_16 & VAR_9)
  VAR_20 |= VAR_0 | VAR_1;

 VAR_20 |= VAR_8;
 if (VAR_17 == 1 && (VAR_18->quirks & VAR_14))
  VAR_20 |= VAR_3;

 return VAR_20;
}
