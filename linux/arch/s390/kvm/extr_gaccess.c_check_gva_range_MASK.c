
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kvm_vcpu {int dummy; } ;
typedef enum gacc_mode { ____Placeholder_gacc_mode } gacc_mode ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned long,int ,unsigned long*,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;

int FUNC_4(struct kvm_vcpu *VAR_1, unsigned long VAR_2, u8 VAR_3,
      unsigned long VAR_4, enum gacc_mode VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;

 FUNC_1(VAR_1);
 while (VAR_4 > 0 && !VAR_8) {
  VAR_7 = FUNC_3(VAR_4, VAR_0 - (VAR_2 % VAR_0));
  VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_6, VAR_5);
  VAR_2 += VAR_7;
  VAR_4 -= VAR_7;
 }
 FUNC_2(VAR_1);

 return VAR_8;
}
