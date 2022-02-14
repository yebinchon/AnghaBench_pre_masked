
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vio_dring_state {int dummy; } ;
struct TYPE_4__ {int lock; struct vio_dring_state* drings; } ;
struct vdc_port {int drain; TYPE_2__ vio; } ;
struct blk_mq_queue_data {int rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_3__ {struct vdc_port* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct blk_mq_hw_ctx*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct vio_dring_state*) ;

__attribute__((used)) static blk_status_t FUNC_7(struct blk_mq_hw_ctx *VAR_4,
     const struct blk_mq_queue_data *VAR_5)
{
 struct vdc_port *VAR_6 = VAR_4->queue->queuedata;
 struct vio_dring_state *VAR_7;
 unsigned long VAR_8;

 VAR_7 = &VAR_6->vio.drings[VAR_3];

 FUNC_1(VAR_5->rq);

 FUNC_3(&VAR_6->vio.lock, VAR_8);




 if (FUNC_5(VAR_6->drain)) {
  FUNC_4(&VAR_6->vio.lock, VAR_8);
  return VAR_1;
 }

 if (FUNC_5(FUNC_6(VAR_7) < 1)) {
  FUNC_4(&VAR_6->vio.lock, VAR_8);
  FUNC_2(VAR_4);
  return VAR_0;
 }

 if (FUNC_0(VAR_5->rq) < 0) {
  FUNC_4(&VAR_6->vio.lock, VAR_8);
  return VAR_1;
 }

 FUNC_4(&VAR_6->vio.lock, VAR_8);
 return VAR_2;
}
