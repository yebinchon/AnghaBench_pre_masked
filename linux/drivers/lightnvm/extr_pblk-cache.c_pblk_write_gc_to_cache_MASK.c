
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_w_ctx {scalar_t__ lba; int ppa; int flags; } ;
struct pblk_gc_rq {int secs_to_gc; int nr_secs; scalar_t__* lba_list; int * paddr_list; int line; void* data; } ;
struct pblk {int recov_gc_writes; int inflight_writes; int gc_wa; int rwb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,unsigned int*) ;
 unsigned int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,void*,struct pblk_w_ctx,int ,int ,unsigned int) ;
 int FUNC_8 (struct pblk*) ;

int FUNC_9(struct pblk *VAR_4, struct pblk_gc_rq *VAR_5)
{
 struct pblk_w_ctx VAR_6;
 unsigned int VAR_7, VAR_8;
 void *VAR_9 = VAR_5->data;
 int VAR_10, VAR_11;





retry:
 if (!FUNC_5(&VAR_4->rwb, VAR_5->secs_to_gc, &VAR_7)) {
  FUNC_3();
  goto retry;
 }

 VAR_6.flags = VAR_3;
 FUNC_4(&VAR_6.ppa);

 for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_5->nr_secs; VAR_10++) {
  if (VAR_5->lba_list[VAR_10] == VAR_0)
   continue;

  VAR_6.lba = VAR_5->lba_list[VAR_10];

  VAR_8 = FUNC_6(&VAR_4->rwb, VAR_7 + VAR_11);
  FUNC_7(&VAR_4->rwb, VAR_9, VAR_6, VAR_5->line,
      VAR_5->paddr_list[VAR_10], VAR_8);

  VAR_9 += VAR_2;
  VAR_11++;
 }

 FUNC_0(VAR_5->secs_to_gc != VAR_11,
     "pblk: inconsistent GC write\n");

 FUNC_1(VAR_11, &VAR_4->gc_wa);






 FUNC_8(VAR_4);
 return VAR_1;
}
