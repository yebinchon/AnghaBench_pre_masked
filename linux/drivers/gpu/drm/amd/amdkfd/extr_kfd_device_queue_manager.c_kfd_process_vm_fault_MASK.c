
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_process_device {int qpd; } ;
struct kfd_process {int dummy; } ;
struct TYPE_2__ {int (* evict_process_queues ) (struct device_queue_manager*,int *) ;} ;
struct device_queue_manager {TYPE_1__ ops; int dev; } ;


 int VAR_0 ;
 struct kfd_process_device* FUNC_0 (int ,struct kfd_process*) ;
 struct kfd_process* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct kfd_process*) ;
 int FUNC_3 (struct device_queue_manager*,int *) ;

int FUNC_4(struct device_queue_manager *VAR_1,
    unsigned int VAR_2)
{
 struct kfd_process_device *VAR_3;
 struct kfd_process *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0;

 if (!VAR_4)
  return -VAR_0;
 VAR_3 = FUNC_0(VAR_1->dev, VAR_4);
 if (VAR_3)
  VAR_5 = VAR_1->ops.evict_process_queues(VAR_1, &VAR_3->qpd);
 FUNC_2(VAR_4);

 return VAR_5;
}
