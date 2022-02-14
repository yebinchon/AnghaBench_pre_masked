
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_queue_manager {TYPE_2__* dev; } ;
struct TYPE_4__ {int kgd; TYPE_1__* kfd2kgd; } ;
struct TYPE_3__ {int (* set_pasid_vmid_mapping ) (int ,unsigned int,unsigned int) ;} ;


 int FUNC_0 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct device_queue_manager *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2)
{
 return VAR_0->dev->kfd2kgd->set_pasid_vmid_mapping(
      VAR_0->dev->kgd, VAR_1, VAR_2);
}
