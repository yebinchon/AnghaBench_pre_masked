
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* vMPLL_SS2; void* vMPLL_SS1; void* vMPLL_FUNC_CNTL_2; void* vMPLL_FUNC_CNTL_1; void* vMPLL_FUNC_CNTL; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL; void* vMCLK_PWRMGT_CNTL; void* vDLL_CNTL; void* vCG_SPLL_SPREAD_SPECTRUM_2; void* vCG_SPLL_SPREAD_SPECTRUM; void* vCG_SPLL_FUNC_CNTL_4; void* vCG_SPLL_FUNC_CNTL_3; void* vCG_SPLL_FUNC_CNTL_2; void* vCG_SPLL_FUNC_CNTL; } ;
struct smu7_hwmgr {TYPE_1__ clock_registers; } ;
struct pp_hwmgr {int device; scalar_t__ backend; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_16)
{
 struct smu7_hwmgr *VAR_17 = (struct smu7_hwmgr *)(VAR_16->backend);

 VAR_17->clock_registers.vCG_SPLL_FUNC_CNTL =
  FUNC_0(VAR_16->device, VAR_0, VAR_1);
 VAR_17->clock_registers.vCG_SPLL_FUNC_CNTL_2 =
  FUNC_0(VAR_16->device, VAR_0, VAR_2);
 VAR_17->clock_registers.vCG_SPLL_FUNC_CNTL_3 =
  FUNC_0(VAR_16->device, VAR_0, VAR_3);
 VAR_17->clock_registers.vCG_SPLL_FUNC_CNTL_4 =
  FUNC_0(VAR_16->device, VAR_0, VAR_4);
 VAR_17->clock_registers.vCG_SPLL_SPREAD_SPECTRUM =
  FUNC_0(VAR_16->device, VAR_0, VAR_5);
 VAR_17->clock_registers.vCG_SPLL_SPREAD_SPECTRUM_2 =
  FUNC_0(VAR_16->device, VAR_0, VAR_6);
 VAR_17->clock_registers.vDLL_CNTL =
  FUNC_1(VAR_16->device, VAR_7);
 VAR_17->clock_registers.vMCLK_PWRMGT_CNTL =
  FUNC_1(VAR_16->device, VAR_8);
 VAR_17->clock_registers.vMPLL_AD_FUNC_CNTL =
  FUNC_1(VAR_16->device, VAR_9);
 VAR_17->clock_registers.vMPLL_DQ_FUNC_CNTL =
  FUNC_1(VAR_16->device, VAR_10);
 VAR_17->clock_registers.vMPLL_FUNC_CNTL =
  FUNC_1(VAR_16->device, VAR_11);
 VAR_17->clock_registers.vMPLL_FUNC_CNTL_1 =
  FUNC_1(VAR_16->device, VAR_12);
 VAR_17->clock_registers.vMPLL_FUNC_CNTL_2 =
  FUNC_1(VAR_16->device, VAR_13);
 VAR_17->clock_registers.vMPLL_SS1 =
  FUNC_1(VAR_16->device, VAR_14);
 VAR_17->clock_registers.vMPLL_SS2 =
  FUNC_1(VAR_16->device, VAR_15);
 return 0;

}
