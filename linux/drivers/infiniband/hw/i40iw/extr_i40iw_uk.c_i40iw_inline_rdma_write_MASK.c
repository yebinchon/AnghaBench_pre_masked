
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct i40iw_qp_uk {int swqe_polarity; scalar_t__ push_wqe; scalar_t__ push_db; } ;
struct TYPE_4__ {int tag_off; int stag; } ;
struct i40iw_inline_rdma_write {int len; scalar_t__ data; TYPE_2__ rem_addr; } ;
struct TYPE_3__ {struct i40iw_inline_rdma_write inline_rdma_write; } ;
struct i40iw_post_sq_info {int read_fence; int local_fence; int signaled; int wr_id; TYPE_1__ op; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int*) ;
 int* FUNC_2 (struct i40iw_qp_uk*,int*,int,int,int ) ;
 int FUNC_3 (struct i40iw_qp_uk*) ;
 int FUNC_4 (struct i40iw_qp_uk*,int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int*,int,int) ;
 int FUNC_7 () ;

__attribute__((used)) static enum i40iw_status_code FUNC_8(struct i40iw_qp_uk *VAR_14,
            struct i40iw_post_sq_info *VAR_15,
            bool VAR_16)
{
 u64 *VAR_17;
 u8 *VAR_18, *VAR_19;
 struct i40iw_inline_rdma_write *VAR_20;
 u64 *VAR_21;
 u64 VAR_22 = 0;
 u32 VAR_23;
 enum i40iw_status_code VAR_24;
 bool VAR_25 = 0;
 u8 VAR_26;

 VAR_20 = &VAR_15->op.inline_rdma_write;
 if (VAR_20->len > VAR_13)
  return VAR_11;

 VAR_24 = FUNC_1(VAR_20->len, &VAR_26);
 if (VAR_24)
  return VAR_24;

 VAR_17 = FUNC_2(VAR_14, &VAR_23, VAR_26, VAR_20->len, VAR_15->wr_id);
 if (!VAR_17)
  return VAR_12;

 VAR_25 |= VAR_15->read_fence;
 FUNC_6(VAR_17, 16,
        FUNC_0(VAR_20->rem_addr.tag_off, VAR_0));

 VAR_22 = FUNC_0(VAR_20->rem_addr.stag, VAR_7) |
   FUNC_0(VAR_10, VAR_4) |
   FUNC_0(VAR_20->len, VAR_2) |
   FUNC_0(1, VAR_1) |
   FUNC_0((VAR_14->push_db ? 1 : 0), VAR_5) |
   FUNC_0(VAR_25, VAR_6) |
   FUNC_0(VAR_15->local_fence, VAR_3) |
   FUNC_0(VAR_15->signaled, VAR_8) |
   FUNC_0(VAR_14->swqe_polarity, VAR_9);

 VAR_18 = (u8 *)VAR_17;
 VAR_19 = (u8 *)(VAR_20->data);

 if (VAR_20->len <= 16) {
  FUNC_5(VAR_18, VAR_19, VAR_20->len);
 } else {
  FUNC_5(VAR_18, VAR_19, 16);
  VAR_19 += 16;
  VAR_18 = (u8 *)VAR_17 + 32;
  FUNC_5(VAR_18, VAR_19, VAR_20->len - 16);
 }

 FUNC_7();

 FUNC_6(VAR_17, 24, VAR_22);

 if (VAR_14->push_db) {
  VAR_21 = (u64 *)((uintptr_t)VAR_14->push_wqe + (VAR_23 & 0x3) * 0x20);
  FUNC_5(VAR_21, VAR_17, (VAR_20->len > 16) ? VAR_20->len + 16 : 32);
  FUNC_4(VAR_14, VAR_23);
 } else {
  if (VAR_16)
   FUNC_3(VAR_14);
 }

 return 0;
}
