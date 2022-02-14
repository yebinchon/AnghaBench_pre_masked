
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef enum gacc_mode { ____Placeholder_gacc_mode } gacc_mode ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long,void*,unsigned long) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long,void*,unsigned long) ;

int FUNC_4(struct kvm_vcpu *VAR_2, unsigned long VAR_3,
        void *VAR_4, unsigned long VAR_5, enum gacc_mode VAR_6)
{
 unsigned long VAR_7, VAR_8;
 int VAR_9 = 0;

 while (VAR_5 && !VAR_9) {
  VAR_8 = FUNC_0(VAR_2, VAR_3);
  VAR_7 = FUNC_1(VAR_1 - (VAR_8 & ~VAR_0), VAR_5);
  if (VAR_6)
   VAR_9 = FUNC_3(VAR_2, VAR_8, VAR_4, VAR_7);
  else
   VAR_9 = FUNC_2(VAR_2, VAR_8, VAR_4, VAR_7);
  VAR_5 -= VAR_7;
  VAR_3 += VAR_7;
  VAR_4 += VAR_7;
 }
 return VAR_9;
}
