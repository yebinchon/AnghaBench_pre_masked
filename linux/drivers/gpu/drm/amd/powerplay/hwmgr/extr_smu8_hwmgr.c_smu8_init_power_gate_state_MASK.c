
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_hwmgr {int uvd_power_gated; int vce_power_gated; int samu_power_gated; int acp_power_gated; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct smu8_hwmgr *VAR_2 = VAR_1->backend;

 VAR_2->uvd_power_gated = 0;
 VAR_2->vce_power_gated = 0;
 VAR_2->samu_power_gated = 0;



 FUNC_0(VAR_1, VAR_0);
 VAR_2->acp_power_gated = 1;


}
