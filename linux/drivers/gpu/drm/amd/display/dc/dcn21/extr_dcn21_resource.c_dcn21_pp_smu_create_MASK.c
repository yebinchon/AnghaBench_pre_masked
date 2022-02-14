
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int set_wm_ranges; int get_dpm_clock_table; } ;
struct TYPE_3__ {int ver; } ;
struct pp_smu_funcs {TYPE_2__ rn_funcs; TYPE_1__ ctx; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pp_smu_funcs* FUNC_0 (int,int ) ;

struct pp_smu_funcs *FUNC_1(struct dc_context *VAR_4)
{
 struct pp_smu_funcs *VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);

 VAR_5->ctx.ver = VAR_1;

 VAR_5->rn_funcs.get_dpm_clock_table = VAR_2;
 VAR_5->rn_funcs.set_wm_ranges = VAR_3;

 return VAR_5;
}
