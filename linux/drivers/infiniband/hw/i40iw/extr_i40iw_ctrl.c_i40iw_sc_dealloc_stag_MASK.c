
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_sc_dev {struct i40iw_sc_cqp* cqp; } ;
struct i40iw_sc_cqp {int polarity; } ;
struct i40iw_dealloc_stag_info {int mr; int stag_idx; int pd_id; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i40iw_sc_dev*,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
     struct i40iw_sc_dev *VAR_9,
     struct i40iw_dealloc_stag_info *VAR_10,
     u64 VAR_11,
     bool VAR_12)
{
 u64 VAR_13;
 u64 *VAR_14;
 struct i40iw_sc_cqp *VAR_15;

 VAR_15 = VAR_9->cqp;
 VAR_14 = FUNC_3(VAR_15, VAR_11);
 if (!VAR_14)
  return VAR_8;
 FUNC_5(VAR_14,
        8,
        FUNC_0(VAR_10->pd_id, VAR_3));
 FUNC_5(VAR_14,
        16,
        FUNC_0(VAR_10->stag_idx, VAR_1));

 VAR_13 = FUNC_0(VAR_5, VAR_0) |
   FUNC_0(VAR_10->mr, VAR_2) |
   FUNC_0(VAR_15->polarity, VAR_4);

 FUNC_2(VAR_14, VAR_13);

 FUNC_1(VAR_9, VAR_7, "DEALLOC_STAG WQE",
   VAR_14, VAR_6 * 8);

 if (VAR_12)
  FUNC_4(VAR_15);
 return 0;
}
