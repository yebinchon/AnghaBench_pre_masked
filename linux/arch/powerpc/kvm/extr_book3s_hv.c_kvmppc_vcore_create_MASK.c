
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcore {int first_vcpuid; int preempt_list; struct kvm* kvm; int lpcr; int preempt_tb; int wq; int stoltb_lock; int lock; } ;
struct TYPE_2__ {int lpcr; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct kvmppc_vcore* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct kvmppc_vcore *FUNC_4(struct kvm *VAR_2, int VAR_3)
{
 struct kvmppc_vcore *VAR_4;

 VAR_4 = FUNC_2(sizeof(struct kvmppc_vcore), VAR_0);

 if (VAR_4 == ((void*)0))
  return ((void*)0);

 FUNC_3(&VAR_4->lock);
 FUNC_3(&VAR_4->stoltb_lock);
 FUNC_1(&VAR_4->wq);
 VAR_4->preempt_tb = VAR_1;
 VAR_4->lpcr = VAR_2->arch.lpcr;
 VAR_4->first_vcpuid = VAR_3;
 VAR_4->kvm = VAR_2;
 FUNC_0(&VAR_4->preempt_list);

 return VAR_4;
}
