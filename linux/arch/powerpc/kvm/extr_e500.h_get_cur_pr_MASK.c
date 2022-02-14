
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int msr; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct kvm_vcpu *VAR_1)
{
 return !!(VAR_1->arch.shared->msr & VAR_0);
}
