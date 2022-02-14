
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int address; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct kvm_run {TYPE_2__ debug; int exit_reason; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int ,scalar_t__*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_run *VAR_7,
     struct kvm_vcpu *VAR_8)
{
 u32 VAR_9;

 if (FUNC_1(VAR_8, VAR_1, &VAR_9) !=
     VAR_0) {




  return VAR_4;
 }

 if (VAR_9 == VAR_2) {
  VAR_7->exit_reason = VAR_3;
  VAR_7->debug.arch.address = FUNC_2(VAR_8);
  return VAR_5;
 } else {
  FUNC_0(VAR_8, VAR_6);
  return VAR_4;
 }
}
