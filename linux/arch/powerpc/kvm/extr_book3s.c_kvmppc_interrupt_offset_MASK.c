
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int kvm; } ;
struct TYPE_2__ {unsigned long hior; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct kvm_vcpu *VAR_0)
{
 if (!FUNC_0(VAR_0->kvm))
  return FUNC_1(VAR_0)->hior;
 return 0;
}
