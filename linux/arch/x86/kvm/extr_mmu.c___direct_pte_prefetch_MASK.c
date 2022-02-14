
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int direct; } ;
struct kvm_mmu_page {int * spt; TYPE_1__ role; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,struct kvm_mmu_page*,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1,
      struct kvm_mmu_page *VAR_2, u64 *VAR_3)
{
 u64 *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6;

 FUNC_0(!VAR_2->role.direct);

 VAR_6 = (VAR_3 - VAR_2->spt) & ~(VAR_0 - 1);
 VAR_4 = VAR_2->spt + VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++, VAR_4++) {
  if (FUNC_2(*VAR_4) || VAR_4 == VAR_3) {
   if (!VAR_5)
    continue;
   if (FUNC_1(VAR_1, VAR_2, VAR_5, VAR_4) < 0)
    break;
   VAR_5 = ((void*)0);
  } else if (!VAR_5)
   VAR_5 = VAR_4;
 }
}
