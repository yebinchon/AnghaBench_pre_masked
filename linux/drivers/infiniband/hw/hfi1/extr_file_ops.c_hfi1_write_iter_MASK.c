
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {TYPE_1__* ki_filp; } ;
struct iovec {int dummy; } ;
struct iov_iter {unsigned long nr_segs; scalar_t__ iov; } ;
struct hfi1_user_sdma_pkt_q {scalar_t__ n_max_reqs; int n_reqs; } ;
struct hfi1_user_sdma_comp_q {int dummy; } ;
struct hfi1_filedata {int subctxt; TYPE_2__* uctxt; int dd; struct hfi1_user_sdma_comp_q* cq; struct hfi1_user_sdma_pkt_q* pq; } ;
typedef int ssize_t ;
struct TYPE_4__ {int ctxt; } ;
struct TYPE_3__ {struct hfi1_filedata* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct hfi1_filedata*,struct iovec*,unsigned long,unsigned long*) ;
 int FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (int ,int ,int ,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct kiocb *VAR_3, struct iov_iter *VAR_4)
{
 struct hfi1_filedata *VAR_5 = VAR_3->ki_filp->private_data;
 struct hfi1_user_sdma_pkt_q *VAR_6 = VAR_5->pq;
 struct hfi1_user_sdma_comp_q *VAR_7 = VAR_5->cq;
 int VAR_8 = 0, VAR_9 = 0;
 unsigned long VAR_10 = VAR_4->nr_segs;

 if (!VAR_7 || !VAR_6)
  return -VAR_1;

 if (!FUNC_2(VAR_4) || !VAR_10)
  return -VAR_0;

 FUNC_3(VAR_5->dd, VAR_5->uctxt->ctxt, VAR_5->subctxt, VAR_10);

 if (FUNC_0(&VAR_6->n_reqs) == VAR_6->n_max_reqs)
  return -VAR_2;

 while (VAR_10) {
  int VAR_11;
  unsigned long VAR_12 = 0;

  VAR_11 = FUNC_1(
   VAR_5, (struct iovec *)(VAR_4->iov + VAR_8),
   VAR_10, &VAR_12);
  if (VAR_11) {
   VAR_9 = VAR_11;
   break;
  }
  VAR_10 -= VAR_12;
  VAR_8 += VAR_12;
  VAR_9++;
 }

 return VAR_9;
}
