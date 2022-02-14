
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_6)
{
 if (FUNC_3(VAR_5)) {
  unsigned long VAR_7 = FUNC_4(VAR_3);
  int VAR_8, VAR_9;

  VAR_8 = VAR_7 & VAR_1;
  VAR_9 = VAR_7 & VAR_0;





  if ((VAR_8 == VAR_4) &&
      (VAR_9 == VAR_2)) {
   FUNC_1(VAR_6);
   return FUNC_2(VAR_6);
  }
 }
 return FUNC_0(VAR_6, 0);
}
