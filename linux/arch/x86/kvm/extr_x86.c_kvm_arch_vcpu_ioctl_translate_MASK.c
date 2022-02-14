
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* kvm; } ;
struct kvm_translation {unsigned long linear_address; int valid; int writeable; scalar_t__ usermode; scalar_t__ physical_address; } ;
typedef scalar_t__ gpa_t ;
struct TYPE_2__ {int srcu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,unsigned long,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_1,
        struct kvm_translation *VAR_2)
{
 unsigned long VAR_3 = VAR_2->linear_address;
 gpa_t VAR_4;
 int VAR_5;

 FUNC_3(VAR_1);

 VAR_5 = FUNC_1(&VAR_1->kvm->srcu);
 VAR_4 = FUNC_0(VAR_1, VAR_3, ((void*)0));
 FUNC_2(&VAR_1->kvm->srcu, VAR_5);
 VAR_2->physical_address = VAR_4;
 VAR_2->valid = VAR_4 != VAR_0;
 VAR_2->writeable = 1;
 VAR_2->usermode = 0;

 FUNC_4(VAR_1);
 return 0;
}
