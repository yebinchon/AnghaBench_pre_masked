
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {unsigned int max_sge; scalar_t__ size; struct rvt_krwq* kwq; } ;
struct rvt_srq {TYPE_3__ rq; } ;
struct rvt_rwqe {int num_sge; TYPE_1__* sg_list; int wr_id; } ;
struct rvt_krwq {scalar_t__ head; int p_lock; int tail; } ;
struct ib_srq {int dummy; } ;
struct ib_recv_wr {int num_sge; TYPE_2__* sg_list; int wr_id; struct ib_recv_wr* next; } ;
struct TYPE_5__ {int lkey; int length; int addr; } ;
struct TYPE_4__ {int lkey; int length; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct rvt_srq* FUNC_1 (struct ib_srq*) ;
 struct rvt_rwqe* FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct ib_srq *VAR_2, const struct ib_recv_wr *VAR_3,
        const struct ib_recv_wr **VAR_4)
{
 struct rvt_srq *VAR_5 = FUNC_1(VAR_2);
 struct rvt_krwq *VAR_6;
 unsigned long VAR_7;

 for (; VAR_3; VAR_3 = VAR_3->next) {
  struct rvt_rwqe *VAR_8;
  u32 VAR_9;
  int VAR_10;

  if ((unsigned)VAR_3->num_sge > VAR_5->rq.max_sge) {
   *VAR_4 = VAR_3;
   return -VAR_0;
  }

  FUNC_4(&VAR_5->rq.kwq->p_lock, VAR_7);
  VAR_6 = VAR_5->rq.kwq;
  VAR_9 = VAR_6->head + 1;
  if (VAR_9 >= VAR_5->rq.size)
   VAR_9 = 0;
  if (VAR_9 == FUNC_0(VAR_6->tail)) {
   FUNC_5(&VAR_5->rq.kwq->p_lock, VAR_7);
   *VAR_4 = VAR_3;
   return -VAR_1;
  }

  VAR_8 = FUNC_2(&VAR_5->rq, VAR_6->head);
  VAR_8->wr_id = VAR_3->wr_id;
  VAR_8->num_sge = VAR_3->num_sge;
  for (VAR_10 = 0; VAR_10 < VAR_3->num_sge; VAR_10++) {
   VAR_8->sg_list[VAR_10].addr = VAR_3->sg_list[VAR_10].addr;
   VAR_8->sg_list[VAR_10].length = VAR_3->sg_list[VAR_10].length;
   VAR_8->sg_list[VAR_10].lkey = VAR_3->sg_list[VAR_10].lkey;
  }

  FUNC_3(&VAR_6->head, VAR_9);
  FUNC_5(&VAR_5->rq.kwq->p_lock, VAR_7);
 }
 return 0;
}
