
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvrdma_qp_cap {int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; } ;
struct ib_qp_cap {int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; } ;



void FUNC_0(struct pvrdma_qp_cap *VAR_0, const struct ib_qp_cap *VAR_1)
{
 VAR_0->max_send_wr = VAR_1->max_send_wr;
 VAR_0->max_recv_wr = VAR_1->max_recv_wr;
 VAR_0->max_send_sge = VAR_1->max_send_sge;
 VAR_0->max_recv_sge = VAR_1->max_recv_sge;
 VAR_0->max_inline_data = VAR_1->max_inline_data;
}
