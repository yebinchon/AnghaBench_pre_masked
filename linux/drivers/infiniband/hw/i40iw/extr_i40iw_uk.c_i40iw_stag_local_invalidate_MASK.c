
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct i40iw_qp_uk {int swqe_polarity; } ;
struct i40iw_inv_local_stag {int target_stag; } ;
struct TYPE_2__ {struct i40iw_inv_local_stag inv_local_stag; } ;
struct i40iw_post_sq_info {int local_fence; int read_fence; int signaled; int wr_id; TYPE_1__ op; } ;
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
 int FUNC_0 (int,int ) ;
 int* FUNC_1 (struct i40iw_qp_uk*,int *,int ,int ,int ) ;
 int FUNC_2 (struct i40iw_qp_uk*) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static enum i40iw_status_code FUNC_5(struct i40iw_qp_uk *VAR_9,
         struct i40iw_post_sq_info *VAR_10,
         bool VAR_11)
{
 u64 *VAR_12;
 struct i40iw_inv_local_stag *VAR_13;
 u64 VAR_14;
 u32 VAR_15;
 bool VAR_16 = 0;

 VAR_13 = &VAR_10->op.inv_local_stag;
 VAR_16 = VAR_10->local_fence;

 VAR_12 = FUNC_1(VAR_9, &VAR_15, VAR_8, 0, VAR_10->wr_id);
 if (!VAR_12)
  return VAR_6;
 FUNC_3(VAR_12, 0, 0);
 FUNC_3(VAR_12, 8,
        FUNC_0(VAR_13->target_stag, VAR_1));
 FUNC_3(VAR_12, 16, 0);
 VAR_14 = FUNC_0(VAR_7, VAR_2) |
     FUNC_0(VAR_10->read_fence, VAR_3) |
     FUNC_0(VAR_16, VAR_0) |
     FUNC_0(VAR_10->signaled, VAR_4) |
     FUNC_0(VAR_9->swqe_polarity, VAR_5);

 FUNC_4();

 FUNC_3(VAR_12, 24, VAR_14);

 if (VAR_11)
  FUNC_2(VAR_9);

 return 0;
}
