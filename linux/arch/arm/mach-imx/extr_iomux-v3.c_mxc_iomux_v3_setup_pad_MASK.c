
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int iomux_v3_cfg_t ;


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
 int FUNC_0 (int,int) ;

int FUNC_1(iomux_v3_cfg_t VAR_14)
{
 u32 VAR_15 = (VAR_14 & VAR_0) >> VAR_1;
 u32 VAR_16 = (VAR_14 & VAR_2) >> VAR_3;
 u32 VAR_17 = (VAR_14 & VAR_9) >> VAR_10;
 u32 VAR_18 = (VAR_14 & VAR_8) >> VAR_11;
 u32 VAR_19 = (VAR_14 & VAR_5) >> VAR_6;
 u32 VAR_20 = (VAR_14 & VAR_4) >> VAR_7;

 if (VAR_15)
  FUNC_0(VAR_16, VAR_13 + VAR_15);

 if (VAR_17)
  FUNC_0(VAR_18, VAR_13 + VAR_17);

 if (!(VAR_20 & VAR_12) && VAR_19)
  FUNC_0(VAR_20, VAR_13 + VAR_19);

 return 0;
}
