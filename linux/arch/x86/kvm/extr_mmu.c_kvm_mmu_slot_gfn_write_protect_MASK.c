
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_rmap_head {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_rmap_head* FUNC_0 (int ,int,struct kvm_memory_slot*) ;
 int FUNC_1 (struct kvm*,struct kvm_rmap_head*,int) ;

bool FUNC_2(struct kvm *VAR_2,
        struct kvm_memory_slot *VAR_3, u64 VAR_4)
{
 struct kvm_rmap_head *VAR_5;
 int VAR_6;
 bool VAR_7 = 0;

 for (VAR_6 = VAR_1; VAR_6 <= VAR_0; ++VAR_6) {
  VAR_5 = FUNC_0(VAR_4, VAR_6, VAR_3);
  VAR_7 |= FUNC_1(VAR_2, VAR_5, 1);
 }

 return VAR_7;
}
