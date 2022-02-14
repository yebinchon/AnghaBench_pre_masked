
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int tsc_seq ;
struct pvclock_vcpu_time_info {int dummy; } ;
struct TYPE_5__ {int tsc_sequence; } ;
struct kvm_hv {int hv_tsc_page; int hv_lock; TYPE_2__ tsc_ref; } ;
struct TYPE_4__ {struct kvm_hv hyperv; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pvclock_vcpu_time_info*,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct kvm*,int ,int*,int) ;
 scalar_t__ FUNC_4 (struct kvm*,int ,TYPE_2__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ) ;

void FUNC_10(struct kvm *VAR_4,
      struct pvclock_vcpu_time_info *VAR_5)
{
 struct kvm_hv *VAR_6 = &VAR_4->arch.hyperv;
 u32 VAR_7;
 u64 VAR_8;

 FUNC_0(sizeof(VAR_7) != sizeof(VAR_6->tsc_ref.tsc_sequence));
 FUNC_0(FUNC_7(VAR_0, VAR_3) != 0);

 if (!(VAR_6->hv_tsc_page & VAR_2))
  return;

 FUNC_5(&VAR_4->arch.hyperv.hv_lock);
 if (!(VAR_6->hv_tsc_page & VAR_2))
  goto out_unlock;

 VAR_8 = VAR_6->hv_tsc_page >> VAR_1;




 if (FUNC_9(FUNC_3(VAR_4, FUNC_2(VAR_8),
        &VAR_7, sizeof(VAR_7))))
  goto out_unlock;





 VAR_6->tsc_ref.tsc_sequence = 0;
 if (FUNC_4(VAR_4, FUNC_2(VAR_8),
       &VAR_6->tsc_ref, sizeof(VAR_6->tsc_ref.tsc_sequence)))
  goto out_unlock;

 if (!FUNC_1(VAR_5, &VAR_6->tsc_ref))
  goto out_unlock;


 FUNC_8();
 if (FUNC_4(VAR_4, FUNC_2(VAR_8), &VAR_6->tsc_ref, sizeof(VAR_6->tsc_ref)))
  goto out_unlock;




 VAR_7++;
 if (VAR_7 == 0xFFFFFFFF || VAR_7 == 0)
  VAR_7 = 1;


 FUNC_8();

 VAR_6->tsc_ref.tsc_sequence = VAR_7;
 FUNC_4(VAR_4, FUNC_2(VAR_8),
   &VAR_6->tsc_ref, sizeof(VAR_6->tsc_ref.tsc_sequence));
out_unlock:
 FUNC_6(&VAR_4->arch.hyperv.hv_lock);
}
