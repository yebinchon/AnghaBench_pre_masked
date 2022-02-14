
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int host_cp0_guestctl0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long,unsigned long*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_5, unsigned long VAR_6,
      unsigned long *VAR_7)
{
 unsigned int VAR_8 = (VAR_5->arch.host_cp0_guestctl0 &
     VAR_1) >> VAR_4;


 if (FUNC_2(VAR_8 == VAR_2)) {
  *VAR_7 = VAR_6;
  return 0;
 }


 if (FUNC_0(VAR_8 != VAR_3,
   "Unexpected gexccode %#x\n", VAR_8))
  return -VAR_0;


 return FUNC_1(VAR_5, VAR_6, VAR_7);
}
