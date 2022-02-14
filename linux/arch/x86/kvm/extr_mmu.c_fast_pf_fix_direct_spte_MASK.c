
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int direct; } ;
struct kvm_mmu_page {int spt; TYPE_1__ role; } ;
typedef int gfn_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct kvm_mmu_page*,scalar_t__*) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static bool
FUNC_5(struct kvm_vcpu *VAR_0, struct kvm_mmu_page *VAR_1,
   u64 *VAR_2, u64 VAR_3, u64 VAR_4)
{
 gfn_t VAR_5;

 FUNC_0(!VAR_1->role.direct);
 if (FUNC_1(VAR_2, VAR_3, VAR_4) != VAR_3)
  return 0;

 if (FUNC_2(VAR_4) && !FUNC_2(VAR_3)) {




  VAR_5 = FUNC_3(VAR_1, VAR_2 - VAR_1->spt);
  FUNC_4(VAR_0, VAR_5);
 }

 return 1;
}
