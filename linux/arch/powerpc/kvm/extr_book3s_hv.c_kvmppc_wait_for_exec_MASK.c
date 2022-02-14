
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcore {int lock; } ;
struct TYPE_2__ {scalar_t__ state; int cpu_run; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct kvmppc_vcore *VAR_2,
     struct kvm_vcpu *VAR_3, int VAR_4)
{
 FUNC_0(VAR_1);

 FUNC_2(&VAR_3->arch.cpu_run, &VAR_1, VAR_4);
 if (VAR_3->arch.state == VAR_0) {
  FUNC_5(&VAR_2->lock);
  FUNC_3();
  FUNC_4(&VAR_2->lock);
 }
 FUNC_1(&VAR_3->arch.cpu_run, &VAR_1);
}
