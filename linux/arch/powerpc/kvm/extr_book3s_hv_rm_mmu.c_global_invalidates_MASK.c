
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int online_vcores; int need_tlb_flush; } ;
struct kvm {TYPE_3__ arch; } ;
struct TYPE_6__ {TYPE_1__* kvm_vcore; scalar_t__ kvm_vcpu; } ;
struct TYPE_8__ {TYPE_2__ kvm_hstate; } ;
struct TYPE_5__ {int pcpu; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 TYPE_4__* VAR_1 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_2)
{
 int VAR_3;
 int VAR_4;
 if (VAR_2->arch.online_vcores == 1 && VAR_1->kvm_hstate.kvm_vcpu)
  VAR_3 = 0;
 else
  VAR_3 = 1;

 if (!VAR_3) {

  FUNC_4();
  FUNC_3(&VAR_2->arch.need_tlb_flush);
  VAR_4 = VAR_1->kvm_hstate.kvm_vcore->pcpu;




  if (FUNC_1(VAR_0))
   VAR_4 = FUNC_0(VAR_4);
  FUNC_2(VAR_4, &VAR_2->arch.need_tlb_flush);
 }

 return VAR_3;
}
