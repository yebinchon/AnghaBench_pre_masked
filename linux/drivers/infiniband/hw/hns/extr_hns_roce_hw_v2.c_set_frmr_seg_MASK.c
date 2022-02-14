
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_reg_wr {int access; int key; TYPE_1__* mr; } ;
struct hns_roce_wqe_frmr_seg {int mode_buf_pg_sz; void* pbl_size; } ;
struct hns_roce_v2_rc_send_wqe {int va; void* rkey; void* byte_20; void* byte_16; void* inv_key; void* msg_len; int byte_4; } ;
struct hns_roce_mr {int pbl_ba; int pbl_size; scalar_t__ pbl_buf_pg_sz; } ;
struct TYPE_2__ {int length; int iova; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 struct hns_roce_mr* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct hns_roce_v2_rc_send_wqe *VAR_14,
    struct hns_roce_wqe_frmr_seg *VAR_15,
    const struct ib_reg_wr *VAR_16)
{
 struct hns_roce_mr *VAR_17 = FUNC_4(VAR_16->mr);


 FUNC_2(VAR_14->byte_4,
       VAR_10,
       VAR_16->access & VAR_1 ? 1 : 0);
 FUNC_2(VAR_14->byte_4,
       VAR_9,
       VAR_16->access & VAR_2 ? 1 : 0);
 FUNC_2(VAR_14->byte_4,
       VAR_12,
       VAR_16->access & VAR_3 ? 1 : 0);
 FUNC_2(VAR_14->byte_4,
       VAR_13,
       VAR_16->access & VAR_4 ? 1 : 0);
 FUNC_2(VAR_14->byte_4,
       VAR_11,
       VAR_16->access & VAR_0 ? 1 : 0);


 VAR_14->msg_len = FUNC_0(VAR_17->pbl_ba & 0xffffffff);
 VAR_14->inv_key = FUNC_0(VAR_17->pbl_ba >> 32);

 VAR_14->byte_16 = FUNC_0(VAR_16->mr->length & 0xffffffff);
 VAR_14->byte_20 = FUNC_0(VAR_16->mr->length >> 32);
 VAR_14->rkey = FUNC_0(VAR_16->key);
 VAR_14->va = FUNC_1(VAR_16->mr->iova);

 VAR_15->pbl_size = FUNC_0(VAR_17->pbl_size);
 FUNC_3(VAR_15->mode_buf_pg_sz,
         VAR_7,
         VAR_8,
         VAR_17->pbl_buf_pg_sz + VAR_5);
 FUNC_2(VAR_15->mode_buf_pg_sz,
       VAR_6, 0);
}
