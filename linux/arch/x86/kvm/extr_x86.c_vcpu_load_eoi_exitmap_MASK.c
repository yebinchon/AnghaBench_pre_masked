
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int u64 ;
struct TYPE_4__ {int ioapic_handled_vectors; int apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_6__ {int (* load_eoi_exitmap ) (struct kvm_vcpu*,int *) ;} ;
struct TYPE_5__ {int vec_bitmap; } ;


 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (struct kvm_vcpu*,int *) ;
 TYPE_2__* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_1)
{
 u64 VAR_2[4];

 if (!FUNC_1(VAR_1->arch.apic))
  return;

 FUNC_0((ulong *)VAR_2, VAR_1->arch.ioapic_handled_vectors,
    FUNC_3(VAR_1)->vec_bitmap, 256);
 VAR_0->load_eoi_exitmap(VAR_1, VAR_2);
}
