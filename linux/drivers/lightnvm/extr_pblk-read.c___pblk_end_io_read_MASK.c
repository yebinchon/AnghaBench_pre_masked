
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_g_ctx {unsigned long start_time; int lba; } ;
struct pblk {int inflight_io; int inflight_reads; int sync_reads; TYPE_1__* disk; struct nvm_tgt_dev* dev; } ;
struct nvm_tgt_dev {int q; } ;
struct nvm_rq {int nr_ppas; scalar_t__ error; struct bio* bio; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int part0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (int ,int ,int *,unsigned long) ;
 struct pblk_g_ctx* FUNC_5 (struct nvm_rq*) ;
 int FUNC_6 (struct pblk*,struct nvm_rq*,int ) ;
 int FUNC_7 (struct pblk*,struct nvm_rq*) ;
 int FUNC_8 (struct pblk*,struct nvm_rq*,int ) ;
 int FUNC_9 (struct pblk*,struct nvm_rq*) ;

__attribute__((used)) static void FUNC_10(struct pblk *VAR_2, struct nvm_rq *VAR_3,
          bool VAR_4)
{
 struct nvm_tgt_dev *VAR_5 = VAR_2->dev;
 struct pblk_g_ctx *VAR_6 = FUNC_5(VAR_3);
 struct bio *VAR_7 = VAR_3->bio;
 unsigned long VAR_8 = VAR_6->start_time;

 FUNC_4(VAR_5->q, VAR_1, &VAR_2->disk->part0, VAR_8);

 if (VAR_3->error)
  FUNC_7(VAR_2, VAR_3);

 FUNC_8(VAR_2, VAR_3, VAR_6->lba);
 FUNC_3(VAR_7);

 if (VAR_4)
  FUNC_9(VAR_2, VAR_3);






 FUNC_6(VAR_2, VAR_3, VAR_0);
 FUNC_0(&VAR_2->inflight_io);
}
