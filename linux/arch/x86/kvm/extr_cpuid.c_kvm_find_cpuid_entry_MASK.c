
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cpuid_nent; struct kvm_cpuid_entry2* cpuid_entries; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_cpuid_entry2 {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_cpuid_entry2*,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;

struct kvm_cpuid_entry2 *FUNC_2(struct kvm_vcpu *VAR_1,
           u32 VAR_2, u32 VAR_3)
{
 int VAR_4;
 struct kvm_cpuid_entry2 *VAR_5 = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_1->arch.cpuid_nent; ++VAR_4) {
  struct kvm_cpuid_entry2 *VAR_6;

  VAR_6 = &VAR_1->arch.cpuid_entries[VAR_4];
  if (FUNC_0(VAR_6, VAR_2, VAR_3)) {
   if (VAR_6->flags & VAR_0)
    FUNC_1(VAR_1, VAR_4);
   VAR_5 = VAR_6;
   break;
  }
 }
 return VAR_5;
}
