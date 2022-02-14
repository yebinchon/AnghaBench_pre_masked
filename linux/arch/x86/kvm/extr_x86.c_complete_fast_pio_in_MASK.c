
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int size; int port; int linear_rip; } ;
struct TYPE_4__ {TYPE_1__ pio; int emulate_ctxt; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ,unsigned long*,int) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_0)
{
 unsigned long VAR_1;


 FUNC_0(VAR_0->arch.pio.count != 1);

 if (FUNC_6(!FUNC_2(VAR_0, VAR_0->arch.pio.linear_rip))) {
  VAR_0->arch.pio.count = 0;
  return 1;
 }


 VAR_1 = (VAR_0->arch.pio.size < 4) ? FUNC_3(VAR_0) : 0;





 FUNC_1(&VAR_0->arch.emulate_ctxt, VAR_0->arch.pio.size,
     VAR_0->arch.pio.port, &VAR_1, 1);
 FUNC_4(VAR_0, VAR_1);

 return FUNC_5(VAR_0);
}
