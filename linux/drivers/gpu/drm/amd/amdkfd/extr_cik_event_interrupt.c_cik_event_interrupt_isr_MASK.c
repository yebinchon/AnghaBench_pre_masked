
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {unsigned int first_vmid_kfd; unsigned int last_vmid_kfd; } ;
struct kfd_dev {TYPE_2__ vm_info; int kgd; TYPE_1__* device_info; struct kfd2kgd_calls* kfd2kgd; } ;
struct kfd2kgd_calls {unsigned int (* read_vmid_from_vmfault_reg ) (int ) ;unsigned int (* get_atc_vmid_pasid_mapping_pasid ) (int ,unsigned int) ;} ;
struct cik_ih_ring_entry {scalar_t__ source_id; int ring_id; } ;
struct TYPE_3__ {scalar_t__ asic_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int,char*) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct kfd_dev *VAR_7,
     const uint32_t *VAR_8,
     uint32_t *VAR_9,
     bool *VAR_10)
{
 const struct cik_ih_ring_entry *VAR_11 =
   (const struct cik_ih_ring_entry *)VAR_8;
 const struct kfd2kgd_calls *VAR_12 = VAR_7->kfd2kgd;
 unsigned int VAR_13, VAR_14;




 if ((VAR_11->source_id == VAR_4 ||
  VAR_11->source_id == VAR_3) &&
  VAR_7->device_info->asic_family == VAR_0) {
  struct cik_ih_ring_entry *VAR_15 =
   (struct cik_ih_ring_entry *)VAR_9;

  *VAR_10 = 1;
  *VAR_15 = *VAR_11;

  VAR_13 = VAR_12->read_vmid_from_vmfault_reg(VAR_7->kgd);
  VAR_14 = VAR_12->get_atc_vmid_pasid_mapping_pasid(VAR_7->kgd, VAR_13);

  VAR_15->ring_id &= 0x000000ff;
  VAR_15->ring_id |= VAR_13 << 8;
  VAR_15->ring_id |= VAR_14 << 16;

  return (VAR_14 != 0) &&
   VAR_13 >= VAR_7->vm_info.first_vmid_kfd &&
   VAR_13 <= VAR_7->vm_info.last_vmid_kfd;
 }


 VAR_13 = (VAR_11->ring_id & 0x0000ff00) >> 8;
 if (VAR_13 < VAR_7->vm_info.first_vmid_kfd ||
     VAR_13 > VAR_7->vm_info.last_vmid_kfd)
  return 0;


 VAR_14 = (VAR_11->ring_id & 0xffff0000) >> 16;
 if (FUNC_0(VAR_14 == 0, "FW bug: No PASID in KFD interrupt"))
  return 0;




 return VAR_11->source_id == VAR_2 ||
  VAR_11->source_id == VAR_5 ||
  VAR_11->source_id == VAR_6 ||
  VAR_11->source_id == VAR_1 ||
  VAR_11->source_id == VAR_4 ||
  VAR_11->source_id == VAR_3;
}
