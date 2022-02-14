
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcm_process_device {int sh_mem_config; int sh_mem_bases; scalar_t__ sh_mem_ape1_base; scalar_t__ sh_mem_ape1_limit; } ;
struct kfd_process_device {int dummy; } ;
struct device_queue_manager {TYPE_1__* dev; } ;
struct TYPE_4__ {int needs_iommu_device; } ;
struct TYPE_3__ {TYPE_2__* device_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct kfd_process_device*) ;
 int FUNC_1 (char*,int ) ;
 struct kfd_process_device* FUNC_2 (struct qcm_process_device*) ;

__attribute__((used)) static int FUNC_3(struct device_queue_manager *VAR_4,
    struct qcm_process_device *VAR_5)
{
 struct kfd_process_device *VAR_6;

 VAR_6 = FUNC_2(VAR_5);


 if (VAR_5->sh_mem_config == 0) {
  VAR_5->sh_mem_config =
    VAR_0 <<
     VAR_1;
  if (VAR_3 &&
      !VAR_4->dev->device_info->needs_iommu_device)
   VAR_5->sh_mem_config |=
    1 << VAR_2;

  VAR_5->sh_mem_ape1_limit = 0;
  VAR_5->sh_mem_ape1_base = 0;
 }

 VAR_5->sh_mem_bases = FUNC_0(VAR_6);

 FUNC_1("sh_mem_bases 0x%X\n", VAR_5->sh_mem_bases);

 return 0;
}
