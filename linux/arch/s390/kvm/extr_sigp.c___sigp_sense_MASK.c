
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int vcpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int ,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_5, struct kvm_vcpu *VAR_6,
   u64 *VAR_7)
{
 const bool VAR_8 = FUNC_2(VAR_6, VAR_0);
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_6);
 if (!VAR_8 && !VAR_10)
  VAR_9 = VAR_1;
 else {
  *VAR_7 &= 0xffffffff00000000UL;
  if (VAR_10)
   *VAR_7 |= VAR_3;
  if (VAR_8)
   *VAR_7 |= VAR_4;
  VAR_9 = VAR_2;
 }

 FUNC_0(VAR_5, 4, "sensed status of cpu %x rc %x", VAR_6->vcpu_id,
     VAR_9);
 return VAR_9;
}
