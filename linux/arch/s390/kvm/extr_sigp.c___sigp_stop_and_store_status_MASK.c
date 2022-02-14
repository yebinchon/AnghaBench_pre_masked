
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int vcpu_id; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ stop; } ;
struct kvm_s390_irq {TYPE_2__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_s390_irq*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_4,
     struct kvm_vcpu *VAR_5, u64 *VAR_6)
{
 struct kvm_s390_irq VAR_7 = {
  .type = VAR_1,
  .u.stop.flags = VAR_2,
 };
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, &VAR_7);
 if (VAR_8 == -VAR_0)
  VAR_8 = VAR_3;
 else if (VAR_8 == 0)
  FUNC_0(VAR_4, 4, "sent sigp stop and store status to cpu %x",
      VAR_5->vcpu_id);

 return VAR_8;
}
