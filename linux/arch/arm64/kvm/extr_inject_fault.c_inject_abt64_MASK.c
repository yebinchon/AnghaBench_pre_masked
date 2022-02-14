
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 unsigned long* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int * FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_7 (struct kvm_vcpu*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_12, bool VAR_13, unsigned long VAR_14)
{
 unsigned long VAR_15 = *FUNC_2(VAR_12);
 bool VAR_16 = FUNC_3(VAR_12);
 u32 VAR_17 = 0;

 FUNC_5(VAR_12, *FUNC_4(VAR_12));
 *FUNC_4(VAR_12) = FUNC_0(VAR_12, VAR_11);

 *FUNC_2(VAR_12) = VAR_10;
 FUNC_6(VAR_12, VAR_15);

 FUNC_7(VAR_12, VAR_14, VAR_7);





 if (FUNC_1(VAR_12))
  VAR_17 |= VAR_6;





 if (VAR_16 || (VAR_15 & VAR_9) == VAR_8)
  VAR_17 |= (VAR_3 << VAR_4);
 else
  VAR_17 |= (VAR_2 << VAR_4);

 if (!VAR_13)
  VAR_17 |= VAR_1 << VAR_4;

 FUNC_7(VAR_12, VAR_17 | VAR_5, VAR_0);
}
