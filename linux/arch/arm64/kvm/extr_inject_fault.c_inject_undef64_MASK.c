
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 unsigned long* FUNC_2 (struct kvm_vcpu*) ;
 int * FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_6 (struct kvm_vcpu*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_6)
{
 unsigned long VAR_7 = *FUNC_2(VAR_6);
 u32 VAR_8 = (VAR_2 << VAR_1);

 FUNC_4(VAR_6, *FUNC_3(VAR_6));
 *FUNC_3(VAR_6) = FUNC_0(VAR_6, VAR_5);

 *FUNC_2(VAR_6) = VAR_4;
 FUNC_5(VAR_6, VAR_7);





 if (FUNC_1(VAR_6))
  VAR_8 |= VAR_3;

 FUNC_6(VAR_6, VAR_8, VAR_0);
}
