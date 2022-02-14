
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

void FUNC_2(u32 VAR_3)
{
 FUNC_1("\tcaps:");
 if (VAR_3 & VAR_1)
  FUNC_0(" single_disp");
 if (VAR_3 & VAR_2)
  FUNC_0(" video");
 if (VAR_3 & VAR_0)
  FUNC_0(" no_dc");
 FUNC_0("\n");
}
