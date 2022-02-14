
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct i40iw_sc_cqp {int polarity; int process_cqp_sds; int dev; } ;
struct TYPE_4__ {int cq_size; int cq_id; int avoid_mem_cflct; } ;
struct i40iw_sc_cq {int shadow_read_threshold; int virtual_map; int cq_pa; int shadow_area_pa; int first_pm_pbl_idx; int tph_val; int ceq_id_valid; int ceq_id; int pbl_chunk_size; int ceqe_mask; int tph_en; TYPE_2__ cq_uk; TYPE_1__* dev; } ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct i40iw_sc_cq*,int) ;
 int VAR_16 ;
 int FUNC_2 (int ,int ,char*,int*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (struct i40iw_sc_cq*) ;
 int* FUNC_5 (struct i40iw_sc_cqp*,int) ;
 int FUNC_6 (struct i40iw_sc_cqp*) ;
 int FUNC_7 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_8(struct i40iw_sc_cq *VAR_17,
        u64 VAR_18,
        bool VAR_19,
        bool VAR_20)
{
 u64 *VAR_21;
 struct i40iw_sc_cqp *VAR_22;
 u64 VAR_23;
 enum i40iw_status_code VAR_24;

 VAR_22 = VAR_17->dev->cqp;
 VAR_21 = FUNC_5(VAR_22, VAR_18);
 if (!VAR_21)
  return VAR_15;
 FUNC_7(VAR_21, 0, VAR_17->cq_uk.cq_size);
 FUNC_7(VAR_21, 8, FUNC_1(VAR_17, 1));
 FUNC_7(VAR_21, 16,
        FUNC_0(VAR_17->shadow_read_threshold, VAR_6));
 FUNC_7(VAR_21, 32, (VAR_17->virtual_map ? 0 : VAR_17->cq_pa));
 FUNC_7(VAR_21, 40, VAR_17->shadow_area_pa);
 FUNC_7(VAR_21, 48,
        (VAR_17->virtual_map ? VAR_17->first_pm_pbl_idx : 0));
 FUNC_7(VAR_21, 56,
        FUNC_0(VAR_17->tph_val, VAR_10));

 VAR_23 = VAR_17->cq_uk.cq_id |
   FUNC_0((VAR_17->ceq_id_valid ? VAR_17->ceq_id : 0), VAR_1) |
   FUNC_0(VAR_12, VAR_8) |
   FUNC_0(VAR_17->pbl_chunk_size, VAR_5) |
   FUNC_0(VAR_19, VAR_3) |
   FUNC_0(VAR_17->virtual_map, VAR_7) |
   FUNC_0(VAR_17->ceqe_mask, VAR_4) |
   FUNC_0(VAR_17->ceq_id_valid, VAR_2) |
   FUNC_0(VAR_17->tph_en, VAR_9) |
   FUNC_0(VAR_17->cq_uk.avoid_mem_cflct, VAR_0) |
   FUNC_0(VAR_22->polarity, VAR_11);

 FUNC_3(VAR_21, VAR_23);

 FUNC_2(VAR_22->dev, VAR_14, "CCQ_CREATE WQE",
   VAR_21, VAR_13 * 8);

 if (VAR_20) {
  FUNC_6(VAR_22);
  VAR_24 = FUNC_4(VAR_17);
  if (VAR_24)
   return VAR_24;
 }
 VAR_22->process_cqp_sds = VAR_16;

 return 0;
}
