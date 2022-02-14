
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_xics {int max_icsid; struct kvmppc_xics** ics; int dentry; struct kvm* kvm; struct kvmppc_xics* private; } ;
struct kvm_device {int max_icsid; struct kvm_device** ics; int dentry; struct kvm* kvm; struct kvm_device* private; } ;
struct TYPE_2__ {int * xics; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvmppc_xics*) ;

__attribute__((used)) static void FUNC_2(struct kvm_device *VAR_0)
{
 struct kvmppc_xics *VAR_1 = VAR_0->private;
 int VAR_2;
 struct kvm *VAR_3 = VAR_1->kvm;

 FUNC_0(VAR_1->dentry);

 if (VAR_3)
  VAR_3->arch.xics = ((void*)0);

 for (VAR_2 = 0; VAR_2 <= VAR_1->max_icsid; VAR_2++)
  FUNC_1(VAR_1->ics[VAR_2]);
 FUNC_1(VAR_1);
 FUNC_1(VAR_0);
}
