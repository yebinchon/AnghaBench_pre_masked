
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__ tv64; } ;
struct TYPE_5__ {scalar_t__ tv64; } ;
struct TYPE_6__ {scalar_t__ timing_last_exit; int last_exit_type; TYPE_1__ timing_exit; TYPE_2__ timing_last_enter; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct kvm_vcpu *VAR_1)
{
 u64 VAR_2 = VAR_1->arch.timing_last_exit;
 u64 VAR_3 = VAR_1->arch.timing_last_enter.tv64;


 VAR_1->arch.timing_last_exit = VAR_1->arch.timing_exit.tv64;

 if (FUNC_1(VAR_1->arch.last_exit_type == 0xDEAD || VAR_2 == 0))
  return;


 FUNC_0(VAR_1, (VAR_3 - VAR_2), VAR_1->arch.last_exit_type);

 FUNC_0(VAR_1, (VAR_1->arch.timing_last_exit - VAR_3),
   VAR_0);
}
