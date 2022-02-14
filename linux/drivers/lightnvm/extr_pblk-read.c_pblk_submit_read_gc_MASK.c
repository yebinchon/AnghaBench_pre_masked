
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_gc_rq {int nr_secs; int secs_to_gc; int * lba_list; int data; int * paddr_list; int line; } ;
struct pblk {int inflight_reads; int recov_gc_reads; int sync_reads; int read_failed_gc; int inflight_io; } ;
struct nvm_rq {int nr_ppas; scalar_t__ error; int opcode; int * ppa_list; int ppa_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct nvm_rq*,int ,int) ;
 int FUNC_5 (struct pblk*,struct nvm_rq*) ;
 int FUNC_6 (struct pblk*,struct nvm_rq*) ;
 int FUNC_7 (struct pblk*,struct nvm_rq*,scalar_t__) ;
 int FUNC_8 (struct pblk*,struct nvm_rq*,int *,int) ;
 scalar_t__ FUNC_9 (struct pblk*,struct nvm_rq*,int ) ;
 int FUNC_10 (struct pblk*,struct nvm_rq*,int ,int *,int *,int) ;
 int FUNC_11 (struct pblk*,struct nvm_rq*,int ,int ,int ) ;

int FUNC_12(struct pblk *VAR_3, struct pblk_gc_rq *VAR_4)
{
 struct nvm_rq VAR_5;
 int VAR_6 = VAR_1;

 FUNC_4(&VAR_5, 0, sizeof(struct nvm_rq));

 VAR_6 = FUNC_5(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_4->nr_secs > 1) {
  VAR_4->secs_to_gc = FUNC_10(VAR_3, &VAR_5, VAR_4->line,
       VAR_4->lba_list,
       VAR_4->paddr_list,
       VAR_4->nr_secs);
  if (VAR_4->secs_to_gc == 1)
   VAR_5.ppa_addr = VAR_5.ppa_list[0];
 } else {
  VAR_4->secs_to_gc = FUNC_11(VAR_3, &VAR_5, VAR_4->line,
       VAR_4->lba_list[0],
       VAR_4->paddr_list[0]);
 }

 if (!(VAR_4->secs_to_gc))
  goto out;

 VAR_5.opcode = VAR_2;
 VAR_5.nr_ppas = VAR_4->secs_to_gc;

 if (FUNC_9(VAR_3, &VAR_5, VAR_4->data)) {
  VAR_6 = -VAR_0;
  goto err_free_dma;
 }

 FUNC_8(VAR_3, &VAR_5, VAR_4->lba_list, VAR_4->nr_secs);

 FUNC_0(&VAR_3->inflight_io);

 if (VAR_5.error) {
  FUNC_2(&VAR_3->read_failed_gc);



 }







out:
 FUNC_6(VAR_3, &VAR_5);
 return VAR_6;

err_free_dma:
 FUNC_6(VAR_3, &VAR_5);
 return VAR_6;
}
