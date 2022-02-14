
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 unsigned long VAR_5 ;


 unsigned long* FUNC_1 (struct kvm_vcpu const*) ;

__attribute__((used)) static int FUNC_2(const struct kvm_vcpu *VAR_6)
{
 unsigned long VAR_7 = *FUNC_1(VAR_6) & VAR_5;
 switch (VAR_7) {
 case 129: return VAR_3;
 case 132: return VAR_0;
 case 128: return VAR_4;
 case 130: return VAR_2;
 case 131: return VAR_1;
 default: FUNC_0();
 }
}
