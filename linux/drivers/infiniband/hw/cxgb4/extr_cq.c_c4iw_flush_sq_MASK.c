
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flush_cidx; int cidx; int pidx; int size; struct t4_swsqe* oldest_read; struct t4_swsqe* sw_sq; } ;
struct t4_wq {TYPE_2__ sq; } ;
struct t4_swsqe {int flushed; } ;
struct t4_cq {int dummy; } ;
struct TYPE_3__ {int send_cq; } ;
struct c4iw_qp {TYPE_1__ ibqp; struct t4_wq wq; } ;
struct c4iw_cq {struct t4_cq cq; } ;


 int FUNC_0 (struct t4_wq*) ;
 int FUNC_1 (struct t4_wq*,struct t4_cq*,struct t4_swsqe*) ;
 struct c4iw_cq* FUNC_2 (int ) ;

int FUNC_3(struct c4iw_qp *VAR_0)
{
 int VAR_1 = 0;
 struct t4_wq *VAR_2 = &VAR_0->wq;
 struct c4iw_cq *VAR_3 = FUNC_2(VAR_0->ibqp.send_cq);
 struct t4_cq *VAR_4 = &VAR_3->cq;
 int VAR_5;
 struct t4_swsqe *VAR_6;

 if (VAR_2->sq.flush_cidx == -1)
  VAR_2->sq.flush_cidx = VAR_2->sq.cidx;
 VAR_5 = VAR_2->sq.flush_cidx;
 while (VAR_5 != VAR_2->sq.pidx) {
  VAR_6 = &VAR_2->sq.sw_sq[VAR_5];
  VAR_6->flushed = 1;
  FUNC_1(VAR_2, VAR_4, VAR_6);
  if (VAR_2->sq.oldest_read == VAR_6) {
   FUNC_0(VAR_2);
  }
  VAR_1++;
  if (++VAR_5 == VAR_2->sq.size)
   VAR_5 = 0;
 }
 VAR_2->sq.flush_cidx += VAR_1;
 if (VAR_2->sq.flush_cidx >= VAR_2->sq.size)
  VAR_2->sq.flush_cidx -= VAR_2->sq.size;
 return VAR_1;
}
