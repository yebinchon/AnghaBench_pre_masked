
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arm_v7s_iopte ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
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

__attribute__((used)) static int FUNC_2(arm_v7s_iopte VAR_11, int VAR_12)
{
 int VAR_13 = VAR_9;
 arm_v7s_iopte VAR_14 = VAR_11 >> FUNC_0(VAR_12);

 if (!(VAR_14 & VAR_1))
  VAR_13 |= VAR_10;
 if (!(VAR_14 & VAR_2))
  VAR_13 |= VAR_8;
 if ((VAR_14 & (VAR_3 << VAR_4)) == 0)
  VAR_13 |= VAR_6;
 else if (VAR_11 & VAR_0)
  VAR_13 |= VAR_5;
 if (VAR_11 & FUNC_1(VAR_12))
  VAR_13 |= VAR_7;

 return VAR_13;
}
