
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct openpic {scalar_t__ kvm; scalar_t__ mpic_mode_mask; int lock; int nb_cpus; TYPE_1__* dst; } ;
struct TYPE_4__ {size_t irq_cpu_id; int epr_flags; scalar_t__ irq_type; struct openpic* mpic; } ;
struct kvm_vcpu {scalar_t__ kvm; TYPE_2__ arch; } ;
struct kvm_device {int * ops; struct openpic* private; } ;
struct TYPE_3__ {struct kvm_vcpu* vcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct kvm_device *VAR_8, struct kvm_vcpu *VAR_9,
        u32 VAR_10)
{
 struct openpic *VAR_11 = VAR_8->private;
 int VAR_12 = 0;

 if (VAR_8->ops != &VAR_7)
  return -VAR_2;
 if (VAR_11->kvm != VAR_9->kvm)
  return -VAR_2;
 if (VAR_10 < 0 || VAR_10 >= VAR_6)
  return -VAR_2;

 FUNC_1(&VAR_11->lock);

 if (VAR_11->dst[VAR_10].vcpu) {
  VAR_12 = -VAR_1;
  goto out;
 }
 if (VAR_9->arch.irq_type) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_11->dst[VAR_10].vcpu = VAR_9;
 VAR_11->nb_cpus = FUNC_0(VAR_11->nb_cpus, VAR_10 + 1);

 VAR_9->arch.mpic = VAR_11;
 VAR_9->arch.irq_cpu_id = VAR_10;
 VAR_9->arch.irq_type = VAR_5;


 if (VAR_11->mpic_mode_mask == VAR_3)
  VAR_9->arch.epr_flags |= VAR_4;

out:
 FUNC_2(&VAR_11->lock);
 return VAR_12;
}
