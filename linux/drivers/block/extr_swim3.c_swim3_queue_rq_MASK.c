
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct floppy_state {scalar_t__ state; scalar_t__ write_prot; long req_cyl; long secpercyl; unsigned long head; unsigned long secpertrack; unsigned long req_sector; scalar_t__ retries; scalar_t__ ejected; TYPE_2__* mdev; struct request* cur_req; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_4__ {scalar_t__ media_bay; } ;
struct TYPE_3__ {struct floppy_state* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct floppy_state*) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (struct floppy_state*,int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (struct floppy_state*,int ) ;

__attribute__((used)) static blk_status_t FUNC_10(struct blk_mq_hw_ctx *VAR_9,
       const struct blk_mq_queue_data *VAR_10)
{
 struct floppy_state *VAR_11 = VAR_9->queue->queuedata;
 struct request *VAR_12 = VAR_10->rq;
 unsigned long VAR_13;

 FUNC_5(&VAR_8);
 if (VAR_11->cur_req || VAR_11->state != VAR_7) {
  FUNC_6(&VAR_8);
  return VAR_0;
 }
 FUNC_1(VAR_12);
 VAR_11->cur_req = VAR_12;
 if (VAR_11->mdev->media_bay &&
     FUNC_3(VAR_11->mdev->media_bay) != VAR_3) {
  FUNC_7("%s", "  media bay absent, dropping req\n");
  FUNC_8(VAR_11, VAR_1, 0);
  goto out;
 }
 if (VAR_11->ejected) {
  FUNC_7("%s", "  disk ejected\n");
  FUNC_8(VAR_11, VAR_1, 0);
  goto out;
 }
 if (FUNC_4(VAR_12) == VAR_4) {
  if (VAR_11->write_prot < 0)
   VAR_11->write_prot = FUNC_9(VAR_11, VAR_5);
  if (VAR_11->write_prot) {
   FUNC_7("%s", "  try to write, disk write protected\n");
   FUNC_8(VAR_11, VAR_1, 0);
   goto out;
  }
 }






 VAR_11->req_cyl = ((long)FUNC_2(VAR_12)) / VAR_11->secpercyl;
 VAR_13 = ((long)FUNC_2(VAR_12)) % VAR_11->secpercyl;
 VAR_11->head = VAR_13 / VAR_11->secpertrack;
 VAR_11->req_sector = VAR_13 % VAR_11->secpertrack + 1;
 VAR_11->state = VAR_6;
 VAR_11->retries = 0;

 FUNC_0(VAR_11);

out:
 FUNC_6(&VAR_8);
 return VAR_2;
}
