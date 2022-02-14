
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int epr_needed; } ;
struct kvm_vcpu {TYPE_3__* run; TYPE_2__ arch; } ;
struct TYPE_4__ {scalar_t__ epr; } ;
struct TYPE_6__ {int exit_reason; TYPE_1__ epr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_6)
{
 int VAR_7 = 1;

 if (FUNC_0(VAR_3, VAR_6))
  FUNC_2(VAR_6);





 if (FUNC_0(VAR_5, VAR_6)) {
  VAR_6->run->exit_reason = VAR_1;
  VAR_7 = 0;
 }

 if (FUNC_0(VAR_2, VAR_6)) {
  VAR_6->run->epr.epr = 0;
  VAR_6->arch.epr_needed = 1;
  VAR_6->run->exit_reason = VAR_0;
  VAR_7 = 0;
 }

 return VAR_7;
}
