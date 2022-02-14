
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct pblk_g_ctx {struct bio* private; int lba; int start_time; } ;
struct pblk {int inflight_io; TYPE_1__* disk; struct nvm_tgt_dev* dev; } ;
struct nvm_tgt_dev {struct request_queue* q; } ;
struct nvm_rq {unsigned int nr_ppas; int error; int * ppa_list; int ppa_addr; struct bio* bio; int (* end_io ) (struct nvm_rq*) ;struct pblk* private; int opcode; } ;
struct bio {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int part0; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pblk*,struct nvm_rq*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*,struct bio*) ;
 struct bio* FUNC_3 (struct bio*,int ,int *) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 struct bio* FUNC_7 (struct bio*,unsigned int,int ,int *) ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (struct request_queue*,int ,int ,int *) ;
 int VAR_6 ;
 struct pblk_g_ctx* FUNC_10 (struct nvm_rq*) ;
 struct nvm_rq* FUNC_11 (struct pblk*,int ) ;
 scalar_t__ FUNC_12 (struct pblk*,struct nvm_rq*) ;
 int VAR_7 ;
 int FUNC_13 (struct nvm_rq*) ;
 int FUNC_14 (struct bio*,int ) ;
 int FUNC_15 (struct pblk*,struct nvm_rq*,int ) ;
 int FUNC_16 (struct bio*) ;
 unsigned int FUNC_17 (struct bio*) ;
 unsigned int FUNC_18 (struct pblk*,struct nvm_rq*,struct bio*,int ,int*) ;
 int FUNC_19 (struct pblk*,struct nvm_rq*,struct bio*,int ,int*) ;
 scalar_t__ FUNC_20 (struct pblk*,struct nvm_rq*,int *) ;

void FUNC_21(struct pblk *VAR_8, struct bio *VAR_9)
{
 struct nvm_tgt_dev *VAR_10 = VAR_8->dev;
 struct request_queue *VAR_11 = VAR_10->q;
 sector_t VAR_12 = FUNC_16(VAR_9);
 unsigned int VAR_13 = FUNC_17(VAR_9);
 bool VAR_14;
 struct pblk_g_ctx *VAR_15;
 struct nvm_rq *VAR_16;
 struct bio *VAR_17, *VAR_18;

 FUNC_9(VAR_11, VAR_5, FUNC_6(VAR_9),
         &VAR_8->disk->part0);

 VAR_16 = FUNC_11(VAR_8, VAR_4);

 VAR_16->opcode = VAR_3;
 VAR_16->nr_ppas = VAR_13;
 VAR_16->private = VAR_8;
 VAR_16->end_io = FUNC_13;

 VAR_15 = FUNC_10(VAR_16);
 VAR_15->start_time = VAR_6;
 VAR_15->lba = VAR_12;

 if (FUNC_12(VAR_8, VAR_16)) {
  FUNC_4(VAR_9);
  FUNC_15(VAR_8, VAR_16, VAR_4);
  return;
 }





 VAR_17 = FUNC_3(VAR_9, VAR_1, &VAR_7);

 if (VAR_13 > 1)
  VAR_13 = FUNC_18(VAR_8, VAR_16, VAR_17, VAR_12,
      &VAR_14);
 else
  FUNC_19(VAR_8, VAR_16, VAR_17, VAR_12, &VAR_14);

split_retry:
 VAR_15->private = VAR_9;
 VAR_16->bio = VAR_17;

 if (VAR_14 && VAR_13 == VAR_16->nr_ppas) {

  FUNC_14(VAR_9, 0);
  FUNC_1(&VAR_8->inflight_io);
  FUNC_0(VAR_8, VAR_16, 0);
 } else if (VAR_13 != VAR_16->nr_ppas) {






  VAR_18 = FUNC_7(VAR_9, VAR_13 * VAR_2, VAR_1,
     &VAR_7);
  FUNC_2(VAR_18, VAR_9);
  FUNC_8(VAR_9);







  VAR_9 = VAR_18;
  VAR_16->nr_ppas = VAR_13;
  if (VAR_16->nr_ppas == 1)
   VAR_16->ppa_addr = VAR_16->ppa_list[0];




  FUNC_5(VAR_17);
  VAR_17 = FUNC_3(VAR_9, VAR_1, &VAR_7);
  goto split_retry;
 } else if (FUNC_20(VAR_8, VAR_16, ((void*)0))) {

  VAR_16->error = -VAR_0;
  FUNC_13(VAR_16);
 }
}
