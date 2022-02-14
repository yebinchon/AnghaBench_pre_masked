
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int vcpu_id; int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int ,int) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_5,
    struct kvm_vcpu *VAR_6, u64 *VAR_7)
{
 int VAR_8;

 if (!FUNC_2(VAR_5->kvm, 9)) {
  *VAR_7 &= 0xffffffff00000000UL;
  *VAR_7 |= VAR_3;
  return VAR_2;
 }

 if (FUNC_1(VAR_6, VAR_0)) {

  VAR_8 = VAR_1;
 } else {

  *VAR_7 &= 0xffffffff00000000UL;
  *VAR_7 |= VAR_4;
  VAR_8 = VAR_2;
 }

 FUNC_0(VAR_5, 4, "sensed running status of cpu %x rc %x",
     VAR_6->vcpu_id, VAR_8);

 return VAR_8;
}
