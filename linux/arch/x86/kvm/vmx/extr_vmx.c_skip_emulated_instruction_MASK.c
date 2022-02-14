
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ exit_reason; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_4)
{
 unsigned long VAR_5;
 if (!FUNC_3(VAR_3) ||
     FUNC_4(VAR_4)->exit_reason != VAR_1) {
  VAR_5 = FUNC_1(VAR_4);
  VAR_5 += FUNC_5(VAR_2);
  FUNC_2(VAR_4, VAR_5);
 } else {
  if (!FUNC_0(VAR_4, VAR_0))
   return 0;
 }


 FUNC_6(VAR_4, 0);

 return 1;
}
