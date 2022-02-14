
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_hwmgr {int acp_power_gated; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_2, bool VAR_3)
{
 struct smu8_hwmgr *VAR_4 = VAR_2->backend;

 if (VAR_4->acp_power_gated == VAR_3)
  return;

 if (VAR_3)
  FUNC_0(VAR_2, VAR_0);
 else
  FUNC_0(VAR_2, VAR_1);
}
