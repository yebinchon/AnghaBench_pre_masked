
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct smu7_hwmgr {void* soft_regs_start; } ;
struct TYPE_4__ {void* SMC; } ;
struct pp_hwmgr {TYPE_2__ microcode_version_info; scalar_t__ smu_backend; scalar_t__ backend; } ;
struct TYPE_3__ {void* arb_table_start; void* fan_table_start; void* mc_reg_table_start; void* soft_regs_start; void* dpm_table_start; } ;
struct fiji_smumgr {TYPE_1__ smu7_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,scalar_t__,void**,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_9)
{
 struct smu7_hwmgr *VAR_10 = (struct smu7_hwmgr *)(VAR_9->backend);
 struct fiji_smumgr *VAR_11 = (struct fiji_smumgr *)(VAR_9->smu_backend);
 uint32_t VAR_12;
 int VAR_13;
 bool VAR_14 = 0;

 VAR_13 = FUNC_1(VAR_9,
   VAR_4 +
   FUNC_0(VAR_3, VAR_0),
   &VAR_12, VAR_2);

 if (0 == VAR_13)
  VAR_11->smu7_data.dpm_table_start = VAR_12;

 VAR_14 |= (0 != VAR_13);

 VAR_13 = FUNC_1(VAR_9,
   VAR_4 +
   FUNC_0(VAR_3, VAR_5),
   &VAR_12, VAR_2);

 if (!VAR_13) {
  VAR_10->soft_regs_start = VAR_12;
  VAR_11->smu7_data.soft_regs_start = VAR_12;
 }

 VAR_14 |= (0 != VAR_13);

 VAR_13 = FUNC_1(VAR_9,
   VAR_4 +
   FUNC_0(VAR_3, VAR_8),
   &VAR_12, VAR_2);

 if (!VAR_13)
  VAR_11->smu7_data.mc_reg_table_start = VAR_12;

 VAR_13 = FUNC_1(VAR_9,
   VAR_4 +
   FUNC_0(VAR_3, VAR_1),
   &VAR_12, VAR_2);

 if (!VAR_13)
  VAR_11->smu7_data.fan_table_start = VAR_12;

 VAR_14 |= (0 != VAR_13);

 VAR_13 = FUNC_1(VAR_9,
   VAR_4 +
   FUNC_0(VAR_3, VAR_7),
   &VAR_12, VAR_2);

 if (!VAR_13)
  VAR_11->smu7_data.arb_table_start = VAR_12;

 VAR_14 |= (0 != VAR_13);

 VAR_13 = FUNC_1(VAR_9,
   VAR_4 +
   FUNC_0(VAR_3, VAR_6),
   &VAR_12, VAR_2);

 if (!VAR_13)
  VAR_9->microcode_version_info.SMC = VAR_12;

 VAR_14 |= (0 != VAR_13);

 return VAR_14 ? -1 : 0;
}
