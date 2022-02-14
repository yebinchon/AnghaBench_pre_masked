
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct i40iw_sc_cqp {int polarity; int dev; } ;
struct TYPE_8__ {scalar_t__ cq_size; scalar_t__ cq_id; int avoid_mem_cflct; } ;
struct i40iw_sc_cq {scalar_t__ cq_pa; scalar_t__ first_pm_pbl_idx; int ceq_id_valid; scalar_t__ ceq_id; int virtual_map; int pbl_chunk_size; int check_overflow; scalar_t__ shadow_area_pa; int tph_val; int ceqe_mask; int tph_en; TYPE_4__ cq_uk; int pbl_list; TYPE_3__* dev; } ;
struct i40iw_modify_cq_info {scalar_t__ ceq_id; int cq_resize; int virtual_map; scalar_t__ first_pm_pbl_idx; scalar_t__ cq_pa; scalar_t__ cq_size; int pbl_chunk_size; int check_overflow; int shadow_read_threshold; scalar_t__ check_overflow_change; scalar_t__ ceq_change; int pbl_list; scalar_t__ ceq_valid; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_7__ {struct i40iw_sc_cqp* cqp; TYPE_2__* hmc_info; } ;
struct TYPE_6__ {TYPE_1__* hmc_obj; } ;
struct TYPE_5__ {scalar_t__ cnt; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct i40iw_sc_cq*,int) ;
 int FUNC_2 (int ,int ,char*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_4 (struct i40iw_sc_cqp*,scalar_t__) ;
 int FUNC_5 (struct i40iw_sc_cqp*) ;
 int FUNC_6 (scalar_t__*,int,scalar_t__) ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(struct i40iw_sc_cq *VAR_21,
       struct i40iw_modify_cq_info *VAR_22,
       u64 VAR_23,
       bool VAR_24)
{
 struct i40iw_sc_cqp *VAR_25;
 u64 *VAR_26;
 u64 VAR_27;
 u32 VAR_28, VAR_29, VAR_30;
 u8 VAR_31;
 bool VAR_32, VAR_33, VAR_34;
 u32 VAR_35;

 if (VAR_22->ceq_valid && (VAR_22->ceq_id > VAR_20))
  return VAR_16;

 VAR_35 = VAR_21->dev->hmc_info->hmc_obj[VAR_19].cnt;

 if (VAR_22->cq_resize && VAR_22->virtual_map &&
     (VAR_22->first_pm_pbl_idx >= VAR_35))
  return VAR_17;

 VAR_25 = VAR_21->dev->cqp;
 VAR_26 = FUNC_4(VAR_25, VAR_23);
 if (!VAR_26)
  return VAR_18;

 VAR_21->pbl_list = VAR_22->pbl_list;
 VAR_21->cq_pa = VAR_22->cq_pa;
 VAR_21->first_pm_pbl_idx = VAR_22->first_pm_pbl_idx;

 VAR_28 = VAR_22->cq_resize ? VAR_22->cq_size : VAR_21->cq_uk.cq_size;
 if (VAR_22->ceq_change) {
  VAR_33 = 1;
  VAR_29 = VAR_22->ceq_id;
 } else {
  VAR_33 = VAR_21->ceq_id_valid;
  VAR_29 = VAR_33 ? VAR_21->ceq_id : 0;
 }
 VAR_32 = VAR_22->cq_resize ? VAR_22->virtual_map : VAR_21->virtual_map;
 VAR_30 = (VAR_22->cq_resize ?
       (VAR_22->virtual_map ? VAR_22->first_pm_pbl_idx : 0) :
       (VAR_21->virtual_map ? VAR_21->first_pm_pbl_idx : 0));
 VAR_31 = (VAR_22->cq_resize ?
     (VAR_22->virtual_map ? VAR_22->pbl_chunk_size : 0) :
     (VAR_21->virtual_map ? VAR_21->pbl_chunk_size : 0));
 VAR_34 = VAR_22->check_overflow_change ? VAR_22->check_overflow :
    VAR_21->check_overflow;
 VAR_21->cq_uk.cq_size = VAR_28;
 VAR_21->ceq_id_valid = VAR_33;
 VAR_21->ceq_id = VAR_29;
 VAR_21->virtual_map = VAR_32;
 VAR_21->first_pm_pbl_idx = VAR_30;
 VAR_21->pbl_chunk_size = VAR_31;
 VAR_21->check_overflow = VAR_34;

 FUNC_6(VAR_26, 0, VAR_28);
 FUNC_6(VAR_26, 8, FUNC_1(VAR_21, 1));
 FUNC_6(VAR_26, 16,
        FUNC_0(VAR_22->shadow_read_threshold, VAR_7));
 FUNC_6(VAR_26, 32, (VAR_21->virtual_map ? 0 : VAR_21->cq_pa));
 FUNC_6(VAR_26, 40, VAR_21->shadow_area_pa);
 FUNC_6(VAR_26, 48, (VAR_21->virtual_map ? VAR_30 : 0));
 FUNC_6(VAR_26, 56, FUNC_0(VAR_21->tph_val, VAR_11));

 VAR_27 = VAR_21->cq_uk.cq_id |
   FUNC_0(VAR_29, VAR_1) |
   FUNC_0(VAR_13, VAR_9) |
   FUNC_0(VAR_22->cq_resize, VAR_4) |
   FUNC_0(VAR_31, VAR_6) |
   FUNC_0(VAR_34, VAR_3) |
   FUNC_0(VAR_32, VAR_8) |
   FUNC_0(VAR_21->ceqe_mask, VAR_5) |
   FUNC_0(VAR_33, VAR_2) |
   FUNC_0(VAR_21->tph_en, VAR_10) |
   FUNC_0(VAR_21->cq_uk.avoid_mem_cflct, VAR_0) |
   FUNC_0(VAR_25->polarity, VAR_12);

 FUNC_3(VAR_26, VAR_27);

 FUNC_2(VAR_25->dev, VAR_15, "CQ_MODIFY WQE",
   VAR_26, VAR_14 * 8);

 if (VAR_24)
  FUNC_5(VAR_25);
 return 0;
}
