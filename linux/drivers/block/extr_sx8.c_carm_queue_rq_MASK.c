
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct scatterlist {int dummy; } ;
struct request_queue {struct carm_port* queuedata; } ;
struct request {int tag; } ;
struct carm_request {int n_elem; int msg_bucket; struct scatterlist* sg; void* msg_type; } ;
struct carm_port {int port_no; struct carm_host* host; } ;
struct carm_msg_sg {void* len; void* start; } ;
struct carm_msg_rw {int sg_count; struct carm_msg_sg* sg; void* lba_count; void* lba_high; void* lba; void* handle; int sg_type; int id; void* type; } ;
struct carm_host {int hw_sg_used; int lock; TYPE_1__* pdev; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {struct request_queue* queue; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_9 ;
 struct carm_request* FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request_queue*,struct request*,struct scatterlist*) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (struct carm_host*,struct request_queue*) ;
 scalar_t__ FUNC_10 (struct carm_host*,int ) ;
 int FUNC_11 (struct carm_host*) ;
 int FUNC_12 (struct request*) ;
 int FUNC_13 (struct carm_host*,struct carm_request*,int ) ;
 void* FUNC_14 (int ) ;
 void* FUNC_15 (int) ;
 int FUNC_16 (int *,struct scatterlist*,int,int ) ;
 int FUNC_17 (int *,struct scatterlist*,int,int ) ;
 scalar_t__ FUNC_18 (struct request*) ;
 scalar_t__ FUNC_19 (struct request*) ;
 int FUNC_20 (struct scatterlist*) ;
 int FUNC_21 (struct scatterlist*) ;
 int FUNC_22 (struct scatterlist*,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static blk_status_t FUNC_25(struct blk_mq_hw_ctx *VAR_10,
      const struct blk_mq_queue_data *VAR_11)
{
 struct request_queue *VAR_12 = VAR_10->queue;
 struct request *VAR_13 = VAR_11->rq;
 struct carm_port *VAR_14 = VAR_12->queuedata;
 struct carm_host *VAR_15 = VAR_14->host;
 struct carm_request *VAR_16 = FUNC_3(VAR_13);
 struct carm_msg_rw *VAR_17;
 struct scatterlist *VAR_18;
 int VAR_19, VAR_20 = 0, VAR_21;
 unsigned int VAR_22;
 u32 VAR_23;

 VAR_16->n_elem = 0;
 FUNC_22(VAR_16->sg, VAR_4);

 FUNC_4(VAR_13);

 FUNC_23(&VAR_15->lock);
 if (FUNC_18(VAR_13) == VAR_7)
  goto send_msg;


 VAR_18 = &VAR_16->sg[0];
 VAR_20 = FUNC_5(VAR_12, VAR_13, VAR_18);
 if (VAR_20 <= 0)
  goto out_ioerr;


 VAR_20 = FUNC_16(&VAR_15->pdev->dev, VAR_18, VAR_20, FUNC_12(VAR_13));
 if (VAR_20 <= 0)
  goto out_ioerr;


 if (VAR_15->hw_sg_used >= VAR_3 - VAR_20)
  goto out_resource;

 VAR_16->n_elem = VAR_20;
 VAR_15->hw_sg_used += VAR_20;





 FUNC_2("build msg\n");
 VAR_17 = (struct carm_msg_rw *) FUNC_10(VAR_15, VAR_13->tag);

 if (FUNC_19(VAR_13) == VAR_9) {
  VAR_17->type = VAR_6;
  VAR_16->msg_type = VAR_6;
 } else {
  VAR_17->type = VAR_5;
  VAR_16->msg_type = VAR_5;
 }

 VAR_17->id = VAR_14->port_no;
 VAR_17->sg_count = VAR_20;
 VAR_17->sg_type = VAR_8;
 VAR_17->handle = FUNC_15(FUNC_1(VAR_13->tag));
 VAR_17->lba = FUNC_15(FUNC_6(VAR_13) & 0xffffffff);
 VAR_23 = (FUNC_6(VAR_13) >> 16) >> 16;
 VAR_17->lba_high = FUNC_14( (u16) VAR_23 );
 VAR_17->lba_count = FUNC_14(FUNC_7(VAR_13));

 VAR_22 = sizeof(struct carm_msg_rw) - sizeof(VAR_17->sg);
 for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
  struct carm_msg_sg *VAR_24 = &VAR_17->sg[VAR_19];
  VAR_24->start = FUNC_15(FUNC_20(&VAR_16->sg[VAR_19]));
  VAR_24->len = FUNC_15(FUNC_21(&VAR_16->sg[VAR_19]));
  VAR_22 += sizeof(struct carm_msg_sg);
 }

 VAR_21 = FUNC_8(VAR_22);
 FUNC_0(VAR_21 < 0);
 VAR_16->msg_bucket = (u32) VAR_21;
send_msg:



 FUNC_2("send msg, tag == %u\n", VAR_13->tag);
 VAR_21 = FUNC_13(VAR_15, VAR_16, VAR_13->tag);
 if (VAR_21) {
  VAR_15->hw_sg_used -= VAR_20;
  goto out_resource;
 }

 FUNC_24(&VAR_15->lock);
 return VAR_2;
out_resource:
 FUNC_17(&VAR_15->pdev->dev, &VAR_16->sg[0], VAR_20, FUNC_12(VAR_13));
 FUNC_9(VAR_15, VAR_12);
 FUNC_24(&VAR_15->lock);
 return VAR_0;
out_ioerr:
 FUNC_11(VAR_15);
 FUNC_24(&VAR_15->lock);
 return VAR_1;
}
