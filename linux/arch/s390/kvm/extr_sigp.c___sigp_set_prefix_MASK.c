
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int kvm; } ;
struct TYPE_3__ {int address; } ;
struct TYPE_4__ {TYPE_1__ prefix; } ;
struct kvm_s390_irq {TYPE_2__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_s390_irq*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_5, struct kvm_vcpu *VAR_6,
        u32 VAR_7, u64 *VAR_8)
{
 struct kvm_s390_irq VAR_9 = {
  .type = VAR_1,
  .u.prefix.address = VAR_7 & 0x7fffe000u,
 };
 int VAR_10;






 if (FUNC_0(VAR_5->kvm, VAR_9.u.prefix.address)) {
  *VAR_8 &= 0xffffffff00000000UL;
  *VAR_8 |= VAR_4;
  return VAR_2;
 }

 VAR_10 = FUNC_1(VAR_6, &VAR_9);
 if (VAR_10 == -VAR_0) {
  *VAR_8 &= 0xffffffff00000000UL;
  *VAR_8 |= VAR_3;
  return VAR_2;
 }

 return VAR_10;
}
