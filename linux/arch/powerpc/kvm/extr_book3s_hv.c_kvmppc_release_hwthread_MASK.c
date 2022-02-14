
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * kvm_split_mode; int * kvm_vcore; int * kvm_vcpu; scalar_t__ hwthread_req; } ;
struct paca_struct {TYPE_1__ kvm_hstate; } ;


 struct paca_struct** VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1)
{
 struct paca_struct *VAR_2;

 VAR_2 = VAR_0[VAR_1];
 VAR_2->kvm_hstate.hwthread_req = 0;
 VAR_2->kvm_hstate.kvm_vcpu = ((void*)0);
 VAR_2->kvm_hstate.kvm_vcore = ((void*)0);
 VAR_2->kvm_hstate.kvm_split_mode = ((void*)0);
}
