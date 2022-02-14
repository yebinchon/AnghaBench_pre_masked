
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request_queue {int nr_hw_queues; scalar_t__ elevator; TYPE_1__* mq_ops; } ;
struct request {TYPE_2__* mq_hctx; int queuelist; } ;
struct TYPE_8__ {int prev; } ;
struct blk_plug {unsigned int rq_count; TYPE_3__ mq_list; } ;
struct blk_mq_alloc_data {int cmd_flags; TYPE_2__* hctx; int flags; } ;
struct bio {int bi_opf; } ;
typedef int blk_qc_t ;
struct TYPE_7__ {int dispatch_busy; } ;
struct TYPE_6__ {scalar_t__ commit_rqs; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct request_queue*,struct bio**,unsigned int*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct blk_plug*,struct request*) ;
 scalar_t__ FUNC_4 (struct request_queue*,struct bio*,unsigned int,struct request**) ;
 int FUNC_5 (struct blk_plug*,int) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (struct request*,struct bio*,unsigned int) ;
 struct request* FUNC_8 (struct request_queue*,struct bio*,struct blk_mq_alloc_data*) ;
 struct blk_plug* FUNC_9 (struct request_queue*,struct bio*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 scalar_t__ FUNC_11 (struct request_queue*,struct bio*,unsigned int) ;
 int FUNC_12 (struct request*,int,int,int) ;
 int FUNC_13 (TYPE_2__*,struct request*,int *) ;
 int FUNC_14 (struct request_queue*,struct bio**) ;
 int FUNC_15 (struct request_queue*) ;
 int FUNC_16 (struct request_queue*) ;
 scalar_t__ FUNC_17 (struct request*) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (TYPE_3__*) ;
 struct request* FUNC_20 (int ) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (TYPE_2__*,struct request*) ;
 int FUNC_24 (struct request_queue*,struct bio*) ;
 int FUNC_25 (struct request_queue*,struct bio*) ;
 int FUNC_26 (struct request_queue*,struct request*,struct bio*) ;
 int FUNC_27 (struct request_queue*,struct bio*,int) ;
 int FUNC_28 (struct request_queue*) ;
 int FUNC_29 (struct request_queue*,int,int) ;
 scalar_t__ FUNC_30 (int const) ;

__attribute__((used)) static blk_qc_t FUNC_31(struct request_queue *VAR_4, struct bio *VAR_5)
{
 const int VAR_6 = FUNC_22(VAR_5->bi_opf);
 const int VAR_7 = FUNC_21(VAR_5->bi_opf);
 struct blk_mq_alloc_data VAR_8 = { .flags = 0};
 struct request *VAR_9;
 struct blk_plug *VAR_10;
 struct request *VAR_11 = ((void*)0);
 unsigned int VAR_12;
 blk_qc_t VAR_13;

 FUNC_14(VAR_4, &VAR_5);
 FUNC_0(VAR_4, &VAR_5, &VAR_12);

 if (!FUNC_1(VAR_5))
  return VAR_2;

 if (!VAR_7 && !FUNC_15(VAR_4) &&
     FUNC_4(VAR_4, VAR_5, VAR_12, &VAR_11))
  return VAR_2;

 if (FUNC_11(VAR_4, VAR_5, VAR_12))
  return VAR_2;

 FUNC_25(VAR_4, VAR_5);

 VAR_8.cmd_flags = VAR_5->bi_opf;
 VAR_9 = FUNC_8(VAR_4, VAR_5, &VAR_8);
 if (FUNC_30(!VAR_9)) {
  FUNC_24(VAR_4, VAR_5);
  if (VAR_5->bi_opf & VAR_3)
   FUNC_2(VAR_5);
  return VAR_2;
 }

 FUNC_27(VAR_4, VAR_5, VAR_5->bi_opf);

 FUNC_26(VAR_4, VAR_9, VAR_5);

 VAR_13 = FUNC_23(VAR_8.hctx, VAR_9);

 FUNC_7(VAR_9, VAR_5, VAR_12);

 VAR_10 = FUNC_9(VAR_4, VAR_5);
 if (FUNC_30(VAR_7)) {

  FUNC_6(VAR_9);
  FUNC_10(VAR_8.hctx, 1);
 } else if (VAR_10 && (VAR_4->nr_hw_queues == 1 || VAR_4->mq_ops->commit_rqs ||
    !FUNC_16(VAR_4))) {







  unsigned int VAR_14 = VAR_10->rq_count;
  struct request *VAR_15 = ((void*)0);

  if (!VAR_14)
   FUNC_28(VAR_4);
  else
   VAR_15 = FUNC_20(VAR_10->mq_list.prev);

  if (VAR_14 >= VAR_0 || (VAR_15 &&
      FUNC_17(VAR_15) >= VAR_1)) {
   FUNC_5(VAR_10, 0);
   FUNC_28(VAR_4);
  }

  FUNC_3(VAR_10, VAR_9);
 } else if (VAR_4->elevator) {
  FUNC_12(VAR_9, 0, 1, 1);
 } else if (VAR_10 && !FUNC_15(VAR_4)) {







  if (FUNC_19(&VAR_10->mq_list))
   VAR_11 = ((void*)0);
  if (VAR_11) {
   FUNC_18(&VAR_11->queuelist);
   VAR_10->rq_count--;
  }
  FUNC_3(VAR_10, VAR_9);
  FUNC_28(VAR_4);

  if (VAR_11) {
   VAR_8.hctx = VAR_11->mq_hctx;
   FUNC_29(VAR_4, 1, 1);
   FUNC_13(VAR_8.hctx, VAR_11,
     &VAR_13);
  }
 } else if ((VAR_4->nr_hw_queues > 1 && VAR_6) ||
   !VAR_8.hctx->dispatch_busy) {
  FUNC_13(VAR_8.hctx, VAR_9, &VAR_13);
 } else {
  FUNC_12(VAR_9, 0, 1, 1);
 }

 return VAR_13;
}
