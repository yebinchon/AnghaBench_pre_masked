
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
typedef int PPSMC_Msg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int
FUNC_1(struct pp_hwmgr *VAR_2, bool VAR_3)
{
 PPSMC_Msg VAR_4 = VAR_3 ? (PPSMC_Msg)VAR_0 : (PPSMC_Msg)VAR_1;

 return (FUNC_0(VAR_2, VAR_4) == 0) ? 0 : -1;
}
