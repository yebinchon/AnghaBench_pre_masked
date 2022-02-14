
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wr_log_entry {int valid; int wr_id; int post_sge_ts; int post_host_time; int opcode; int qid; int cqe_sge_ts; int poll_host_time; int poll_sge_ts; } ;
struct TYPE_11__ {size_t cidx; TYPE_4__* sw_rq; int qid; } ;
struct TYPE_9__ {size_t cidx; TYPE_2__* sw_sq; int qid; } ;
struct t4_wq {TYPE_6__* rdev; TYPE_5__ rq; TYPE_3__ sq; } ;
struct t4_cqe {int dummy; } ;
struct TYPE_7__ {int * ports; } ;
struct TYPE_12__ {int wr_log_size; struct wr_log_entry* wr_log; TYPE_1__ lldi; int wr_log_idx; } ;
struct TYPE_10__ {int sge_ts; int host_time; } ;
struct TYPE_8__ {int sge_ts; int host_time; } ;


 int FUNC_0 (struct t4_cqe*) ;
 int FUNC_1 (struct t4_cqe*) ;
 int FUNC_2 (struct t4_cqe*) ;
 int FUNC_3 (struct t4_cqe*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct t4_cqe*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

void FUNC_8(struct t4_wq *VAR_1, struct t4_cqe *VAR_2)
{
 struct wr_log_entry VAR_3;
 int VAR_4;

 if (!VAR_1->rdev->wr_log)
  return;

 VAR_4 = (FUNC_5(&VAR_1->rdev->wr_log_idx) - 1) &
  (VAR_1->rdev->wr_log_size - 1);
 VAR_3.poll_sge_ts = FUNC_6(VAR_1->rdev->lldi.ports[0]);
 VAR_3.poll_host_time = FUNC_7();
 VAR_3.valid = 1;
 VAR_3.cqe_sge_ts = FUNC_1(VAR_2);
 if (FUNC_4(VAR_2)) {
  VAR_3.qid = VAR_1->sq.qid;
  VAR_3.opcode = FUNC_0(VAR_2);
  VAR_3.post_host_time = VAR_1->sq.sw_sq[VAR_1->sq.cidx].host_time;
  VAR_3.post_sge_ts = VAR_1->sq.sw_sq[VAR_1->sq.cidx].sge_ts;
  VAR_3.wr_id = FUNC_3(VAR_2);
 } else {
  VAR_3.qid = VAR_1->rq.qid;
  VAR_3.opcode = VAR_0;
  VAR_3.post_host_time = VAR_1->rq.sw_rq[VAR_1->rq.cidx].host_time;
  VAR_3.post_sge_ts = VAR_1->rq.sw_rq[VAR_1->rq.cidx].sge_ts;
  VAR_3.wr_id = FUNC_2(VAR_2);
 }
 VAR_1->rdev->wr_log[VAR_4] = VAR_3;
}
