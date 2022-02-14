
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int ib_base; int cwsr_base; } ;
struct kfd_process_device {scalar_t__ scratch_limit; scalar_t__ scratch_base; scalar_t__ gpuvm_limit; scalar_t__ gpuvm_base; scalar_t__ lds_limit; scalar_t__ lds_base; TYPE_3__* dev; TYPE_2__ qpd; } ;
struct kfd_process {scalar_t__ is_32bit_user_mode; } ;
struct kfd_dev {TYPE_1__* device_info; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_4__ {int asic_family; int needs_iommu_device; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 struct kfd_process_device* FUNC_2 (struct kfd_dev*,struct kfd_process*) ;
 int VAR_4 ;
 int FUNC_3 (struct kfd_process_device*,scalar_t__) ;
 int FUNC_4 (struct kfd_process_device*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,struct kfd_dev**) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct kfd_process *VAR_5)
{
 uint8_t VAR_6 = 0;
 struct kfd_dev *VAR_7;
 struct kfd_process_device *VAR_8;


 while (FUNC_5(VAR_6, &VAR_7) == 0) {
  if (!VAR_7) {
   VAR_6++;
   continue;
  }

  VAR_8 = FUNC_2(VAR_7, VAR_5);
  if (!VAR_8) {
   FUNC_6("Failed to create process device data\n");
   return -VAR_1;
  }





  if (VAR_5->is_32bit_user_mode) {
   VAR_8->lds_base = VAR_8->lds_limit = 0;
   VAR_8->gpuvm_base = VAR_8->gpuvm_limit = 0;
   VAR_8->scratch_base = VAR_8->scratch_limit = 0;
  } else {
   switch (VAR_7->device_info->asic_family) {
   case 138:
   case 139:
   case 141:
   case 132:
   case 140:
   case 136:
   case 135:
   case 134:
   case 128:
    FUNC_4(VAR_8, VAR_6);
    break;
   case 131:
   case 130:
   case 129:
   case 133:
   case 142:
   case 137:
    FUNC_3(VAR_8, VAR_6);
    break;
   default:
    FUNC_0(1, "Unexpected ASIC family %u",
         VAR_7->device_info->asic_family);
    return -VAR_0;
   }

   if (!VAR_7->device_info->needs_iommu_device) {



    VAR_8->qpd.cwsr_base = VAR_2;
    VAR_8->qpd.ib_base = VAR_3;
   }
  }

  FUNC_1(VAR_4, "node id %u\n", VAR_6);
  FUNC_1(VAR_4, "gpu id %u\n", VAR_8->dev->id);
  FUNC_1(VAR_4, "lds_base %llX\n", VAR_8->lds_base);
  FUNC_1(VAR_4, "lds_limit %llX\n", VAR_8->lds_limit);
  FUNC_1(VAR_4, "gpuvm_base %llX\n", VAR_8->gpuvm_base);
  FUNC_1(VAR_4, "gpuvm_limit %llX\n", VAR_8->gpuvm_limit);
  FUNC_1(VAR_4, "scratch_base %llX\n", VAR_8->scratch_base);
  FUNC_1(VAR_4, "scratch_limit %llX\n", VAR_8->scratch_limit);

  VAR_6++;
 }

 return 0;
}
