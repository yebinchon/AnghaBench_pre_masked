
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smu7_hwmgr {int is_tlu_enabled; int pcie_gen_cap; int pcie_spc_cap; int pcie_lane_cap; } ;
struct TYPE_5__ {int engineClock; int memoryClock; } ;
struct TYPE_6__ {int hardwarePerformanceLevels; int minimumClocksReductionPercentage; int vbiosInterruptId; TYPE_2__ clockStep; int hardwareActivityPerformanceLevels; int platformCaps; } ;
struct pp_hwmgr {scalar_t__ pp_table_version; TYPE_3__ platform_descriptor; struct amdgpu_device* adev; struct smu7_hwmgr* backend; } ;
struct TYPE_4__ {int pcie_gen_mask; int pcie_mlw_mask; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct smu7_hwmgr* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*) ;
 int FUNC_8 (struct pp_hwmgr*) ;
 int FUNC_9 (struct pp_hwmgr*) ;
 int FUNC_10 (struct pp_hwmgr*) ;
 int FUNC_11 (struct pp_hwmgr*) ;
 int FUNC_12 (struct pp_hwmgr*) ;
 int FUNC_13 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_14(struct pp_hwmgr *VAR_8)
{
 struct smu7_hwmgr *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_0(sizeof(struct smu7_hwmgr), VAR_3);
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 VAR_8->backend = VAR_9;
 FUNC_10(VAR_8);
 FUNC_8(VAR_8);


 if (FUNC_1(VAR_8->platform_descriptor.platformCaps,
   VAR_4)) {
  VAR_10 = FUNC_6(VAR_8);
  if (VAR_10) {
   FUNC_3("Get EVV Voltage Failed.  Abort Driver loading!\n");
   return -VAR_1;
  }
 } else {
  FUNC_5(VAR_8);
 }

 if (VAR_8->pp_table_version == VAR_6) {
  FUNC_4(VAR_8);
  FUNC_12(VAR_8);
 } else if (VAR_8->pp_table_version == VAR_5) {
  FUNC_9(VAR_8);
  FUNC_11(VAR_8);
 }


 VAR_10 = FUNC_2(VAR_8);

 if (0 == VAR_10) {
  struct amdgpu_device *VAR_11 = VAR_8->adev;

  VAR_9->is_tlu_enabled = 0;

  VAR_8->platform_descriptor.hardwareActivityPerformanceLevels =
       VAR_7;
  VAR_8->platform_descriptor.hardwarePerformanceLevels = 2;
  VAR_8->platform_descriptor.minimumClocksReductionPercentage = 50;

  VAR_9->pcie_gen_cap = VAR_11->pm.pcie_gen_mask;
  if (VAR_9->pcie_gen_cap & VAR_0)
   VAR_9->pcie_spc_cap = 20;
  VAR_9->pcie_lane_cap = VAR_11->pm.pcie_mlw_mask;

  VAR_8->platform_descriptor.vbiosInterruptId = 0x20000400;

  VAR_8->platform_descriptor.clockStep.engineClock = 500;
  VAR_8->platform_descriptor.clockStep.memoryClock = 500;
  FUNC_13(VAR_8);
 } else {

  FUNC_7(VAR_8);
 }

 return 0;
}
