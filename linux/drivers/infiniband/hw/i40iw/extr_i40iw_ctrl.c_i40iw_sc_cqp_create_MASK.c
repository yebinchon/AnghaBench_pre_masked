
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef uintptr_t u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct i40iw_sc_cqp {int sq_size; uintptr_t sq_pa; int process_cqp_sds; TYPE_1__* dev; int sdbuf; scalar_t__ host_ctx_pa; int host_ctx; int hmc_profile; int enabled_vf_count; int struct_ver; int hw_sq_size; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int hw; scalar_t__ is_pf; } ;


 int VAR_0 ;
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
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 uintptr_t FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,int *,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,char*,int ,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_21 ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ,int,uintptr_t) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_10(struct i40iw_sc_cqp *VAR_22,
        u16 *VAR_23,
        u16 *VAR_24)
{
 u64 VAR_25;
 u32 VAR_26 = 0, VAR_27, VAR_28, VAR_29 = 0, VAR_30;
 enum i40iw_status_code VAR_31;

 *VAR_23 = 0;
 *VAR_24 = 0;

 VAR_31 = FUNC_3(VAR_22->dev->hw,
       &VAR_22->sdbuf,
       VAR_20 * VAR_22->sq_size,
       VAR_18);

 if (VAR_31)
  goto exit;

 VAR_25 = FUNC_0(VAR_22->hw_sq_size, VAR_12) |
        FUNC_0(VAR_22->struct_ver, VAR_13);

 FUNC_8(VAR_22->host_ctx, 0, VAR_25);
 FUNC_8(VAR_22->host_ctx, 8, VAR_22->sq_pa);
 VAR_25 = FUNC_0(VAR_22->enabled_vf_count, VAR_10) |
        FUNC_0(VAR_22->hmc_profile, VAR_11);
 FUNC_8(VAR_22->host_ctx, 16, VAR_25);
 FUNC_8(VAR_22->host_ctx, 24, (uintptr_t)VAR_22);
 FUNC_8(VAR_22->host_ctx, 32, 0);
 FUNC_8(VAR_22->host_ctx, 40, 0);
 FUNC_8(VAR_22->host_ctx, 48, 0);
 FUNC_8(VAR_22->host_ctx, 56, 0);

 FUNC_4(VAR_22->dev, VAR_15, "CQP_HOST_CTX",
   VAR_22->host_ctx, VAR_14 * 8);

 VAR_27 = FUNC_2(VAR_22->host_ctx_pa, 32);
 VAR_28 = (u32)VAR_22->host_ctx_pa;

 if (VAR_22->dev->is_pf) {
  FUNC_7(VAR_22->dev->hw, VAR_0, VAR_27);
  FUNC_7(VAR_22->dev->hw, VAR_1, VAR_28);
 } else {
  FUNC_7(VAR_22->dev->hw, VAR_6, VAR_27);
  FUNC_7(VAR_22->dev->hw, VAR_7, VAR_28);
 }
 do {
  if (VAR_26++ > VAR_16) {
   FUNC_5(VAR_22->dev->hw, &VAR_22->sdbuf);
   VAR_31 = VAR_17;




   if (VAR_22->dev->is_pf)
    VAR_30 = FUNC_6(VAR_22->dev->hw, VAR_3);
   else
    VAR_30 = FUNC_6(VAR_22->dev->hw, VAR_9);
   *VAR_24 = FUNC_1(VAR_30, VAR_5);
   *VAR_23 = FUNC_1(VAR_30, VAR_4);
   goto exit;
  }
  FUNC_9(VAR_19);
  if (VAR_22->dev->is_pf)
   VAR_29 = FUNC_6(VAR_22->dev->hw, VAR_2);
  else
   VAR_29 = FUNC_6(VAR_22->dev->hw, VAR_8);
 } while (!VAR_29);

exit:
 if (!VAR_31)
  VAR_22->process_cqp_sds = VAR_21;
 return VAR_31;
}
