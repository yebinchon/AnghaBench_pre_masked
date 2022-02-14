
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvmppc_xics {scalar_t__ kvm; } ;
struct TYPE_2__ {scalar_t__ irq_type; } ;
struct kvm_vcpu {scalar_t__ kvm; TYPE_1__ arch; } ;
struct kvm_device {int * ops; struct kvmppc_xics* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

int FUNC_1(struct kvm_device *VAR_4, struct kvm_vcpu *VAR_5,
        u32 VAR_6)
{
 struct kvmppc_xics *VAR_7 = VAR_4->private;
 int VAR_8 = -VAR_0;

 if (VAR_4->ops != &VAR_3)
  return -VAR_1;
 if (VAR_7->kvm != VAR_5->kvm)
  return -VAR_1;
 if (VAR_5->arch.irq_type)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (!VAR_8)
  VAR_5->arch.irq_type = VAR_2;

 return VAR_8;
}
