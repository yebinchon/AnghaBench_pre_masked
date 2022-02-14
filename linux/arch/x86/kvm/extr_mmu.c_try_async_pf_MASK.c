
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;
struct kvm_memory_slot {int dummy; } ;
typedef int kvm_pfn_t ;
typedef int gva_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_memory_slot*,int ,int,int*,int,int*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct kvm_vcpu*) ;
 struct kvm_memory_slot* FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static bool FUNC_10(struct kvm_vcpu *VAR_2, bool VAR_3, gfn_t VAR_4,
    gva_t VAR_5, kvm_pfn_t *VAR_6, bool VAR_7, bool *VAR_8)
{
 struct kvm_memory_slot *VAR_9;
 bool VAR_10;




 if (FUNC_1(VAR_2) && !FUNC_5(VAR_2->kvm, VAR_4)) {
  *VAR_6 = VAR_0;
  return 0;
 }

 VAR_9 = FUNC_7(VAR_2, VAR_4);
 VAR_10 = 0;
 *VAR_6 = FUNC_0(VAR_9, VAR_4, 0, &VAR_10, VAR_7, VAR_8);
 if (!VAR_10)
  return 0;

 if (!VAR_3 && FUNC_3(VAR_2)) {
  FUNC_9(VAR_5, VAR_4);
  if (FUNC_4(VAR_2, VAR_4)) {
   FUNC_8(VAR_5, VAR_4);
   FUNC_6(VAR_1, VAR_2);
   return 1;
  } else if (FUNC_2(VAR_2, VAR_5, VAR_4))
   return 1;
 }

 *VAR_6 = FUNC_0(VAR_9, VAR_4, 0, ((void*)0), VAR_7, VAR_8);
 return 0;
}
