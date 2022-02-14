
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_sc_dev {struct i40iw_sc_cqp* cqp; } ;
struct i40iw_sc_cqp {int polarity; } ;
struct i40iw_allocate_stag_info {int page_size; int pd_id; int total_len; int stag_idx; int hmc_fcn_index; int access_rights; int chunk_size; int remote_access; int use_hmc_fcn_index; int use_pf_rid; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
typedef enum i40iw_page_size { ____Placeholder_i40iw_page_size } i40iw_page_size ;


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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct i40iw_sc_dev*,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
    struct i40iw_sc_dev *VAR_19,
    struct i40iw_allocate_stag_info *VAR_20,
    u64 VAR_21,
    bool VAR_22)
{
 u64 *VAR_23;
 struct i40iw_sc_cqp *VAR_24;
 u64 VAR_25;
 enum i40iw_page_size VAR_26;

 VAR_26 = (VAR_20->page_size == 0x200000) ? VAR_17 : VAR_18;
 VAR_24 = VAR_19->cqp;
 VAR_23 = FUNC_3(VAR_24, VAR_21);
 if (!VAR_23)
  return VAR_16;
 FUNC_5(VAR_23,
        8,
        FUNC_0(VAR_20->pd_id, VAR_7) |
        FUNC_0(VAR_20->total_len, VAR_9));
 FUNC_5(VAR_23,
        16,
        FUNC_0(VAR_20->stag_idx, VAR_4));
 FUNC_5(VAR_23,
        40,
        FUNC_0(VAR_20->hmc_fcn_index, VAR_2));

 VAR_25 = FUNC_0(VAR_13, VAR_0) |
   FUNC_0(1, VAR_6) |
   FUNC_0(VAR_20->access_rights, VAR_1) |
   FUNC_0(VAR_20->chunk_size, VAR_5) |
   FUNC_0(VAR_26, VAR_3) |
   FUNC_0(VAR_20->remote_access, VAR_8) |
   FUNC_0(VAR_20->use_hmc_fcn_index, VAR_10) |
   FUNC_0(VAR_20->use_pf_rid, VAR_11) |
   FUNC_0(VAR_24->polarity, VAR_12);

 FUNC_2(VAR_23, VAR_25);

 FUNC_1(VAR_19, VAR_15, "ALLOC_STAG WQE",
   VAR_23, VAR_14 * 8);

 if (VAR_22)
  FUNC_4(VAR_24);
 return 0;
}
