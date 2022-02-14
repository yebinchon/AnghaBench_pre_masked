
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_user_sdma_queue {int dummy; } ;
struct qib_filedata {struct qib_user_sdma_queue* pq; } ;
struct qib_ctxtdata {int dummy; } ;
struct kiocb {TYPE_1__* ki_filp; } ;
struct iov_iter {int nr_segs; int iov; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct qib_filedata* private_data; } ;


 int VAR_0 ;
 struct qib_ctxtdata* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct iov_iter*) ;
 int FUNC_2 (struct qib_ctxtdata*,struct qib_user_sdma_queue*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 struct qib_filedata *VAR_3 = VAR_1->ki_filp->private_data;
 struct qib_ctxtdata *VAR_4 = FUNC_0(VAR_1->ki_filp);
 struct qib_user_sdma_queue *VAR_5 = VAR_3->pq;

 if (!FUNC_1(VAR_2) || !VAR_2->nr_segs || !VAR_5)
  return -VAR_0;

 return FUNC_2(VAR_4, VAR_5, VAR_2->iov, VAR_2->nr_segs);
}
