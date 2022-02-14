
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct i40iw_sc_cqp {int polarity; int process_cqp_sds; int dev; } ;
struct TYPE_4__ {int cq_id; int avoid_mem_cflct; int cq_size; } ;
struct i40iw_sc_cq {int ceq_id_valid; int ceq_id; int ceqe_mask; int tph_en; TYPE_2__ cq_uk; int shadow_area_pa; TYPE_1__* dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_3__ {struct i40iw_sc_cqp* cqp; } ;


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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct i40iw_sc_cq*,int) ;
 int FUNC_2 (struct i40iw_sc_cqp*,scalar_t__,int) ;
 int FUNC_3 (int ,int ,char*,int*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int*,int) ;
 int* FUNC_6 (struct i40iw_sc_cqp*,int) ;
 int FUNC_7 (struct i40iw_sc_cqp*) ;
 int VAR_12 ;
 int FUNC_8 (int*,int,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_9(struct i40iw_sc_cq *VAR_13,
         u64 VAR_14,
         bool VAR_15)
{
 struct i40iw_sc_cqp *VAR_16;
 u64 *VAR_17;
 u64 VAR_18;
 enum i40iw_status_code VAR_19 = 0;
 u32 VAR_20, VAR_21, VAR_22;

 VAR_16 = VAR_13->dev->cqp;
 VAR_17 = FUNC_6(VAR_16, VAR_14);
 if (!VAR_17)
  return VAR_11;
 FUNC_8(VAR_17, 0, VAR_13->cq_uk.cq_size);
 FUNC_8(VAR_17, 8, FUNC_1(VAR_13, 1));
 FUNC_8(VAR_17, 40, VAR_13->shadow_area_pa);

 VAR_18 = VAR_13->cq_uk.cq_id |
   FUNC_0((VAR_13->ceq_id_valid ? VAR_13->ceq_id : 0), VAR_1) |
   FUNC_0(VAR_7, VAR_4) |
   FUNC_0(VAR_13->ceqe_mask, VAR_3) |
   FUNC_0(VAR_13->ceq_id_valid, VAR_2) |
   FUNC_0(VAR_13->tph_en, VAR_5) |
   FUNC_0(VAR_13->cq_uk.avoid_mem_cflct, VAR_0) |
   FUNC_0(VAR_16->polarity, VAR_6);

 FUNC_5(VAR_17, VAR_18);

 FUNC_3(VAR_16->dev, VAR_9, "CCQ_DESTROY WQE",
   VAR_17, VAR_8 * 8);

 FUNC_4(VAR_16, &VAR_21, &VAR_20, &VAR_22);
 if (VAR_22)
  return VAR_10;

 if (VAR_15) {
  FUNC_7(VAR_16);
  VAR_19 = FUNC_2(VAR_16, VAR_20, 1000);
 }

 VAR_16->process_cqp_sds = VAR_12;

 return VAR_19;
}
