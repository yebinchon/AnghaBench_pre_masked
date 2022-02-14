
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;
struct TYPE_4__ {int lpages; } ;
struct kvm {TYPE_2__ stat; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_mmu_page*,int*) ;
 int FUNC_1 (struct kvm*,int*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 struct kvm_mmu_page* FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct kvm *VAR_1, struct kvm_mmu_page *VAR_2,
        u64 *VAR_3)
{
 u64 VAR_4;
 struct kvm_mmu_page *VAR_5;

 VAR_4 = *VAR_3;
 if (FUNC_5(VAR_4)) {
  if (FUNC_3(VAR_4, VAR_2->role.level)) {
   FUNC_1(VAR_1, VAR_3);
   if (FUNC_2(VAR_4))
    --VAR_1->stat.lpages;
  } else {
   VAR_5 = FUNC_7(VAR_4 & VAR_0);
   FUNC_0(VAR_5, VAR_3);
  }
  return 1;
 }

 if (FUNC_4(VAR_4))
  FUNC_6(VAR_3);

 return 0;
}
