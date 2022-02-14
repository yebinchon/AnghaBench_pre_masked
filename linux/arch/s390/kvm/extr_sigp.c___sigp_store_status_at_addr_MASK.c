
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_5,
           struct kvm_vcpu *VAR_6,
           u32 VAR_7, u64 *VAR_8)
{
 int VAR_9;

 if (!FUNC_1(VAR_6, VAR_0)) {
  *VAR_8 &= 0xffffffff00000000UL;
  *VAR_8 |= VAR_3;
  return VAR_2;
 }

 VAR_7 &= 0x7ffffe00;
 VAR_9 = FUNC_0(VAR_6, VAR_7);
 if (VAR_9 == -VAR_1) {
  *VAR_8 &= 0xffffffff00000000UL;
  *VAR_8 |= VAR_4;
  VAR_9 = VAR_2;
 }
 return VAR_9;
}
