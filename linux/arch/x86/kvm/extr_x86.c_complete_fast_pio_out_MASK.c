
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int linear_rip; scalar_t__ count; } ;
struct TYPE_4__ {TYPE_1__ pio; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_0)
{
 VAR_0->arch.pio.count = 0;

 if (FUNC_2(!FUNC_0(VAR_0, VAR_0->arch.pio.linear_rip)))
  return 1;

 return FUNC_1(VAR_0);
}
