
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
struct TYPE_4__ {TYPE_1__ pio; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_0)
{
 FUNC_0(!VAR_0->arch.pio.count);

 return FUNC_1(VAR_0);
}
