
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ocrdma_mqe {int dummy; } ;
struct ocrdma_mcqe {int dummy; } ;
struct TYPE_12__ {int id; } ;
struct TYPE_11__ {TYPE_3__ cq; TYPE_3__ sq; } ;
struct TYPE_13__ {int lock; int cmd_wait; } ;
struct ocrdma_dev {TYPE_2__ mq; TYPE_9__ mqe_ctx; TYPE_1__* eq_tbl; } ;
struct TYPE_10__ {int q; int cq_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_9__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocrdma_dev*,TYPE_3__*,int ,int) ;
 int FUNC_4 (struct ocrdma_dev*,TYPE_3__*) ;
 int FUNC_5 (struct ocrdma_dev*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (struct ocrdma_dev*,TYPE_3__*,int ) ;
 int FUNC_7 (struct ocrdma_dev*,TYPE_3__*,int *) ;
 int FUNC_8 (struct ocrdma_dev*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_9(struct ocrdma_dev *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_3(VAR_3, &VAR_3->mq.cq, VAR_0,
    sizeof(struct ocrdma_mcqe));
 if (VAR_4)
  goto alloc_err;

 VAR_3->eq_tbl[0].cq_cnt++;
 VAR_4 = FUNC_7(VAR_3, &VAR_3->mq.cq, &VAR_3->eq_tbl[0].q);
 if (VAR_4)
  goto mbx_cq_free;

 FUNC_1(&VAR_3->mqe_ctx, 0, sizeof(VAR_3->mqe_ctx));
 FUNC_0(&VAR_3->mqe_ctx.cmd_wait);
 FUNC_2(&VAR_3->mqe_ctx.lock);


 VAR_4 = FUNC_3(VAR_3, &VAR_3->mq.sq, VAR_1,
    sizeof(struct ocrdma_mqe));
 if (VAR_4)
  goto mbx_cq_destroy;
 VAR_4 = FUNC_5(VAR_3, &VAR_3->mq.sq, &VAR_3->mq.cq);
 if (VAR_4)
  goto mbx_q_free;
 FUNC_8(VAR_3, VAR_3->mq.cq.id, 1, 0, 0);
 return 0;

mbx_q_free:
 FUNC_4(VAR_3, &VAR_3->mq.sq);
mbx_cq_destroy:
 FUNC_6(VAR_3, &VAR_3->mq.cq, VAR_2);
mbx_cq_free:
 FUNC_4(VAR_3, &VAR_3->mq.cq);
alloc_err:
 return VAR_4;
}
