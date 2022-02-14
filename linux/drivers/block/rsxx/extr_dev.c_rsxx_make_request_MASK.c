
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rsxx_cardinfo {int halt; int dma_fault; int gendisk; } ;
struct rsxx_bio_meta {int pending_dmas; int start_time; int error; struct bio* bio; } ;
struct request_queue {struct rsxx_cardinfo* queuedata; } ;
struct TYPE_2__ {scalar_t__ bi_size; scalar_t__ bi_sector; } ;
struct bio {scalar_t__ bi_status; TYPE_1__ bi_iter; } ;
typedef scalar_t__ blk_status_t ;
typedef int blk_qc_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int VAR_5 ;
 int FUNC_5 (struct request_queue*,struct bio**) ;
 int FUNC_6 (int ,char*,char,struct rsxx_bio_meta*,int,scalar_t__) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct rsxx_cardinfo*,struct bio*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_6 ;
 struct rsxx_bio_meta* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,struct rsxx_bio_meta*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (struct rsxx_cardinfo*,struct bio*,int *,int ,struct rsxx_bio_meta*) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static blk_qc_t FUNC_15(struct request_queue *VAR_7, struct bio *VAR_8)
{
 struct rsxx_cardinfo *VAR_9 = VAR_7->queuedata;
 struct rsxx_bio_meta *VAR_10;
 blk_status_t VAR_11 = VAR_1;

 FUNC_5(VAR_7, &VAR_8);

 FUNC_12();

 if (!VAR_9)
  goto req_err;

 if (FUNC_3(VAR_8) > FUNC_9(VAR_9->gendisk))
  goto req_err;

 if (FUNC_14(VAR_9->halt))
  goto req_err;

 if (FUNC_14(VAR_9->dma_fault))
  goto req_err;

 if (VAR_8->bi_iter.bi_size == 0) {
  FUNC_7(FUNC_0(VAR_9), "size zero BIO!\n");
  goto req_err;
 }

 VAR_10 = FUNC_10(VAR_5, VAR_3);
 if (!VAR_10) {
  VAR_11 = VAR_2;
  goto req_err;
 }

 VAR_10->bio = VAR_8;
 FUNC_1(&VAR_10->error, 0);
 FUNC_1(&VAR_10->pending_dmas, 0);
 VAR_10->start_time = VAR_6;

 if (!FUNC_14(VAR_9->halt))
  FUNC_8(VAR_9, VAR_8);

 FUNC_6(FUNC_0(VAR_9), "BIO[%c]: meta: %p addr8: x%llx size: %d\n",
   FUNC_2(VAR_8) ? 'W' : 'R', VAR_10,
   (u64)VAR_8->bi_iter.bi_sector << 9, VAR_8->bi_iter.bi_size);

 VAR_11 = FUNC_13(VAR_9, VAR_8, &VAR_10->pending_dmas,
        VAR_4, VAR_10);
 if (VAR_11)
  goto queue_err;

 return VAR_0;

queue_err:
 FUNC_11(VAR_5, VAR_10);
req_err:
 if (VAR_11)
  VAR_8->bi_status = VAR_11;
 FUNC_4(VAR_8);
 return VAR_0;
}
