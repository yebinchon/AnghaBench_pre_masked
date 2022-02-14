
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arm_v7s_iopte ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(arm_v7s_iopte VAR_2, int VAR_3)
{
 if (VAR_3 == 1 && !FUNC_0(VAR_2, VAR_3))
  return VAR_2 & VAR_0;
 else if (VAR_3 == 2)
  return !(VAR_2 & VAR_1);
 return 0;
}
