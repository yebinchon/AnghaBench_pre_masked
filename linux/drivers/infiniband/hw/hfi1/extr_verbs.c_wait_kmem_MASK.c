
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rvt_qp {size_t state; int s_lock; } ;
struct hfi1_pkt_state {TYPE_3__* wait; TYPE_2__* s_txreq; } ;
struct hfi1_ibdev {int iowait_lock; } ;
struct TYPE_6__ {int tx_head; } ;
struct TYPE_4__ {int list; } ;
struct TYPE_5__ {TYPE_1__ txreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rvt_qp*,TYPE_3__*) ;
 int FUNC_1 (struct rvt_qp*) ;
 int* VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hfi1_ibdev *VAR_3,
       struct rvt_qp *VAR_4,
       struct hfi1_pkt_state *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_4->s_lock, VAR_6);
 if (VAR_2[VAR_4->state] & VAR_1) {
  FUNC_5(&VAR_3->iowait_lock);
  FUNC_2(&VAR_5->s_txreq->txreq.list,
         &VAR_5->wait->tx_head);
  FUNC_1(VAR_4);
  FUNC_6(&VAR_3->iowait_lock);
  FUNC_0(VAR_4, VAR_5->wait);
  VAR_7 = -VAR_0;
 }
 FUNC_4(&VAR_4->s_lock, VAR_6);

 return VAR_7;
}
