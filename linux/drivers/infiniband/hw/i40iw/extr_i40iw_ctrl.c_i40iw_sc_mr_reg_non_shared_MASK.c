
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct i40iw_sc_dev {struct i40iw_sc_cqp* cqp; TYPE_2__* hmc_info; } ;
struct i40iw_sc_cqp {int polarity; } ;
struct i40iw_reg_ns_stag_info {int page_size; int access_rights; int chunk_size; int first_pm_pbl_index; scalar_t__ addr_type; uintptr_t fbo; int total_len; int pd_id; int stag_key; int stag_idx; int reg_addr_pa; int hmc_fcn_index; int use_hmc_fcn_index; int use_pf_rid; scalar_t__ va; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
typedef enum i40iw_page_size { ____Placeholder_i40iw_page_size } i40iw_page_size ;
struct TYPE_4__ {TYPE_1__* hmc_obj; } ;
struct TYPE_3__ {int cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct i40iw_sc_dev*,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
    struct i40iw_sc_dev *VAR_25,
    struct i40iw_reg_ns_stag_info *VAR_26,
    u64 VAR_27,
    bool VAR_28)
{
 u64 *VAR_29;
 u64 VAR_30;
 struct i40iw_sc_cqp *VAR_31;
 u64 VAR_32;
 u32 VAR_33;
 bool VAR_34;
 u8 VAR_35;
 enum i40iw_page_size VAR_36;

 VAR_36 = (VAR_26->page_size == 0x200000) ? VAR_23 : VAR_24;
 if (VAR_26->access_rights & (VAR_0 |
       VAR_1))
  VAR_34 = 1;
 else
  VAR_34 = 0;

 VAR_33 = VAR_25->hmc_info->hmc_obj[VAR_22].cnt;

 if (VAR_26->chunk_size && (VAR_26->first_pm_pbl_index >= VAR_33))
  return VAR_20;

 VAR_31 = VAR_25->cqp;
 VAR_29 = FUNC_3(VAR_31, VAR_27);
 if (!VAR_29)
  return VAR_21;

 VAR_30 = (VAR_26->addr_type == VAR_2) ? (uintptr_t)VAR_26->va : VAR_26->fbo;
 FUNC_5(VAR_29, 0, VAR_30);

 FUNC_5(VAR_29,
        8,
        FUNC_0(VAR_26->total_len, VAR_12) |
        FUNC_0(VAR_26->pd_id, VAR_10));

 FUNC_5(VAR_29,
        16,
        FUNC_0(VAR_26->stag_key, VAR_7) |
        FUNC_0(VAR_26->stag_idx, VAR_6));
 if (!VAR_26->chunk_size) {
  FUNC_5(VAR_29, 32, VAR_26->reg_addr_pa);
  FUNC_5(VAR_29, 48, 0);
 } else {
  FUNC_5(VAR_29, 32, 0);
  FUNC_5(VAR_29, 48, VAR_26->first_pm_pbl_index);
 }
 FUNC_5(VAR_29, 40, VAR_26->hmc_fcn_index);
 FUNC_5(VAR_29, 56, 0);

 VAR_35 = (VAR_26->addr_type == VAR_2) ? 1 : 0;
 VAR_32 = FUNC_0(VAR_17, VAR_3) |
   FUNC_0(1, VAR_9) |
   FUNC_0(VAR_26->chunk_size, VAR_8) |
   FUNC_0(VAR_36, VAR_5) |
   FUNC_0(VAR_26->access_rights, VAR_4) |
   FUNC_0(VAR_34, VAR_11) |
   FUNC_0(VAR_35, VAR_15) |
   FUNC_0(VAR_26->use_hmc_fcn_index, VAR_13) |
   FUNC_0(VAR_26->use_pf_rid, VAR_14) |
   FUNC_0(VAR_31->polarity, VAR_16);

 FUNC_2(VAR_29, VAR_32);

 FUNC_1(VAR_25, VAR_19, "MR_REG_NS WQE",
   VAR_29, VAR_18 * 8);

 if (VAR_28)
  FUNC_4(VAR_31);
 return 0;
}
