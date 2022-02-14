
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_pic {int dev_eclr; int kvm; int dev_slave; int dev_master; } ;
struct TYPE_2__ {struct kvm_pic* vpic; } ;
struct kvm {TYPE_1__ arch; int slots_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_pic*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kvm *VAR_1)
{
 struct kvm_pic *VAR_2 = VAR_1->arch.vpic;

 if (!VAR_2)
  return;

 FUNC_2(&VAR_1->slots_lock);
 FUNC_1(VAR_2->kvm, VAR_0, &VAR_2->dev_master);
 FUNC_1(VAR_2->kvm, VAR_0, &VAR_2->dev_slave);
 FUNC_1(VAR_2->kvm, VAR_0, &VAR_2->dev_eclr);
 FUNC_3(&VAR_1->slots_lock);

 VAR_1->arch.vpic = ((void*)0);
 FUNC_0(VAR_2);
}
