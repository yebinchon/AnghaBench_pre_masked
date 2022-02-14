
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (char*,struct kvm_vcpu*,int,int) ;

void FUNC_5(struct kvm_vcpu *VAR_0, ulong VAR_1, ulong VAR_2)
{
 FUNC_4("", VAR_0, VAR_1, VAR_2);
 VAR_1 &= VAR_2;

 switch (VAR_2) {
 case ~0xfffUL:
  FUNC_3(VAR_0, VAR_1);
  break;
 case 0x0ffff000:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 0:

  FUNC_1(VAR_0);
  break;
 default:
  FUNC_0(1);
  break;
 }
}
