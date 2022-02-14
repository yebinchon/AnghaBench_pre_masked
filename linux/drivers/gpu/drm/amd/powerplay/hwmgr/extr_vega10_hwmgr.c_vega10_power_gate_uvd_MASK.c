
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vega10_hwmgr {int uvd_power_gated; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;


 int FUNC_0 (struct pp_hwmgr*,int) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_0, bool VAR_1)
{
 struct vega10_hwmgr *VAR_2 = VAR_0->backend;

 VAR_2->uvd_power_gated = VAR_1;
 FUNC_0(VAR_0, !VAR_1);
}
