
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
struct TYPE_5__ {int track_flush_slot; int track_write; } ;
struct kvmgt_guest_info {int debugfs_cache_entries; TYPE_2__ track_node; struct kvm* kvm; struct intel_vgpu* vgpu; } ;
struct kvm {scalar_t__ mm; } ;
struct TYPE_4__ {int nr_cache_entries; struct kvm* kvm; } ;
struct intel_vgpu {unsigned long handle; TYPE_1__ vdev; int debugfs; int vblank_done; } ;
struct TYPE_6__ {scalar_t__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct intel_vgpu*,struct kvm*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (char*,int,int ,int *) ;
 int FUNC_2 (struct intel_vgpu*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kvm*) ;
 int FUNC_7 (struct kvm*,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct kvmgt_guest_info*) ;
 struct intel_vgpu* FUNC_9 (struct mdev_device*) ;
 struct kvmgt_guest_info* FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct mdev_device *VAR_6)
{
 struct kvmgt_guest_info *VAR_7;
 struct intel_vgpu *VAR_8;
 struct kvm *VAR_9;

 VAR_8 = FUNC_9(VAR_6);
 if (FUNC_4(VAR_8->handle))
  return -VAR_0;

 VAR_9 = VAR_8->vdev.kvm;
 if (!VAR_9 || VAR_9->mm != VAR_3->mm) {
  FUNC_3("KVM is required to use Intel vGPU\n");
  return -VAR_2;
 }

 if (FUNC_0(VAR_8, VAR_9))
  return -VAR_0;

 VAR_7 = FUNC_10(sizeof(struct kvmgt_guest_info));
 if (!VAR_7)
  return -VAR_1;

 VAR_8->handle = (unsigned long)VAR_7;
 VAR_7->vgpu = VAR_8;
 VAR_7->kvm = VAR_9;
 FUNC_6(VAR_7->kvm);

 FUNC_8(VAR_7);
 FUNC_2(VAR_8);

 FUNC_5(&VAR_8->vblank_done);

 VAR_7->track_node.track_write = VAR_5;
 VAR_7->track_node.track_flush_slot = VAR_4;
 FUNC_7(VAR_9, &VAR_7->track_node);

 VAR_7->debugfs_cache_entries = FUNC_1(
      "kvmgt_nr_cache_entries",
      0444, VAR_8->debugfs,
      &VAR_8->vdev.nr_cache_entries);
 return 0;
}
