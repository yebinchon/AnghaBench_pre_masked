
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int vcpu_id; } ;
struct TYPE_3__ {int code; } ;
struct TYPE_4__ {TYPE_1__ emerg; } ;
struct kvm_s390_irq {TYPE_2__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_s390_irq*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2,
        struct kvm_vcpu *VAR_3)
{
 struct kvm_s390_irq VAR_4 = {
  .type = VAR_0,
  .u.emerg.code = VAR_2->vcpu_id,
 };
 int VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 if (!VAR_5)
  FUNC_0(VAR_2, 4, "sent sigp emerg to cpu %x",
      VAR_3->vcpu_id);

 return VAR_5 ? VAR_5 : VAR_1;
}
