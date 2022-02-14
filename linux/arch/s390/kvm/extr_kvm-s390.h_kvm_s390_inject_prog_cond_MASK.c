
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pgm; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*,int *) ;

__attribute__((used)) static inline int FUNC_1(struct kvm_vcpu *VAR_0, int VAR_1)
{
 if (VAR_1 <= 0)
  return VAR_1;
 return FUNC_0(VAR_0, &VAR_0->arch.pgm);
}
