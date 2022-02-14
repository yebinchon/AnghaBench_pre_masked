
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int linear_rip; } ;
struct TYPE_4__ {int complete_userspace_io; TYPE_1__ pio; int emulate_ctxt; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,unsigned short,unsigned long*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 unsigned long FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_3, int VAR_4,
       unsigned short VAR_5)
{
 unsigned long VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = FUNC_0(&VAR_3->arch.emulate_ctxt,
         VAR_4, VAR_5, &VAR_6, 1);
 if (VAR_7)
  return VAR_7;





 if (VAR_5 == 0x7e &&
     FUNC_1(VAR_3->kvm, VAR_0)) {
  VAR_3->arch.complete_userspace_io =
   VAR_2;
  FUNC_4(VAR_3);
 } else {
  VAR_3->arch.pio.linear_rip = FUNC_2(VAR_3);
  VAR_3->arch.complete_userspace_io = VAR_1;
 }
 return 0;
}
