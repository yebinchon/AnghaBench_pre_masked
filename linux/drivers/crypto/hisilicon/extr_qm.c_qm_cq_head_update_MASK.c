
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq_head; int cqc_phase; } ;
struct hisi_qp {TYPE_1__ qp_status; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hisi_qp *VAR_1)
{
 if (VAR_1->qp_status.cq_head == VAR_0 - 1) {
  VAR_1->qp_status.cqc_phase = !VAR_1->qp_status.cqc_phase;
  VAR_1->qp_status.cq_head = 0;
 } else {
  VAR_1->qp_status.cq_head++;
 }
}
