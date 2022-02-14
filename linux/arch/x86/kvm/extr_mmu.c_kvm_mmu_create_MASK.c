
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint ;
struct TYPE_7__ {void** prev_roots; void* translate_gpa; scalar_t__ root_cr3; void* root_hpa; } ;
struct TYPE_5__ {int translate_gpa; } ;
struct TYPE_6__ {TYPE_3__ guest_mmu; TYPE_3__ root_mmu; TYPE_1__ nested_mmu; TYPE_3__* walk_mmu; TYPE_3__* mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 void* VAR_3 ;
 int VAR_4 ;

int FUNC_2(struct kvm_vcpu *VAR_5)
{
 uint VAR_6;
 int VAR_7;

 VAR_5->arch.mmu = &VAR_5->arch.root_mmu;
 VAR_5->arch.walk_mmu = &VAR_5->arch.root_mmu;

 VAR_5->arch.root_mmu.root_hpa = VAR_0;
 VAR_5->arch.root_mmu.root_cr3 = 0;
 VAR_5->arch.root_mmu.translate_gpa = VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5->arch.root_mmu.prev_roots[VAR_6] = VAR_2;

 VAR_5->arch.guest_mmu.root_hpa = VAR_0;
 VAR_5->arch.guest_mmu.root_cr3 = 0;
 VAR_5->arch.guest_mmu.translate_gpa = VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5->arch.guest_mmu.prev_roots[VAR_6] = VAR_2;

 VAR_5->arch.nested_mmu.translate_gpa = VAR_4;

 VAR_7 = FUNC_0(VAR_5, &VAR_5->arch.guest_mmu);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_5, &VAR_5->arch.root_mmu);
 if (VAR_7)
  goto fail_allocate_root;

 return VAR_7;
 fail_allocate_root:
 FUNC_1(&VAR_5->arch.guest_mmu);
 return VAR_7;
}
