
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rdma_rw_ctx {int dummy; } ;
struct ib_send_wr {int dummy; } ;
struct ib_qp {int dummy; } ;
struct ib_cqe {int dummy; } ;


 int FUNC_0 (struct ib_qp*,struct ib_send_wr*,int *) ;
 struct ib_send_wr* FUNC_1 (struct rdma_rw_ctx*,struct ib_qp*,int ,struct ib_cqe*,struct ib_send_wr*) ;

int FUNC_2(struct rdma_rw_ctx *VAR_0, struct ib_qp *VAR_1, u8 VAR_2,
  struct ib_cqe *VAR_3, struct ib_send_wr *VAR_4)
{
 struct ib_send_wr *VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_0(VAR_1, VAR_5, ((void*)0));
}
