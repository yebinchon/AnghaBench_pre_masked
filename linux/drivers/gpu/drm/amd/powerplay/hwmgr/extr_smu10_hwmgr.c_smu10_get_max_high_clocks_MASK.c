
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
struct amd_pp_simple_clock_info {int engine_max_clock; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0, struct amd_pp_simple_clock_info *VAR_1)
{
 VAR_1->engine_max_clock = 80000;
 return 0;
}
