
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {struct kvm* kvm; } ;
struct TYPE_2__ {unsigned long l1_ptcr; } ;
struct kvm {TYPE_1__ arch; int srcu; } ;


 long VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct kvm*,unsigned long) ;
 unsigned long FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

long FUNC_4(struct kvm_vcpu *VAR_5)
{
 struct kvm *VAR_6 = VAR_5->kvm;
 unsigned long VAR_7 = FUNC_1(VAR_5, 4);
 int VAR_8;
 long VAR_9 = VAR_1;

 VAR_8 = FUNC_2(&VAR_6->srcu);




 if ((VAR_7 & VAR_4) > 12 - 8 ||
     !FUNC_0(VAR_5->kvm, (VAR_7 & VAR_3) >> VAR_2))
  VAR_9 = VAR_0;
 FUNC_3(&VAR_6->srcu, VAR_8);
 if (VAR_9 == VAR_1)
  VAR_6->arch.l1_ptcr = VAR_7;
 return VAR_9;
}
