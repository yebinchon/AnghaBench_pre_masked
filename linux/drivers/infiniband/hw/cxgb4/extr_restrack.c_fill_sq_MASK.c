
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int size; int in_use; int flush_cidx; int wq_pidx; int pidx; int cidx; int memsize; int qid; } ;
struct t4_wq {TYPE_1__ sq; int flushed; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,char*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct t4_wq *VAR_2)
{

 if (FUNC_0(VAR_1, "sqid", VAR_2->sq.qid))
  goto err;
 if (FUNC_0(VAR_1, "flushed", VAR_2->flushed))
  goto err;
 if (FUNC_0(VAR_1, "memsize", VAR_2->sq.memsize))
  goto err;
 if (FUNC_0(VAR_1, "cidx", VAR_2->sq.cidx))
  goto err;
 if (FUNC_0(VAR_1, "pidx", VAR_2->sq.pidx))
  goto err;
 if (FUNC_0(VAR_1, "wq_pidx", VAR_2->sq.wq_pidx))
  goto err;
 if (FUNC_0(VAR_1, "flush_cidx", VAR_2->sq.flush_cidx))
  goto err;
 if (FUNC_0(VAR_1, "in_use", VAR_2->sq.in_use))
  goto err;
 if (FUNC_0(VAR_1, "size", VAR_2->sq.size))
  goto err;
 if (FUNC_1(VAR_1, "flags", VAR_2->sq.flags))
  goto err;
 return 0;
err:
 return -VAR_0;
}
