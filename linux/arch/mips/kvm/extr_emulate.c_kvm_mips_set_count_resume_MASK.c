
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count_resume; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct kvm_vcpu *VAR_1, s64 VAR_2)
{





 if (VAR_2 < 0 || VAR_2 > FUNC_1(FUNC_0()))
  return -VAR_0;

 VAR_1->arch.count_resume = FUNC_2(VAR_2);
 return 0;
}
