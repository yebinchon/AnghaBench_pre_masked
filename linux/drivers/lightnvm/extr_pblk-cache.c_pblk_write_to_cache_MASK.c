
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct pblk_w_ctx {unsigned long flags; scalar_t__ lba; int ppa; } ;
struct pblk {TYPE_2__* disk; int rl; int req_writes; int inflight_writes; int user_wa; int rwb; TYPE_1__* dev; } ;
struct bio {int bi_opf; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {int part0; } ;
struct TYPE_3__ {struct request_queue* q; } ;


 int VAR_0 ;


 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct bio*,int ) ;
 void* FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct request_queue*,int ,int *,unsigned long) ;
 int FUNC_9 (struct request_queue*,int ,int ,int *) ;
 int FUNC_10 () ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_11 (struct bio*) ;
 int FUNC_12 (struct bio*) ;
 int FUNC_13 (struct pblk*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,struct bio*,int,unsigned int*) ;
 unsigned int FUNC_16 (int *,unsigned int) ;
 int FUNC_17 (int *,void*,struct pblk_w_ctx,unsigned int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (struct pblk*) ;
 int FUNC_20 (struct pblk*) ;
 scalar_t__ FUNC_21 (int) ;

void FUNC_22(struct pblk *VAR_6, struct bio *VAR_7,
    unsigned long VAR_8)
{
 struct request_queue *VAR_9 = VAR_6->dev->q;
 struct pblk_w_ctx VAR_10;
 sector_t VAR_11 = FUNC_11(VAR_7);
 unsigned long VAR_12 = VAR_5;
 unsigned int VAR_13, VAR_14;
 int VAR_15 = FUNC_12(VAR_7);
 int VAR_16, VAR_17;

 FUNC_9(VAR_9, VAR_3, FUNC_7(VAR_7),
         &VAR_6->disk->part0);





retry:
 VAR_17 = FUNC_15(&VAR_6->rwb, VAR_7, VAR_15, &VAR_13);
 switch (VAR_17) {
 case 128:
  FUNC_10();
  goto retry;
 case 129:
  FUNC_13(VAR_6);
  FUNC_6(VAR_7);
  goto out;
 }

 FUNC_14(&VAR_10.ppa);
 VAR_10.flags = VAR_8;
 if (VAR_7->bi_opf & VAR_4) {
  VAR_10.flags |= VAR_2;
  FUNC_19(VAR_6);
 }

 if (FUNC_21(!FUNC_5(VAR_7)))
  goto out;

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  void *VAR_18 = FUNC_3(VAR_7);

  VAR_10.lba = VAR_11 + VAR_16;

  VAR_14 = FUNC_16(&VAR_6->rwb, VAR_13 + VAR_16);
  FUNC_17(&VAR_6->rwb, VAR_18, VAR_10, VAR_14);

  FUNC_2(VAR_7, VAR_1);
 }

 FUNC_0(VAR_15, &VAR_6->user_wa);






 FUNC_18(&VAR_6->rl, VAR_15);

out:
 FUNC_8(VAR_9, VAR_3, &VAR_6->disk->part0, VAR_12);
 FUNC_20(VAR_6);

 if (VAR_17 == VAR_0)
  FUNC_4(VAR_7);
}
