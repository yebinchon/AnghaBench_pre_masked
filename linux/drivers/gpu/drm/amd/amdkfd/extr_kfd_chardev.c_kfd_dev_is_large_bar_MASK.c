
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_local_mem_info {scalar_t__ local_mem_size_private; scalar_t__ local_mem_size_public; } ;
struct kfd_dev {int kgd; TYPE_1__* device_info; } ;
struct TYPE_2__ {scalar_t__ needs_iommu_device; } ;


 int FUNC_0 (int ,struct kfd_local_mem_info*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

bool FUNC_2(struct kfd_dev *VAR_1)
{
 struct kfd_local_mem_info VAR_2;

 if (VAR_0) {
  FUNC_1("Simulate large-bar allocation on non large-bar machine\n");
  return 1;
 }

 if (VAR_1->device_info->needs_iommu_device)
  return 0;

 FUNC_0(VAR_1->kgd, &VAR_2);
 if (VAR_2.local_mem_size_private == 0 &&
   VAR_2.local_mem_size_public > 0)
  return 1;
 return 0;
}
