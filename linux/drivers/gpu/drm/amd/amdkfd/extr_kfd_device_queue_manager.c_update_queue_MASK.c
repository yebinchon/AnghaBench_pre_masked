
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int is_active; } ;
struct queue {TYPE_1__ properties; int queue; int pipe; int mqd; TYPE_3__* process; int device; } ;
struct mqd_manager {int (* destroy_mqd ) (struct mqd_manager*,int ,int ,int ,int ,int ) ;int (* load_mqd ) (struct mqd_manager*,int ,int ,int ,TYPE_1__*,scalar_t__) ;int (* update_mqd ) (struct mqd_manager*,int ,TYPE_1__*) ;} ;
struct kfd_process_device {int dummy; } ;
struct device_queue_manager {scalar_t__ sched_policy; int queue_count; struct mqd_manager** mqd_mgrs; } ;
struct TYPE_7__ {scalar_t__ mm; } ;
struct TYPE_6__ {scalar_t__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,char*) ;
 TYPE_4__* VAR_9 ;
 int FUNC_1 (struct device_queue_manager*) ;
 int FUNC_2 (struct device_queue_manager*) ;
 size_t FUNC_3 (scalar_t__) ;
 struct kfd_process_device* FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (struct device_queue_manager*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct mqd_manager*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct mqd_manager*,int ,TYPE_1__*) ;
 int FUNC_9 (struct mqd_manager*,int ,int ,int ,TYPE_1__*,scalar_t__) ;
 int FUNC_10 (struct device_queue_manager*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct device_queue_manager *VAR_10, struct queue *VAR_11)
{
 int VAR_12 = 0;
 struct mqd_manager *VAR_13;
 struct kfd_process_device *VAR_14;
 bool VAR_15 = 0;

 FUNC_1(VAR_10);
 VAR_14 = FUNC_4(VAR_11->device, VAR_11->process);
 if (!VAR_14) {
  VAR_12 = -VAR_1;
  goto out_unlock;
 }
 VAR_13 = VAR_10->mqd_mgrs[FUNC_3(
   VAR_11->properties.type)];


 VAR_15 = VAR_11->properties.is_active;


 if (VAR_10->sched_policy != VAR_6) {
  VAR_12 = FUNC_10(VAR_10,
    VAR_8, 0);
  if (VAR_12) {
   FUNC_6("unmap queue failed\n");
   goto out_unlock;
  }
 } else if (VAR_15 &&
     (VAR_11->properties.type == VAR_3 ||
      VAR_11->properties.type == VAR_4 ||
      VAR_11->properties.type == VAR_5)) {
  VAR_12 = VAR_13->destroy_mqd(VAR_13, VAR_11->mqd,
    VAR_2,
    VAR_7, VAR_11->pipe, VAR_11->queue);
  if (VAR_12) {
   FUNC_6("destroy mqd failed\n");
   goto out_unlock;
  }
 }

 VAR_13->update_mqd(VAR_13, VAR_11->mqd, &VAR_11->properties);







 if (VAR_11->properties.is_active && !VAR_15)
  VAR_10->queue_count++;
 else if (!VAR_11->properties.is_active && VAR_15)
  VAR_10->queue_count--;

 if (VAR_10->sched_policy != VAR_6)
  VAR_12 = FUNC_5(VAR_10);
 else if (VAR_11->properties.is_active &&
   (VAR_11->properties.type == VAR_3 ||
    VAR_11->properties.type == VAR_4 ||
    VAR_11->properties.type == VAR_5)) {
  if (FUNC_0(VAR_11->process->mm != VAR_9->mm,
    "should only run in user thread"))
   VAR_12 = -VAR_0;
  else
   VAR_12 = VAR_13->load_mqd(VAR_13, VAR_11->mqd,
         VAR_11->pipe, VAR_11->queue,
         &VAR_11->properties, VAR_9->mm);
 }

out_unlock:
 FUNC_2(VAR_10);
 return VAR_12;
}
