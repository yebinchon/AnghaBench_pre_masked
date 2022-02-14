
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* gprs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned long,unsigned long*,unsigned long*) ;

int FUNC_1(struct kvm_vcpu *VAR_1)
{
 unsigned long VAR_2, VAR_3[VAR_0];


 VAR_2 = VAR_1->arch.gprs[2];
 VAR_3[0] = VAR_1->arch.gprs[4];
 VAR_3[1] = VAR_1->arch.gprs[5];
 VAR_3[2] = VAR_1->arch.gprs[6];
 VAR_3[3] = VAR_1->arch.gprs[7];

 return FUNC_0(VAR_1, VAR_2,
      VAR_3, &VAR_1->arch.gprs[2] );
}
