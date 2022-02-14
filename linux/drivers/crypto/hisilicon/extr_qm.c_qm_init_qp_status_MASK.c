
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_qp_status {int cqc_phase; scalar_t__ flags; scalar_t__ cq_head; scalar_t__ sq_tail; } ;
struct hisi_qp {struct hisi_qp_status qp_status; } ;



__attribute__((used)) static void FUNC_0(struct hisi_qp *VAR_0)
{
 struct hisi_qp_status *VAR_1 = &VAR_0->qp_status;

 VAR_1->sq_tail = 0;
 VAR_1->cq_head = 0;
 VAR_1->cqc_phase = 1;
 VAR_1->flags = 0;
}
