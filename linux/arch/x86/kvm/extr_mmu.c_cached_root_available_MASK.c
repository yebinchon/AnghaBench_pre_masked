
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union kvm_mmu_page_role {scalar_t__ word; } ;
typedef size_t uint ;
struct TYPE_4__ {struct kvm_mmu* mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mmu_root_info {scalar_t__ cr3; int hpa; } ;
struct kvm_mmu {scalar_t__ root_cr3; int root_hpa; int * prev_roots; } ;
typedef scalar_t__ gpa_t ;
struct TYPE_5__ {scalar_t__ word; } ;
struct TYPE_6__ {TYPE_2__ role; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_mmu_root_info,int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_1, gpa_t VAR_2,
      union kvm_mmu_page_role VAR_3)
{
 uint VAR_4;
 struct kvm_mmu_root_info VAR_5;
 struct kvm_mmu *VAR_6 = VAR_1->arch.mmu;

 VAR_5.cr3 = VAR_6->root_cr3;
 VAR_5.hpa = VAR_6->root_hpa;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_2(VAR_5, VAR_6->prev_roots[VAR_4]);

  if (VAR_2 == VAR_5.cr3 && FUNC_0(VAR_5.hpa) &&
      FUNC_1(VAR_5.hpa) != ((void*)0) &&
      VAR_3.word == FUNC_1(VAR_5.hpa)->role.word)
   break;
 }

 VAR_6->root_hpa = VAR_5.hpa;
 VAR_6->root_cr3 = VAR_5.cr3;

 return VAR_4 < VAR_0;
}
