
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int len; } ;
struct TYPE_5__ {int tag_off; int stag; } ;
struct i40iw_rdma_read {TYPE_3__ lo_addr; TYPE_2__ rem_addr; } ;
struct i40iw_qp_uk {int swqe_polarity; } ;
struct TYPE_4__ {struct i40iw_rdma_read rdma_read; } ;
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
 int VAR_9 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int *) ;
 int* FUNC_2 (struct i40iw_qp_uk*,int *,int ,int ,int ) ;
 int FUNC_3 (struct i40iw_qp_uk*) ;
 int FUNC_4 (int*,int ,TYPE_3__*) ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 () ;

__attribute__((used)) static enum i40iw_status_code FUNC_7(struct i40iw_qp_uk *VAR_10,
           struct i40iw_post_sq_info *VAR_11,
           bool VAR_12,
           bool VAR_13)
{
 u64 *VAR_14;
 struct i40iw_rdma_read *VAR_15;
 u64 VAR_16;
 u32 VAR_17;
 enum i40iw_status_code VAR_18;
 u8 VAR_19;
 bool VAR_20 = 0;

 VAR_15 = &VAR_11->op.rdma_read;
 VAR_18 = FUNC_1(1, &VAR_19);
 if (VAR_18)
  return VAR_18;
 VAR_14 = FUNC_2(VAR_10, &VAR_17, VAR_19, VAR_15->lo_addr.len, VAR_11->wr_id);
 if (!VAR_14)
  return VAR_9;
 VAR_20 |= VAR_11->local_fence;

 FUNC_5(VAR_14, 16, FUNC_0(VAR_15->rem_addr.tag_off, VAR_0));
 VAR_16 = FUNC_0(VAR_15->rem_addr.stag, VAR_4) |
   FUNC_0((VAR_12 ? VAR_8 : VAR_7), VAR_2) |
   FUNC_0(VAR_11->read_fence, VAR_3) |
   FUNC_0(VAR_20, VAR_1) |
   FUNC_0(VAR_11->signaled, VAR_5) |
   FUNC_0(VAR_10->swqe_polarity, VAR_6);

 FUNC_4(VAR_14, 0, &VAR_15->lo_addr);

 FUNC_6();

 FUNC_5(VAR_14, 24, VAR_16);
 if (VAR_13)
  FUNC_3(VAR_10);

 return 0;
}
