
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwthread_req; scalar_t__ hwthread_state; scalar_t__ napping; int * kvm_vcore; int * kvm_vcpu; } ;
struct paca_struct {TYPE_1__ kvm_hstate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct paca_struct** VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_3)
{
 struct paca_struct *VAR_4;
 long VAR_5 = 10000;

 VAR_4 = VAR_2[VAR_3];


 VAR_4->kvm_hstate.kvm_vcpu = ((void*)0);
 VAR_4->kvm_hstate.kvm_vcore = ((void*)0);
 VAR_4->kvm_hstate.napping = 0;
 FUNC_2();
 VAR_4->kvm_hstate.hwthread_req = 1;
 FUNC_1();
 while (VAR_4->kvm_hstate.hwthread_state == VAR_1) {
  if (--VAR_5 <= 0) {
   FUNC_0("KVM: couldn't grab cpu %d\n", VAR_3);
   return -VAR_0;
  }
  FUNC_3(1);
 }
 return 0;
}
