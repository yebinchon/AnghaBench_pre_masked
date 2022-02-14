
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct i40iw_qp_uk {int swqe_polarity; scalar_t__ push_wqe; scalar_t__ push_db; } ;
struct i40iw_post_inline_send {int len; scalar_t__ data; } ;
struct TYPE_2__ {struct i40iw_post_inline_send inline_send; } ;
struct i40iw_post_sq_info {int read_fence; int op_type; int local_fence; int signaled; int wr_id; TYPE_1__ op; } ;
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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int*) ;
 int* FUNC_2 (struct i40iw_qp_uk*,int*,int,int,int ) ;
 int FUNC_3 (struct i40iw_qp_uk*) ;
 int FUNC_4 (struct i40iw_qp_uk*,int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int*,int,int) ;
 int FUNC_7 () ;

__attribute__((used)) static enum i40iw_status_code FUNC_8(struct i40iw_qp_uk *VAR_12,
      struct i40iw_post_sq_info *VAR_13,
      u32 VAR_14,
      bool VAR_15)
{
 u64 *VAR_16;
 u8 *VAR_17, *VAR_18;
 struct i40iw_post_inline_send *VAR_19;
 u64 VAR_20;
 u32 VAR_21;
 enum i40iw_status_code VAR_22;
 bool VAR_23 = 0;
 u8 VAR_24;
 u64 *VAR_25;

 VAR_19 = &VAR_13->op.inline_send;
 if (VAR_19->len > VAR_11)
  return VAR_9;

 VAR_22 = FUNC_1(VAR_19->len, &VAR_24);
 if (VAR_22)
  return VAR_22;

 VAR_16 = FUNC_2(VAR_12, &VAR_21, VAR_24, VAR_19->len, VAR_13->wr_id);
 if (!VAR_16)
  return VAR_10;

 VAR_23 |= VAR_13->read_fence;
 VAR_20 = FUNC_0(VAR_14, VAR_6) |
     FUNC_0(VAR_13->op_type, VAR_3) |
     FUNC_0(VAR_19->len, VAR_1) |
     FUNC_0(1, VAR_0) |
     FUNC_0((VAR_12->push_db ? 1 : 0), VAR_4) |
     FUNC_0(VAR_23, VAR_5) |
     FUNC_0(VAR_13->local_fence, VAR_2) |
     FUNC_0(VAR_13->signaled, VAR_7) |
     FUNC_0(VAR_12->swqe_polarity, VAR_8);

 VAR_17 = (u8 *)VAR_16;
 VAR_18 = (u8 *)(VAR_19->data);

 if (VAR_19->len <= 16) {
  FUNC_5(VAR_17, VAR_18, VAR_19->len);
 } else {
  FUNC_5(VAR_17, VAR_18, 16);
  VAR_18 += 16;
  VAR_17 = (u8 *)VAR_16 + 32;
  FUNC_5(VAR_17, VAR_18, VAR_19->len - 16);
 }

 FUNC_7();

 FUNC_6(VAR_16, 24, VAR_20);

 if (VAR_12->push_db) {
  VAR_25 = (u64 *)((uintptr_t)VAR_12->push_wqe + (VAR_21 & 0x3) * 0x20);
  FUNC_5(VAR_25, VAR_16, (VAR_19->len > 16) ? VAR_19->len + 16 : 32);
  FUNC_4(VAR_12, VAR_21);
 } else {
  if (VAR_15)
   FUNC_3(VAR_12);
 }

 return 0;
}
