
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a6xx_gmu {int initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct a6xx_gmu*,int ) ;

bool FUNC_1(struct a6xx_gmu *VAR_2)
{
 u32 VAR_3;

 if (!VAR_2->initialized)
  return 1;

 VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (VAR_3 & VAR_0)
  return 0;

 return 1;
}
