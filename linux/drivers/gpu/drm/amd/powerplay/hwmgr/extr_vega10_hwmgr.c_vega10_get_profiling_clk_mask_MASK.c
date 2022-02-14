
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pp_hwmgr {int pstate_mclk; int pstate_sclk; scalar_t__ pptable; } ;
struct phm_ppt_v2_information {TYPE_5__* vdd_dep_on_mclk; TYPE_4__* vdd_dep_on_socclk; TYPE_3__* vdd_dep_on_sclk; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
struct TYPE_10__ {size_t count; TYPE_2__* entries; } ;
struct TYPE_9__ {scalar_t__ count; } ;
struct TYPE_8__ {size_t count; TYPE_1__* entries; } ;
struct TYPE_7__ {int clk; } ;
struct TYPE_6__ {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_6, enum amd_dpm_forced_level VAR_7,
    uint32_t *VAR_8, uint32_t *VAR_9, uint32_t *VAR_10)
{
 struct phm_ppt_v2_information *VAR_11 =
   (struct phm_ppt_v2_information *)(VAR_6->pptable);

 if (VAR_11->vdd_dep_on_sclk->count > VAR_3 &&
  VAR_11->vdd_dep_on_socclk->count > VAR_5 &&
  VAR_11->vdd_dep_on_mclk->count > VAR_4) {
  *VAR_8 = VAR_3;
  *VAR_10 = VAR_5;
  *VAR_9 = VAR_4;
  VAR_6->pstate_sclk = VAR_11->vdd_dep_on_sclk->entries[VAR_3].clk;
  VAR_6->pstate_mclk = VAR_11->vdd_dep_on_mclk->entries[VAR_4].clk;
 }

 if (VAR_7 == VAR_1) {
  *VAR_8 = 0;
 } else if (VAR_7 == VAR_0) {
  *VAR_9 = 0;
 } else if (VAR_7 == VAR_2) {
  *VAR_8 = VAR_11->vdd_dep_on_sclk->count - 1;
  *VAR_10 = VAR_11->vdd_dep_on_socclk->count - 1;
  *VAR_9 = VAR_11->vdd_dep_on_mclk->count - 1;
 }
 return 0;
}
