
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int vcpu_id; int cpu; TYPE_2__* kvm; } ;
struct TYPE_3__ {int emul_smt_mode; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int,int ,int *,int) ;

__attribute__((used)) static unsigned long FUNC_4(struct kvm_vcpu *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 struct kvm_vcpu *VAR_6;
 unsigned long VAR_7;

 VAR_5 = VAR_1->kvm->arch.emul_smt_mode;
 VAR_7 = 0;
 VAR_3 = VAR_1->vcpu_id & ~(VAR_5 - 1);
 for (VAR_2 = 0; VAR_2 < VAR_5; ++VAR_2, ++VAR_3) {
  VAR_6 = FUNC_2(VAR_1->kvm, VAR_3);
  if (!VAR_6)
   continue;





  VAR_4 = FUNC_0(VAR_6->cpu);
  if (VAR_4 >= 0)
   FUNC_3(VAR_4, VAR_0, ((void*)0), 1);
  if (FUNC_1(VAR_6))
   VAR_7 |= 1 << VAR_2;
 }
 return VAR_7;
}
