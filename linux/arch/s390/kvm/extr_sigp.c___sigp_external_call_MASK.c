
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int vcpu_id; } ;
struct TYPE_3__ {int code; } ;
struct TYPE_4__ {TYPE_1__ extcall; } ;
struct kvm_s390_irq {TYPE_2__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_s390_irq*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_5,
    struct kvm_vcpu *VAR_6, u64 *VAR_7)
{
 struct kvm_s390_irq VAR_8 = {
  .type = VAR_1,
  .u.extcall.code = VAR_5->vcpu_id,
 };
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, &VAR_8);
 if (VAR_9 == -VAR_0) {
  *VAR_7 &= 0xffffffff00000000UL;
  *VAR_7 |= VAR_4;
  return VAR_3;
 } else if (VAR_9 == 0) {
  FUNC_0(VAR_5, 4, "sent sigp ext call to cpu %x",
      VAR_6->vcpu_id);
 }

 return VAR_9 ? VAR_9 : VAR_2;
}
