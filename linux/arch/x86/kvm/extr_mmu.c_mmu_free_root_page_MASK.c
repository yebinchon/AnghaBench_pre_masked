
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {scalar_t__ invalid; } ;
struct kvm_mmu_page {TYPE_1__ role; int root_count; } ;
struct kvm {int dummy; } ;
typedef int hpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm*,struct kvm_mmu_page*,struct list_head*) ;
 struct kvm_mmu_page* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_2, hpa_t *VAR_3,
          struct list_head *VAR_4)
{
 struct kvm_mmu_page *VAR_5;

 if (!FUNC_0(*VAR_3))
  return;

 VAR_5 = FUNC_2(*VAR_3 & VAR_1);
 --VAR_5->root_count;
 if (!VAR_5->root_count && VAR_5->role.invalid)
  FUNC_1(VAR_2, VAR_5, VAR_4);

 *VAR_3 = VAR_0;
}
