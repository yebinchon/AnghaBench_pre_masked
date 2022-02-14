
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct aoedev* private; } ;
struct TYPE_4__ {int * next; } ;
struct aoetgt {struct aoeif* ifs; int wpkts; int rpkts; int taint; int ssthresh; int nframes; int maxout; int nout; int addr; TYPE_2__ ffree; int falloc; } ;
struct aoeif {TYPE_1__* nd; } ;
struct aoedev {char rttavg; int rttdev; int ntargets; int lock; struct aoetgt** targets; int ref; int maxbcnt; int kicked; int skbpool; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (struct aoeif*) ;
 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct seq_file*,char*,char,...) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_2, void *VAR_3)
{
 struct aoedev *VAR_4;
 struct aoetgt **VAR_5, **VAR_6;
 struct aoeif *VAR_7, *VAR_8;
 unsigned long VAR_9;
 char VAR_10;

 VAR_4 = VAR_2->private;
 FUNC_2(VAR_2, "rttavg: %d rttdev: %d\n",
  VAR_4->rttavg >> VAR_1,
  VAR_4->rttdev >> VAR_0);
 FUNC_2(VAR_2, "nskbpool: %d\n", FUNC_4(&VAR_4->skbpool));
 FUNC_2(VAR_2, "kicked: %ld\n", VAR_4->kicked);
 FUNC_2(VAR_2, "maxbcnt: %ld\n", VAR_4->maxbcnt);
 FUNC_2(VAR_2, "ref: %ld\n", VAR_4->ref);

 FUNC_5(&VAR_4->lock, VAR_9);
 VAR_5 = VAR_4->targets;
 VAR_6 = VAR_5 + VAR_4->ntargets;
 for (; VAR_5 < VAR_6 && *VAR_5; VAR_5++) {
  VAR_10 = '\t';
  FUNC_2(VAR_2, "falloc: %ld\n", (*VAR_5)->falloc);
  FUNC_2(VAR_2, "ffree: %p\n",
   FUNC_1(&(*VAR_5)->ffree) ? ((void*)0) : (*VAR_5)->ffree.next);
  FUNC_2(VAR_2, "%pm:%d:%d:%d\n", (*VAR_5)->addr, (*VAR_5)->nout,
   (*VAR_5)->maxout, (*VAR_5)->nframes);
  FUNC_2(VAR_2, "\tssthresh:%d\n", (*VAR_5)->ssthresh);
  FUNC_2(VAR_2, "\ttaint:%d\n", (*VAR_5)->taint);
  FUNC_2(VAR_2, "\tr:%d\n", (*VAR_5)->rpkts);
  FUNC_2(VAR_2, "\tw:%d\n", (*VAR_5)->wpkts);
  VAR_7 = (*VAR_5)->ifs;
  VAR_8 = VAR_7 + FUNC_0((*VAR_5)->ifs);
  for (; VAR_7->nd && VAR_7 < VAR_8; VAR_7++) {
   FUNC_2(VAR_2, "%c%s", VAR_10, VAR_7->nd->name);
   VAR_10 = ',';
  }
  FUNC_3(VAR_2, "\n");
 }
 FUNC_6(&VAR_4->lock, VAR_9);

 return 0;
}
