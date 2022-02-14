
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct i40iw_sc_dev {struct i40iw_sc_cqp* cqp; } ;
struct i40iw_sc_cqp {int polarity; } ;
struct i40iw_register_shared_stag {int access_rights; scalar_t__ addr_type; int pd_id; int new_stag_key; int new_stag_idx; int parent_stag_idx; scalar_t__ va; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct i40iw_sc_dev*,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
     struct i40iw_sc_dev *VAR_17,
     struct i40iw_register_shared_stag *VAR_18,
     u64 VAR_19,
     bool VAR_20)
{
 u64 *VAR_21;
 struct i40iw_sc_cqp *VAR_22;
 u64 VAR_23, VAR_24, VAR_25, VAR_26;
 u32 VAR_27;
 bool VAR_28;
 u8 VAR_29;

 if (VAR_18->access_rights & (VAR_0 |
       VAR_1))
  VAR_28 = 1;
 else
  VAR_28 = 0;
 VAR_22 = VAR_17->cqp;
 VAR_21 = FUNC_3(VAR_22, VAR_19);
 if (!VAR_21)
  return VAR_16;
 VAR_24 = (uintptr_t)(VAR_18->va);
 VAR_27 = (u32)(VAR_24 & 0x00000000FFFFFFFF);
 VAR_25 = (u64)(VAR_27 & (4096 - 1));

 FUNC_5(VAR_21,
        0,
        (VAR_18->addr_type == VAR_2 ? (uintptr_t)VAR_18->va : VAR_25));

 FUNC_5(VAR_21,
        8,
        FUNC_0(VAR_18->pd_id, VAR_9));
 VAR_23 = FUNC_0(VAR_18->new_stag_key, VAR_6) |
        FUNC_0(VAR_18->new_stag_idx, VAR_5) |
        FUNC_0(VAR_18->parent_stag_idx, VAR_8);
 FUNC_5(VAR_21, 16, VAR_23);

 VAR_29 = (VAR_18->addr_type == VAR_2) ? 1 : 0;
 VAR_26 = FUNC_0(VAR_13, VAR_3) |
   FUNC_0(1, VAR_7) |
   FUNC_0(VAR_18->access_rights, VAR_4) |
   FUNC_0(VAR_28, VAR_10) |
   FUNC_0(VAR_29, VAR_11) |
   FUNC_0(VAR_22->polarity, VAR_12);

 FUNC_2(VAR_21, VAR_26);

 FUNC_1(VAR_17, VAR_15, "MR_REG_SHARED WQE",
   VAR_21, VAR_14 * 8);

 if (VAR_20)
  FUNC_4(VAR_22);
 return 0;
}
