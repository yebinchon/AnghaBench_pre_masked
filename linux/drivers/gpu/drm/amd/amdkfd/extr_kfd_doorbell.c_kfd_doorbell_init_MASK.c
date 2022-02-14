
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {uintptr_t doorbell_aperture_size; scalar_t__ doorbell_physical_address; int doorbell_start_offset; } ;
struct kfd_dev {size_t doorbell_id_offset; uintptr_t doorbell_kernel_ptr; TYPE_1__ shared_resources; scalar_t__ doorbell_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t FUNC_0 (scalar_t__,size_t) ;
 size_t FUNC_1 (struct kfd_dev*) ;
 size_t VAR_2 ;
 int FUNC_2 (char*,...) ;
 size_t FUNC_3 (uintptr_t,size_t) ;
 size_t FUNC_4 (int ,size_t) ;

int FUNC_5(struct kfd_dev *VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;
 size_t VAR_6;







 VAR_4 =
   FUNC_4(VAR_3->shared_resources.doorbell_start_offset,
     FUNC_1(VAR_3));

 VAR_5 =
   FUNC_3(VAR_3->shared_resources.doorbell_aperture_size,
     FUNC_1(VAR_3));

 if (VAR_5 > VAR_4)
  VAR_6 =
   (VAR_5 - VAR_4) /
      FUNC_1(VAR_3);
 else
  return -VAR_1;

 if (!VAR_2 ||
     VAR_6 < VAR_2)
  VAR_2 = VAR_6;

 VAR_3->doorbell_base = VAR_3->shared_resources.doorbell_physical_address +
    VAR_4;

 VAR_3->doorbell_id_offset = VAR_4 / sizeof(u32);

 VAR_3->doorbell_kernel_ptr = FUNC_0(VAR_3->doorbell_base,
        FUNC_1(VAR_3));

 if (!VAR_3->doorbell_kernel_ptr)
  return -VAR_0;

 FUNC_2("Doorbell initialization:\n");
 FUNC_2("doorbell base           == 0x%08lX\n",
   (uintptr_t)VAR_3->doorbell_base);

 FUNC_2("doorbell_id_offset      == 0x%08lX\n",
   VAR_3->doorbell_id_offset);

 FUNC_2("doorbell_process_limit  == 0x%08lX\n",
   VAR_6);

 FUNC_2("doorbell_kernel_offset  == 0x%08lX\n",
   (uintptr_t)VAR_3->doorbell_base);

 FUNC_2("doorbell aperture size  == 0x%08lX\n",
   VAR_3->shared_resources.doorbell_aperture_size);

 FUNC_2("doorbell kernel address == %p\n", VAR_3->doorbell_kernel_ptr);

 return 0;
}
