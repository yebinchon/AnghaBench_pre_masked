
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_6__ {scalar_t__ psi1_enable; scalar_t__ psi0_enable; } ;
struct TYPE_4__ {void* UlvPhaseSheddingPsi1; void* UlvPhaseSheddingPsi0; void* UlvGfxclkBypass; void* UlvMp1clkDid; void* UlvSmnclkDid; void* UlvOffsetVid; } ;
struct TYPE_5__ {TYPE_1__ pp_table; } ;
struct vega10_hwmgr {TYPE_3__ vddc_voltage_table; TYPE_2__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {scalar_t__ us_ulv_gfxclk_bypass; scalar_t__ us_ulv_mp1clk_did; scalar_t__ us_ulv_smnclk_did; scalar_t__ us_ulv_voltage_offset; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct vega10_hwmgr *VAR_1 = VAR_0->backend;
 struct phm_ppt_v2_information *VAR_2 =
   (struct phm_ppt_v2_information *)(VAR_0->pptable);

 VAR_1->smc_state_table.pp_table.UlvOffsetVid =
   (uint8_t)VAR_2->us_ulv_voltage_offset;

 VAR_1->smc_state_table.pp_table.UlvSmnclkDid =
   (uint8_t)(VAR_2->us_ulv_smnclk_did);
 VAR_1->smc_state_table.pp_table.UlvMp1clkDid =
   (uint8_t)(VAR_2->us_ulv_mp1clk_did);
 VAR_1->smc_state_table.pp_table.UlvGfxclkBypass =
   (uint8_t)(VAR_2->us_ulv_gfxclk_bypass);
 VAR_1->smc_state_table.pp_table.UlvPhaseSheddingPsi0 =
   (uint8_t)(VAR_1->vddc_voltage_table.psi0_enable);
 VAR_1->smc_state_table.pp_table.UlvPhaseSheddingPsi1 =
   (uint8_t)(VAR_1->vddc_voltage_table.psi1_enable);

 return 0;
}
