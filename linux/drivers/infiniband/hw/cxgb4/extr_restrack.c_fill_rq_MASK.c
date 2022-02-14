
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int in_use; int rqt_size; int rqt_hwaddr; int msn; int wq_pidx; int pidx; int cidx; int memsize; int qid; } ;
struct t4_wq {TYPE_1__ rq; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,char*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct t4_wq *VAR_2)
{

 if (FUNC_0(VAR_1, "rqid", VAR_2->rq.qid))
  goto err;
 if (FUNC_0(VAR_1, "memsize", VAR_2->rq.memsize))
  goto err;
 if (FUNC_0(VAR_1, "cidx", VAR_2->rq.cidx))
  goto err;
 if (FUNC_0(VAR_1, "pidx", VAR_2->rq.pidx))
  goto err;
 if (FUNC_0(VAR_1, "wq_pidx", VAR_2->rq.wq_pidx))
  goto err;
 if (FUNC_0(VAR_1, "msn", VAR_2->rq.msn))
  goto err;
 if (FUNC_1(VAR_1, "rqt_hwaddr", VAR_2->rq.rqt_hwaddr))
  goto err;
 if (FUNC_0(VAR_1, "rqt_size", VAR_2->rq.rqt_size))
  goto err;
 if (FUNC_0(VAR_1, "in_use", VAR_2->rq.in_use))
  goto err;
 if (FUNC_0(VAR_1, "size", VAR_2->rq.size))
  goto err;
 return 0;
err:
 return -VAR_0;
}
