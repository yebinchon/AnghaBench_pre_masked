
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vcpu_vmx {struct shared_msr_entry* guest_msrs; } ;
struct shared_msr_entry {int dummy; } ;


 int FUNC_0 (struct vcpu_vmx*,int ) ;

struct shared_msr_entry *FUNC_1(struct vcpu_vmx *VAR_0, u32 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 >= 0)
  return &VAR_0->guest_msrs[VAR_2];
 return ((void*)0);
}
