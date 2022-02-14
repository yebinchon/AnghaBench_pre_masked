
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {unsigned int access; int level; } ;
struct kvm_mmu_page {int spt; TYPE_1__ role; } ;
struct kvm_memory_slot {int dummy; } ;
typedef int gfn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm_vcpu*,int ,unsigned int) ;
 int FUNC_1 (struct kvm_memory_slot*,int ,struct page**,int) ;
 int FUNC_2 (struct kvm_mmu_page*,int *) ;
 int FUNC_3 (struct kvm_vcpu*,int *,unsigned int,int ,int ,int ,int ,int,int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_2,
        struct kvm_mmu_page *VAR_3,
        u64 *VAR_4, u64 *VAR_5)
{
 struct page *VAR_6[VAR_1];
 struct kvm_memory_slot *VAR_7;
 unsigned VAR_8 = VAR_3->role.access;
 int VAR_9, VAR_10;
 gfn_t VAR_11;

 VAR_11 = FUNC_2(VAR_3, VAR_4 - VAR_3->spt);
 VAR_7 = FUNC_0(VAR_2, VAR_11, VAR_8 & VAR_0);
 if (!VAR_7)
  return -1;

 VAR_10 = FUNC_1(VAR_7, VAR_11, VAR_6, VAR_5 - VAR_4);
 if (VAR_10 <= 0)
  return -1;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++, VAR_11++, VAR_4++) {
  FUNC_3(VAR_2, VAR_4, VAR_8, 0, VAR_3->role.level, VAR_11,
        FUNC_4(VAR_6[VAR_9]), 1, 1);
  FUNC_5(VAR_6[VAR_9]);
 }

 return 0;
}
