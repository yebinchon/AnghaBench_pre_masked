
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int vm_id; } ;
union SQ_CMD_BITS {scalar_t__ u32All; TYPE_2__ bits; } ;
union GRBM_GFX_INDEX_BITS {int u32All; } ;
struct kfd_process_device {int dummy; } ;
struct kfd_process {int pasid; } ;
struct TYPE_4__ {int first_vmid_kfd; int last_vmid_kfd; } ;
struct kfd_dev {int kgd; TYPE_3__* kfd2kgd; TYPE_1__ vm_info; } ;
struct dbg_wave_control_info {int operand; int mode; } ;
struct TYPE_6__ {int (* wave_control_execute ) (int ,int ,scalar_t__) ;int (* get_atc_vmid_pasid_mapping_pasid ) (int ,unsigned int) ;scalar_t__ (* get_atc_vmid_pasid_mapping_valid ) (int ,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dbg_wave_control_info*,union SQ_CMD_BITS*,union GRBM_GFX_INDEX_BITS*) ;
 struct kfd_process_device* FUNC_1 (struct kfd_dev*,struct kfd_process*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,int ,scalar_t__) ;

int FUNC_7(struct kfd_dev *VAR_4, struct kfd_process *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7;
 union SQ_CMD_BITS VAR_8;
 union GRBM_GFX_INDEX_BITS VAR_9;
 struct kfd_process_device *VAR_10;
 struct dbg_wave_control_info VAR_11;
 int VAR_12 = VAR_4->vm_info.first_vmid_kfd;
 int VAR_13 = VAR_4->vm_info.last_vmid_kfd;

 VAR_8.u32All = 0;
 VAR_6 = 0;

 VAR_11.mode = VAR_2;
 VAR_11.operand = VAR_3;

 FUNC_2("Killing all process wavefronts\n");






 for (VAR_7 = VAR_12; VAR_7 <= VAR_13; VAR_7++) {
  if (VAR_4->kfd2kgd->get_atc_vmid_pasid_mapping_valid
    (VAR_4->kgd, VAR_7)) {
   if (VAR_4->kfd2kgd->get_atc_vmid_pasid_mapping_pasid
     (VAR_4->kgd, VAR_7) == VAR_5->pasid) {
    FUNC_2("Killing wave fronts of vmid %d and pasid %d\n",
      VAR_7, VAR_5->pasid);
    break;
   }
  }
 }

 if (VAR_7 > VAR_13) {
  FUNC_3("Didn't find vmid for pasid %d\n", VAR_5->pasid);
  return -VAR_0;
 }


 VAR_10 = FUNC_1(VAR_4, VAR_5);
 if (!VAR_10)
  return -VAR_0;

 VAR_6 = FUNC_0(&VAR_11, &VAR_8,
   &VAR_9);
 if (VAR_6 != 0)
  return -VAR_1;


 VAR_8.bits.vm_id = VAR_7;

 VAR_4->kfd2kgd->wave_control_execute(VAR_4->kgd,
     VAR_9.u32All,
     VAR_8.u32All);

 return 0;
}
