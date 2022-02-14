
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mmu; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
typedef int gva_t ;
typedef int gpa_t ;
struct TYPE_3__ {scalar_t__ direct_map; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int *) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct kvm_vcpu *VAR_1, gva_t VAR_2)
{
 gpa_t VAR_3;
 int VAR_4;

 if (VAR_1->arch.mmu->direct_map)
  return 0;

 VAR_3 = FUNC_0(VAR_1, VAR_2, ((void*)0));

 VAR_4 = FUNC_1(VAR_1->kvm, VAR_3 >> VAR_0);

 return VAR_4;
}
