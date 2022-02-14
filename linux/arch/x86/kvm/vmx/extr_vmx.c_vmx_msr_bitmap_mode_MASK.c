
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static u8 FUNC_4(struct kvm_vcpu *VAR_4)
{
 u8 VAR_5 = 0;

 if (FUNC_0() &&
     (FUNC_2(FUNC_3(VAR_4)) &
      VAR_2)) {
  VAR_5 |= VAR_0;
  if (VAR_3 && FUNC_1(VAR_4))
   VAR_5 |= VAR_1;
 }

 return VAR_5;
}
