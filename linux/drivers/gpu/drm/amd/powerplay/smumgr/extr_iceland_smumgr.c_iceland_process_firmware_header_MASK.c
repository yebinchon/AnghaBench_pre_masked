
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct smu7_smumgr {void* ulv_setting_starts; void* arb_table_start; void* fan_table_start; void* mc_reg_table_start; void* soft_regs_start; void* dpm_table_start; } ;
struct smu7_hwmgr {void* soft_regs_start; } ;
struct TYPE_2__ {void* SMC; } ;
struct pp_hwmgr {TYPE_1__ microcode_version_info; scalar_t__ smu_backend; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,scalar_t__,void**,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_10)
{
 struct smu7_hwmgr *VAR_11 = (struct smu7_hwmgr *)(VAR_10->backend);
 struct smu7_smumgr *VAR_12 = (struct smu7_smumgr *)(VAR_10->smu_backend);

 uint32_t VAR_13;
 int VAR_14;
 bool VAR_15 = 0;

 VAR_14 = FUNC_1(VAR_10,
    VAR_3 +
    FUNC_0(VAR_4, VAR_0),
    &VAR_13, VAR_2);

 if (0 == VAR_14) {
  VAR_12->dpm_table_start = VAR_13;
 }

 VAR_15 |= (0 != VAR_14);

 VAR_14 = FUNC_1(VAR_10,
    VAR_3 +
    FUNC_0(VAR_4, VAR_5),
    &VAR_13, VAR_2);

 if (0 == VAR_14) {
  VAR_11->soft_regs_start = VAR_13;
  VAR_12->soft_regs_start = VAR_13;
 }

 VAR_15 |= (0 != VAR_14);


 VAR_14 = FUNC_1(VAR_10,
    VAR_3 +
    FUNC_0(VAR_4, VAR_9),
    &VAR_13, VAR_2);

 if (0 == VAR_14) {
  VAR_12->mc_reg_table_start = VAR_13;
 }

 VAR_14 = FUNC_1(VAR_10,
    VAR_3 +
    FUNC_0(VAR_4, VAR_1),
    &VAR_13, VAR_2);

 if (0 == VAR_14) {
  VAR_12->fan_table_start = VAR_13;
 }

 VAR_15 |= (0 != VAR_14);

 VAR_14 = FUNC_1(VAR_10,
    VAR_3 +
    FUNC_0(VAR_4, VAR_8),
    &VAR_13, VAR_2);

 if (0 == VAR_14) {
  VAR_12->arb_table_start = VAR_13;
 }

 VAR_15 |= (0 != VAR_14);


 VAR_14 = FUNC_1(VAR_10,
    VAR_3 +
    FUNC_0(VAR_4, VAR_7),
    &VAR_13, VAR_2);

 if (0 == VAR_14) {
  VAR_10->microcode_version_info.SMC = VAR_13;
 }

 VAR_15 |= (0 != VAR_14);

 VAR_14 = FUNC_1(VAR_10,
    VAR_3 +
    FUNC_0(VAR_4, VAR_6),
    &VAR_13, VAR_2);

 if (0 == VAR_14) {
  VAR_12->ulv_setting_starts = VAR_13;
 }

 VAR_15 |= (0 != VAR_14);

 return VAR_15 ? 1 : 0;
}
