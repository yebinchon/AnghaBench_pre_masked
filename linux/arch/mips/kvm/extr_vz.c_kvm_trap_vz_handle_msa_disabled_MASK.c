
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aux_inuse; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm_run* run; } ;
struct kvm_run {int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_7)
{
 struct kvm_run *VAR_8 = VAR_7->run;







 if (!FUNC_0(&VAR_7->arch) ||
     (FUNC_3() & (VAR_5 | VAR_6)) == VAR_5 ||
     !(FUNC_2() & VAR_2) ||
     VAR_7->arch.aux_inuse & VAR_1) {
  VAR_8->exit_reason = VAR_0;
  return VAR_4;
 }

 FUNC_1(VAR_7);

 return VAR_3;
}
