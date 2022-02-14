
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_8__ {unsigned int queue_id; scalar_t__ type; size_t sdma_engine_id; int sdma_queue_id; int doorbell_off; } ;
struct queue {unsigned int doorbell_id; int process; TYPE_4__ properties; } ;
struct qcm_process_device {int doorbell_bitmap; TYPE_1__* dqm; } ;
struct TYPE_7__ {unsigned int* sdma_doorbell_idx; } ;
struct kfd_dev {TYPE_3__ shared_resources; TYPE_2__* device_info; } ;
struct TYPE_6__ {int asic_family; } ;
struct TYPE_5__ {struct kfd_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct kfd_dev*,int ,unsigned int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct qcm_process_device *VAR_5, struct queue *VAR_6)
{
 struct kfd_dev *VAR_7 = VAR_5->dqm->dev;

 if (!FUNC_0(VAR_7->device_info->asic_family)) {



  VAR_6->doorbell_id = VAR_6->properties.queue_id;
 } else if (VAR_6->properties.type == VAR_3 ||
   VAR_6->properties.type == VAR_4) {





  uint32_t *VAR_8 =
    VAR_7->shared_resources.sdma_doorbell_idx;

  VAR_6->doorbell_id = VAR_8[VAR_6->properties.sdma_engine_id]
   + (VAR_6->properties.sdma_queue_id & 1)
   * VAR_2
   + (VAR_6->properties.sdma_queue_id >> 1);
 } else {

  unsigned int VAR_9;

  VAR_9 = FUNC_1(VAR_5->doorbell_bitmap,
         VAR_1);
  if (VAR_9 >= VAR_1) {
   FUNC_3("No doorbells available");
   return -VAR_0;
  }
  FUNC_4(VAR_9, VAR_5->doorbell_bitmap);
  VAR_6->doorbell_id = VAR_9;
 }

 VAR_6->properties.doorbell_off =
  FUNC_2(VAR_7, VAR_6->process,
       VAR_6->doorbell_id);

 return 0;
}
