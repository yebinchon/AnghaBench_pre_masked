
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct kfd_process_device {int scratch_base; int scratch_limit; TYPE_3__* dev; int gpuvm_base; scalar_t__ gpuvm_limit; int lds_base; int lds_limit; } ;
struct TYPE_5__ {scalar_t__ gpuvm_size; } ;
struct TYPE_6__ {TYPE_2__ shared_resources; TYPE_1__* device_info; } ;
struct TYPE_4__ {int needs_iommu_device; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct kfd_process_device *VAR_1, uint8_t VAR_2)
{




 VAR_1->lds_base = FUNC_2();
 VAR_1->lds_limit = FUNC_3(VAR_1->lds_base);

 if (!VAR_1->dev->device_info->needs_iommu_device) {




  VAR_1->gpuvm_base = VAR_0;
  VAR_1->gpuvm_limit =
   VAR_1->dev->shared_resources.gpuvm_size - 1;
 } else {



  VAR_1->gpuvm_base = FUNC_0(VAR_2 + 1);
  VAR_1->gpuvm_limit = FUNC_1(VAR_1->gpuvm_base,
    VAR_1->dev->shared_resources.gpuvm_size);
 }

 VAR_1->scratch_base = FUNC_4();
 VAR_1->scratch_limit = FUNC_5(VAR_1->scratch_base);
}
