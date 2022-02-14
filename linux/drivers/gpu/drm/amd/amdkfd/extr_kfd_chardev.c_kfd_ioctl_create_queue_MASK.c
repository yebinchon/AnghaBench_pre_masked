
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_properties {int doorbell_off; } ;
struct kfd_process_device {int dummy; } ;
struct kfd_process {int mutex; int pqm; int pasid; } ;
struct kfd_ioctl_create_queue_args {unsigned int gpu_id; unsigned int queue_id; unsigned int ring_base_address; unsigned int read_pointer_address; unsigned int write_pointer_address; int doorbell_offset; } ;
struct kfd_dev {TYPE_1__* device_info; int id; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int asic_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kfd_process_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct kfd_process_device* FUNC_3 (struct kfd_dev*,struct kfd_process*) ;
 struct kfd_dev* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct queue_properties*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct kfd_dev*,struct file*,struct queue_properties*,unsigned int*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct queue_properties*,struct kfd_ioctl_create_queue_args*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_4, struct kfd_process *VAR_5,
     void *VAR_6)
{
 struct kfd_ioctl_create_queue_args *VAR_7 = VAR_6;
 struct kfd_dev *VAR_8;
 int VAR_9 = 0;
 unsigned int VAR_10;
 struct kfd_process_device *VAR_11;
 struct queue_properties VAR_12;

 FUNC_5(&VAR_12, 0, sizeof(struct queue_properties));

 FUNC_9("Creating queue ioctl\n");

 VAR_9 = FUNC_10(&VAR_12, VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_9("Looking for gpu id 0x%x\n", VAR_7->gpu_id);
 VAR_8 = FUNC_4(VAR_7->gpu_id);
 if (!VAR_8) {
  FUNC_9("Could not find gpu id 0x%x\n", VAR_7->gpu_id);
  return -VAR_0;
 }

 FUNC_6(&VAR_5->mutex);

 VAR_11 = FUNC_3(VAR_8, VAR_5);
 if (FUNC_0(VAR_11)) {
  VAR_9 = -VAR_1;
  goto err_bind_process;
 }

 FUNC_9("Creating queue for PASID %d on gpu 0x%x\n",
   VAR_5->pasid,
   VAR_8->id);

 VAR_9 = FUNC_8(&VAR_5->pqm, VAR_8, VAR_4, &VAR_12, &VAR_10);
 if (VAR_9 != 0)
  goto err_create_queue;

 VAR_7->queue_id = VAR_10;



 VAR_7->doorbell_offset = VAR_2;
 VAR_7->doorbell_offset |= FUNC_2(VAR_7->gpu_id);
 VAR_7->doorbell_offset <<= VAR_3;
 if (FUNC_1(VAR_8->device_info->asic_family))





  VAR_7->doorbell_offset |= VAR_12.doorbell_off;

 FUNC_7(&VAR_5->mutex);

 FUNC_9("Queue id %d was created successfully\n", VAR_7->queue_id);

 FUNC_9("Ring buffer address == 0x%016llX\n",
   VAR_7->ring_base_address);

 FUNC_9("Read ptr address    == 0x%016llX\n",
   VAR_7->read_pointer_address);

 FUNC_9("Write ptr address   == 0x%016llX\n",
   VAR_7->write_pointer_address);

 return 0;

err_create_queue:
err_bind_process:
 FUNC_7(&VAR_5->mutex);
 return VAR_9;
}
