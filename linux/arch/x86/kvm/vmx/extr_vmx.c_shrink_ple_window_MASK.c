
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {unsigned int ple_window; int ple_window_dirty; } ;
struct kvm_vcpu {int vcpu_id; } ;


 unsigned int FUNC_0 (unsigned int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct vcpu_vmx *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4 = VAR_3->ple_window;

 VAR_3->ple_window = FUNC_0(VAR_4, VAR_0,
           VAR_1,
           VAR_0);

 if (VAR_3->ple_window != VAR_4) {
  VAR_3->ple_window_dirty = 1;
  FUNC_2(VAR_2->vcpu_id,
         VAR_3->ple_window, VAR_4);
 }
}
