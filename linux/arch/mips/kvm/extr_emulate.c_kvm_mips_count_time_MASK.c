
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count_ctl; int count_resume; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline ktime_t FUNC_2(struct kvm_vcpu *VAR_1)
{
 if (FUNC_1(VAR_1->arch.count_ctl & VAR_0))
  return VAR_1->arch.count_resume;

 return FUNC_0();
}
