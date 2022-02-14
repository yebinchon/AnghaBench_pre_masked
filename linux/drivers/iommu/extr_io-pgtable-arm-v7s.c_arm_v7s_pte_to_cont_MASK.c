
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arm_v7s_iopte ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static arm_v7s_iopte FUNC_1(arm_v7s_iopte VAR_6, int VAR_7)
{
 if (VAR_7 == 1) {
  VAR_6 |= VAR_3;
 } else if (VAR_7 == 2) {
  arm_v7s_iopte VAR_8 = VAR_6 & FUNC_0(VAR_7);
  arm_v7s_iopte VAR_9 = VAR_6 & VAR_0;

  VAR_6 ^= VAR_8 | VAR_9 | VAR_5;
  VAR_6 |= (VAR_8 << VAR_2) |
         (VAR_9 << VAR_1) |
         VAR_4;
 }
 return VAR_6;
}
