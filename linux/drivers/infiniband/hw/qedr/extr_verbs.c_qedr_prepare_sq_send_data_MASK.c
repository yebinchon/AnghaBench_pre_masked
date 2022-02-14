
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rdma_sq_send_wqe_2st {int dummy; } ;
struct rdma_sq_send_wqe_1st {int wqe_size; int flags; } ;
struct qedr_qp {int dummy; } ;
struct qedr_dev {int dummy; } ;
struct ib_send_wr {int send_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct rdma_sq_send_wqe_2st*,int ,int) ;
 int FUNC_2 (struct qedr_dev*,struct qedr_qp*,int *,struct ib_send_wr const*,struct ib_send_wr const**,int *,int ) ;
 int FUNC_3 (struct qedr_qp*,int *,struct ib_send_wr const*) ;

__attribute__((used)) static u32 FUNC_4(struct qedr_dev *VAR_2,
         struct qedr_qp *VAR_3,
         struct rdma_sq_send_wqe_1st *VAR_4,
         struct rdma_sq_send_wqe_2st *VAR_5,
         const struct ib_send_wr *VAR_6,
         const struct ib_send_wr **VAR_7)
{
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 if (VAR_6->send_flags & VAR_0) {
  u8 VAR_8 = 0;

  FUNC_0(VAR_8, VAR_1, 1);
  return FUNC_2(VAR_2, VAR_3, &VAR_4->wqe_size, VAR_6,
         VAR_7, &VAR_4->flags, VAR_8);
 }

 return FUNC_3(VAR_3, &VAR_4->wqe_size, VAR_6);
}
