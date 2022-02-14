
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int qid; int sw_rq; int rqt_size; int rqt_hwaddr; int queue; int memsize; } ;
struct TYPE_8__ {int qid; int sw_sq; } ;
struct t4_wq {TYPE_3__ rq; TYPE_4__ sq; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct c4iw_rdev {TYPE_2__ lldi; } ;
struct c4iw_dev_ucontext {int dummy; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (struct c4iw_rdev*,int ,struct c4iw_dev_ucontext*) ;
 int FUNC_1 (struct c4iw_rdev*,int ,int ) ;
 int FUNC_2 (struct c4iw_rdev*,TYPE_4__*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct c4iw_rdev *VAR_1, struct t4_wq *VAR_2,
        struct c4iw_dev_ucontext *VAR_3, int VAR_4)
{




 FUNC_2(VAR_1, &VAR_2->sq);
 FUNC_5(VAR_2->sq.sw_sq);
 FUNC_0(VAR_1, VAR_2->sq.qid, VAR_3);

 if (VAR_4) {
  FUNC_3(&VAR_1->lldi.pdev->dev,
      VAR_2->rq.memsize, VAR_2->rq.queue,
      FUNC_4(&VAR_2->rq, VAR_0));
  FUNC_1(VAR_1, VAR_2->rq.rqt_hwaddr, VAR_2->rq.rqt_size);
  FUNC_5(VAR_2->rq.sw_rq);
  FUNC_0(VAR_1, VAR_2->rq.qid, VAR_3);
 }
 return 0;
}
