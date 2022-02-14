
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {struct shared_msr_entry* guest_msrs; } ;
struct shared_msr_entry {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct vcpu_vmx *VAR_0, int VAR_1, int VAR_2)
{
 struct shared_msr_entry VAR_3;

 VAR_3 = VAR_0->guest_msrs[VAR_2];
 VAR_0->guest_msrs[VAR_2] = VAR_0->guest_msrs[VAR_1];
 VAR_0->guest_msrs[VAR_1] = VAR_3;
}
