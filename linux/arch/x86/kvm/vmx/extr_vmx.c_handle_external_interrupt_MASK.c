
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_exits; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;



__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_0)
{
 ++VAR_0->stat.irq_exits;
 return 1;
}
