
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct queue {int doorbell_id; TYPE_3__ properties; } ;
struct qcm_process_device {int doorbell_bitmap; TYPE_1__* dqm; } ;
struct kfd_dev {TYPE_2__* device_info; } ;
struct TYPE_5__ {int asic_family; } ;
struct TYPE_4__ {struct kfd_dev* dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct qcm_process_device *VAR_2,
    struct queue *VAR_3)
{
 unsigned int VAR_4;
 struct kfd_dev *VAR_5 = VAR_2->dqm->dev;

 if (!FUNC_0(VAR_5->device_info->asic_family) ||
     VAR_3->properties.type == VAR_0 ||
     VAR_3->properties.type == VAR_1)
  return;

 VAR_4 = FUNC_2(VAR_3->doorbell_id, VAR_2->doorbell_bitmap);
 FUNC_1(!VAR_4);
}
