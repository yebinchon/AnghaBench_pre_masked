
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ first_vmid_kfd; scalar_t__ last_vmid_kfd; } ;
struct kfd_dev {int kgd; TYPE_4__* kfd2kgd; TYPE_3__* device_info; TYPE_2__* dqm; TYPE_1__ vm_info; } ;
struct TYPE_8__ {scalar_t__ (* get_atc_vmid_pasid_mapping_pasid ) (int ,scalar_t__) ;} ;
struct TYPE_7__ {int ih_ring_entry_size; } ;
struct TYPE_6__ {scalar_t__ sched_policy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;
 scalar_t__ FUNC_2 (scalar_t__ const*) ;
 scalar_t__ FUNC_3 (scalar_t__ const*) ;
 scalar_t__ FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (scalar_t__ const) ;
 scalar_t__ const FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*,scalar_t__ const*,int ) ;
 int FUNC_8 (char*,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,...) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_10(struct kfd_dev *VAR_8,
     const uint32_t *VAR_9,
     uint32_t *VAR_10,
     bool *VAR_11)
{
 uint16_t VAR_12, VAR_13, VAR_14, VAR_15;
 const uint32_t *VAR_16 = VAR_9;


 VAR_15 = FUNC_3(VAR_9);
 if (VAR_15 < VAR_8->vm_info.first_vmid_kfd ||
     VAR_15 > VAR_8->vm_info.last_vmid_kfd)
  return 0;

 VAR_12 = FUNC_2(VAR_9);
 VAR_13 = FUNC_0(VAR_9);
 VAR_14 = FUNC_1(VAR_9);





 if (!VAR_14 && VAR_8->dqm->sched_policy == VAR_0) {
  const uint32_t VAR_17 = 0xffff;

  *VAR_11 = 1;
  FUNC_7(VAR_10, VAR_9,
    VAR_8->device_info->ih_ring_entry_size);

  VAR_14 = VAR_8->kfd2kgd->get_atc_vmid_pasid_mapping_pasid(
    VAR_8->kgd, VAR_15);


  VAR_10[3] = FUNC_5((FUNC_6(VAR_10[3])
     & ~VAR_17) | VAR_14);
 }

 FUNC_8("client id 0x%x, source id %d, vmid %d, pasid 0x%x. raw data:\n",
   VAR_13, VAR_12, VAR_15, VAR_14);
 FUNC_8("%8X, %8X, %8X, %8X, %8X, %8X, %8X, %8X.\n",
   VAR_16[0], VAR_16[1], VAR_16[2], VAR_16[3],
   VAR_16[4], VAR_16[5], VAR_16[6], VAR_16[7]);


 if (FUNC_4(VAR_14 == 0, "Bug: No PASID in KFD interrupt"))
  return 0;




 return VAR_12 == VAR_5 ||
  VAR_12 == VAR_6 ||
  VAR_12 == VAR_7 ||
  VAR_12 == VAR_4 ||
  VAR_13 == VAR_2 ||
  VAR_13 == VAR_3 ||
  VAR_13 == VAR_1;
}
