
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct openpic {int gcr; int mpic_mode_mask; int lock; int * dst; } ;
struct TYPE_2__ {int irq_cpu_id; struct openpic* mpic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct openpic*,int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct openpic *VAR_2 = VAR_1->arch.mpic;
 int VAR_3 = VAR_1->arch.irq_cpu_id;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);

 if ((VAR_2->gcr & VAR_2->mpic_mode_mask) == VAR_0)
  FUNC_0(VAR_1, FUNC_1(VAR_2, &VAR_2->dst[VAR_3], VAR_3));

 FUNC_3(&VAR_2->lock, VAR_4);
}
