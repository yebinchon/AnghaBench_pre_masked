
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {unsigned int* pid; } ;
struct TYPE_4__ {TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int mas4; } ;


 struct kvmppc_vcpu_e500* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct kvmppc_vcpu_e500 *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = (VAR_0->arch.shared->mas4 >> 16) & 0xf;

 return VAR_1->pid[VAR_2];
}
