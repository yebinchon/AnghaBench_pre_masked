
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int guest_can_read_msr_platform_info; int kvmclock_sync_work; int kvmclock_update_work; int kvmclock_offset; int pvclock_gtod_sync_lock; int apic_map_lock; int tsc_write_lock; int irq_sources_bitmap; int noncoherent_dma_count; int assigned_dev_head; int lpage_disallowed_mmu_pages; int zapped_obsolete_pages; int active_mmu_pages; int mask_notifier_list; } ;
struct kvm {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* vm_init ) (struct kvm*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct kvm*) ;
 int FUNC_6 (struct kvm*) ;
 int FUNC_7 (struct kvm*) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct kvm*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct kvm*) ;

int FUNC_14(struct kvm *VAR_6, unsigned long VAR_7)
{
 if (VAR_7)
  return -VAR_0;

 FUNC_1(&VAR_6->arch.mask_notifier_list);
 FUNC_2(&VAR_6->arch.active_mmu_pages);
 FUNC_2(&VAR_6->arch.zapped_obsolete_pages);
 FUNC_2(&VAR_6->arch.lpage_disallowed_mmu_pages);
 FUNC_2(&VAR_6->arch.assigned_dev_head);
 FUNC_3(&VAR_6->arch.noncoherent_dma_count, 0);


 FUNC_11(VAR_2, &VAR_6->arch.irq_sources_bitmap);

 FUNC_11(VAR_1,
  &VAR_6->arch.irq_sources_bitmap);

 FUNC_10(&VAR_6->arch.tsc_write_lock);
 FUNC_8(&VAR_6->arch.apic_map_lock);
 FUNC_12(&VAR_6->arch.pvclock_gtod_sync_lock);

 VAR_6->arch.kvmclock_offset = -FUNC_4();
 FUNC_9(VAR_6);

 VAR_6->arch.guest_can_read_msr_platform_info = 1;

 FUNC_0(&VAR_6->arch.kvmclock_update_work, VAR_5);
 FUNC_0(&VAR_6->arch.kvmclock_sync_work, VAR_4);

 FUNC_5(VAR_6);
 FUNC_7(VAR_6);
 FUNC_6(VAR_6);

 return VAR_3->vm_init(VAR_6);
}
