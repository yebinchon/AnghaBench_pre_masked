
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int linear_rip; } ;
struct TYPE_4__ {int complete_userspace_io; TYPE_1__ pio; int emulate_ctxt; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,unsigned short,unsigned long*,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1, int VAR_2,
      unsigned short VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;


 VAR_4 = (VAR_2 < 4) ? FUNC_2(VAR_1) : 0;

 VAR_5 = FUNC_0(&VAR_1->arch.emulate_ctxt, VAR_2, VAR_3,
           &VAR_4, 1);
 if (VAR_5) {
  FUNC_3(VAR_1, VAR_4);
  return VAR_5;
 }

 VAR_1->arch.pio.linear_rip = FUNC_1(VAR_1);
 VAR_1->arch.complete_userspace_io = VAR_0;

 return 0;
}
