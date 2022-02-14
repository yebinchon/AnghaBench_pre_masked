
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int kvm; TYPE_1__* run; } ;
struct TYPE_2__ {scalar_t__ request_interrupt_window; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_0)
{
 return VAR_0->run->request_interrupt_window &&
  FUNC_0(!FUNC_1(VAR_0->kvm));
}
