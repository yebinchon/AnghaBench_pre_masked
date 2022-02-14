
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kfd_dev {TYPE_1__* device_info; } ;
struct TYPE_4__ {int (* initialize ) (struct device_queue_manager*) ;void* get_wave_state; int restore_process_queues; int evict_process_queues; int process_termination; void* set_trap_handler; void* set_cache_memory_policy; void* uninitialize; void* unregister_process; void* register_process; void* update_queue; int destroy_queue; int create_queue; int stop; int start; int destroy_kernel_queue; int create_kernel_queue; } ;
struct device_queue_manager {int sched_policy; TYPE_2__ ops; int asic_ops; struct kfd_dev* dev; } ;
struct TYPE_3__ {int asic_family; } ;
 int VAR_0 ;



 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (struct device_queue_manager*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_8 (struct device_queue_manager*) ;
 int FUNC_9 (struct device_queue_manager*) ;
 int FUNC_10 (struct device_queue_manager*) ;
 int FUNC_11 (struct device_queue_manager*) ;
 struct device_queue_manager* FUNC_12 (int,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_15 (struct device_queue_manager*) ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;

struct device_queue_manager *FUNC_16(struct kfd_dev *VAR_25)
{
 struct device_queue_manager *VAR_26;

 FUNC_13("Loading device queue manager\n");

 VAR_26 = FUNC_12(sizeof(*VAR_26), VAR_0);
 if (!VAR_26)
  return ((void*)0);

 switch (VAR_25->device_info->asic_family) {

 case 142:





 case 135:
  VAR_26->sched_policy = 128;
  break;
 default:
  VAR_26->sched_policy = VAR_15;
  break;
 }

 VAR_26->dev = VAR_25;
 switch (VAR_26->sched_policy) {
 case 130:
 case 129:

  VAR_26->ops.create_queue = VAR_2;
  VAR_26->ops.initialize = FUNC_9;
  VAR_26->ops.start = VAR_18;
  VAR_26->ops.stop = VAR_20;
  VAR_26->ops.destroy_queue = VAR_5;
  VAR_26->ops.update_queue = VAR_24;
  VAR_26->ops.register_process = VAR_12;
  VAR_26->ops.unregister_process = VAR_23;
  VAR_26->ops.uninitialize = VAR_22;
  VAR_26->ops.create_kernel_queue = VAR_1;
  VAR_26->ops.destroy_kernel_queue = VAR_4;
  VAR_26->ops.set_cache_memory_policy = VAR_16;
  VAR_26->ops.set_trap_handler = VAR_17;
  VAR_26->ops.process_termination = VAR_10;
  VAR_26->ops.evict_process_queues = VAR_7;
  VAR_26->ops.restore_process_queues = VAR_13;
  VAR_26->ops.get_wave_state = VAR_9;
  break;
 case 128:

  VAR_26->ops.start = VAR_19;
  VAR_26->ops.stop = VAR_21;
  VAR_26->ops.create_queue = VAR_3;
  VAR_26->ops.destroy_queue = VAR_6;
  VAR_26->ops.update_queue = VAR_24;
  VAR_26->ops.register_process = VAR_12;
  VAR_26->ops.unregister_process = VAR_23;
  VAR_26->ops.initialize = FUNC_10;
  VAR_26->ops.uninitialize = VAR_22;
  VAR_26->ops.set_cache_memory_policy = VAR_16;
  VAR_26->ops.set_trap_handler = VAR_17;
  VAR_26->ops.process_termination = VAR_11;
  VAR_26->ops.evict_process_queues = VAR_8;
  VAR_26->ops.restore_process_queues =
   VAR_14;
  VAR_26->ops.get_wave_state = VAR_9;
  break;
 default:
  FUNC_14("Invalid scheduling policy %d\n", VAR_26->sched_policy);
  goto out_free;
 }

 switch (VAR_25->device_info->asic_family) {
 case 144:
  FUNC_6(&VAR_26->asic_ops);
  break;

 case 141:
  FUNC_2(&VAR_26->asic_ops);
  break;

 case 142:
  FUNC_3(&VAR_26->asic_ops);
  break;

 case 135:
 case 143:
 case 139:
 case 138:
 case 137:
 case 131:
  FUNC_7(&VAR_26->asic_ops);
  break;

 case 134:
 case 133:
 case 132:
 case 136:
 case 145:
  FUNC_5(&VAR_26->asic_ops);
  break;
 case 140:
  FUNC_4(&VAR_26->asic_ops);
  break;
 default:
  FUNC_0(1, "Unexpected ASIC family %u",
       VAR_25->device_info->asic_family);
  goto out_free;
 }

 if (FUNC_8(VAR_26))
  goto out_free;

 if (FUNC_1(VAR_26)) {
  FUNC_14("Failed to allocate hiq sdma mqd trunk buffer\n");
  goto out_free;
 }

 if (!VAR_26->ops.initialize(VAR_26))
  return VAR_26;

out_free:
 FUNC_11(VAR_26);
 return ((void*)0);
}
