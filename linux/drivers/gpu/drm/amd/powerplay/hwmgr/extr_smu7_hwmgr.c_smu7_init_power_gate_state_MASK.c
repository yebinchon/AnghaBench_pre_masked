
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {int uvd_power_gated; int vce_power_gated; } ;
struct pp_hwmgr {scalar_t__ backend; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct smu7_hwmgr *VAR_1 = (struct smu7_hwmgr *)(VAR_0->backend);

 VAR_1->uvd_power_gated = 0;
 VAR_1->vce_power_gated = 0;

 return 0;
}
