
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rdma_sq_rdma_wqe_2nd {int remote_va; int r_key; } ;
struct rdma_sq_rdma_wqe_1st {int wqe_size; int flags; } ;
struct qedr_qp {int dummy; } ;
struct qedr_dev {int dummy; } ;
struct ib_send_wr {int send_flags; scalar_t__ opcode; } ;
struct TYPE_2__ {int remote_addr; int rkey; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qedr_dev*,struct qedr_qp*,int *,struct ib_send_wr const*,struct ib_send_wr const**,int *,int ) ;
 int FUNC_4 (struct qedr_qp*,int *,struct ib_send_wr const*) ;
 TYPE_1__* FUNC_5 (struct ib_send_wr const*) ;

__attribute__((used)) static u32 FUNC_6(struct qedr_dev *VAR_4,
         struct qedr_qp *VAR_5,
         struct rdma_sq_rdma_wqe_1st *VAR_6,
         struct rdma_sq_rdma_wqe_2nd *VAR_7,
         const struct ib_send_wr *VAR_8,
         const struct ib_send_wr **VAR_9)
{
 VAR_7->r_key = FUNC_2(FUNC_5(VAR_8)->rkey);
 FUNC_0(VAR_7->remote_va, FUNC_5(VAR_8)->remote_addr);

 if (VAR_8->send_flags & VAR_0 &&
     (VAR_8->opcode == VAR_2 ||
      VAR_8->opcode == VAR_1)) {
  u8 VAR_10 = 0;

  FUNC_1(VAR_10, VAR_3, 1);
  return FUNC_3(VAR_4, VAR_5, &VAR_6->wqe_size, VAR_8,
         VAR_9, &VAR_6->flags, VAR_10);
 }

 return FUNC_4(VAR_5, &VAR_6->wqe_size, VAR_8);
}
