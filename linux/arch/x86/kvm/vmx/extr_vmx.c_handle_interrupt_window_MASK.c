
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_window_exits; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2)
{
 FUNC_0(FUNC_2(VAR_2), VAR_0);

 FUNC_1(VAR_1, VAR_2);

 ++VAR_2->stat.irq_window_exits;
 return 1;
}
