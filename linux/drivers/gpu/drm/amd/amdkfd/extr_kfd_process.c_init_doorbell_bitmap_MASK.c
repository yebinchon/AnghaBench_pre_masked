
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcm_process_device {int doorbell_bitmap; } ;
struct TYPE_3__ {unsigned int non_cp_doorbells_start; unsigned int non_cp_doorbells_end; } ;
struct kfd_dev {TYPE_1__ shared_resources; TYPE_2__* device_info; } ;
struct TYPE_4__ {int asic_family; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct qcm_process_device *VAR_5,
   struct kfd_dev *VAR_6)
{
 unsigned int VAR_7;

 if (!FUNC_1(VAR_6->device_info->asic_family))
  return 0;

 VAR_5->doorbell_bitmap =
  FUNC_2(FUNC_0(VAR_3,
         VAR_0), VAR_2);
 if (!VAR_5->doorbell_bitmap)
  return -VAR_1;


 for (VAR_7 = 0; VAR_7 < VAR_3 / 2; VAR_7++) {
  if (VAR_7 >= VAR_6->shared_resources.non_cp_doorbells_start
   && VAR_7 <= VAR_6->shared_resources.non_cp_doorbells_end) {
   FUNC_4(VAR_7, VAR_5->doorbell_bitmap);
   FUNC_4(VAR_7 + VAR_4,
    VAR_5->doorbell_bitmap);
   FUNC_3("reserved doorbell 0x%03x and 0x%03x\n", VAR_7,
    VAR_7 + VAR_4);
  }
 }

 return 0;
}
