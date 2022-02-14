
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef uintptr_t u64 ;
typedef int u32 ;
struct i40iw_qp_uk {int swqe_polarity; } ;
struct i40iw_bind_window {int mr_stag; int mw_stag; uintptr_t bind_length; int enable_reads; int enable_writes; scalar_t__ addressing_type; scalar_t__ va; } ;
struct TYPE_2__ {struct i40iw_bind_window bind_window; } ;
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
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 uintptr_t FUNC_0 (int,int ) ;
 uintptr_t* FUNC_1 (struct i40iw_qp_uk*,int *,int ,int ,int ) ;
 int FUNC_2 (struct i40iw_qp_uk*) ;
 int FUNC_3 (uintptr_t*,int,uintptr_t) ;
 int FUNC_4 () ;

__attribute__((used)) static enum i40iw_status_code FUNC_5(struct i40iw_qp_uk *VAR_13,
         struct i40iw_post_sq_info *VAR_14,
         bool VAR_15)
{
 u64 *VAR_16;
 struct i40iw_bind_window *VAR_17;
 u64 VAR_18;
 u32 VAR_19;
 bool VAR_20 = 0;

 VAR_17 = &VAR_14->op.bind_window;

 VAR_20 |= VAR_14->local_fence;
 VAR_16 = FUNC_1(VAR_13, &VAR_19, VAR_12, 0, VAR_14->wr_id);
 if (!VAR_16)
  return VAR_10;
 FUNC_3(VAR_16, 0, (uintptr_t)VAR_17->va);
 FUNC_3(VAR_16, 8,
        FUNC_0(VAR_17->mr_stag, VAR_3) |
        FUNC_0(VAR_17->mw_stag, VAR_1));
 FUNC_3(VAR_16, 16, VAR_17->bind_length);
 VAR_18 = FUNC_0(VAR_11, VAR_2) |
     FUNC_0(((VAR_17->enable_reads << 2) |
     (VAR_17->enable_writes << 3)),
    VAR_6) |
     FUNC_0((VAR_17->addressing_type == VAR_9 ? 1 : 0),
    VAR_7) |
     FUNC_0(VAR_14->read_fence, VAR_4) |
     FUNC_0(VAR_20, VAR_0) |
     FUNC_0(VAR_14->signaled, VAR_5) |
     FUNC_0(VAR_13->swqe_polarity, VAR_8);

 FUNC_4();

 FUNC_3(VAR_16, 24, VAR_18);

 if (VAR_15)
  FUNC_2(VAR_13);

 return 0;
}
