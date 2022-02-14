
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vega10_hwmgr {scalar_t__ low_sclk_interrupt_threshold; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct vega10_hwmgr *VAR_1 = VAR_0->backend;

 VAR_1->low_sclk_interrupt_threshold = 0;

 return 0;
}
