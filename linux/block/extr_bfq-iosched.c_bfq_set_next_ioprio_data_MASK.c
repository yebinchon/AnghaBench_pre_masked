
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_6__ {int prio_changed; int new_weight; } ;
struct bfq_queue {int new_ioprio; int new_ioprio_class; TYPE_3__ entity; struct bfq_data* bfqd; } ;
struct bfq_io_cq {int ioprio; } ;
struct bfq_data {TYPE_2__* queue; } ;
struct TYPE_5__ {TYPE_1__* backing_dev_info; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct task_struct* VAR_1 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static void
FUNC_7(struct bfq_queue *VAR_2, struct bfq_io_cq *VAR_3)
{
 struct task_struct *VAR_4 = VAR_1;
 int VAR_5;
 struct bfq_data *VAR_6 = VAR_2->bfqd;

 if (!VAR_6)
  return;

 VAR_5 = FUNC_0(VAR_3->ioprio);
 switch (VAR_5) {
 default:
  FUNC_3(VAR_2->bfqd->queue->backing_dev_info->dev,
   "bfq: bad prio class %d\n", VAR_5);

 case 129:



  VAR_2->new_ioprio = FUNC_6(VAR_4);
  VAR_2->new_ioprio_class = FUNC_5(VAR_4);
  break;
 case 128:
  VAR_2->new_ioprio = FUNC_1(VAR_3->ioprio);
  VAR_2->new_ioprio_class = 128;
  break;
 case 131:
  VAR_2->new_ioprio = FUNC_1(VAR_3->ioprio);
  VAR_2->new_ioprio_class = 131;
  break;
 case 130:
  VAR_2->new_ioprio_class = 130;
  VAR_2->new_ioprio = 7;
  break;
 }

 if (VAR_2->new_ioprio >= VAR_0) {
  FUNC_4("bfq_set_next_ioprio_data: new_ioprio %d\n",
   VAR_2->new_ioprio);
  VAR_2->new_ioprio = VAR_0;
 }

 VAR_2->entity.new_weight = FUNC_2(VAR_2->new_ioprio);
 VAR_2->entity.prio_changed = 1;
}
