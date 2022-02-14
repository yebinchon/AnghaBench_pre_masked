
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* oldpir; TYPE_1__* shared; void* epr; void* epsc; void* eplc; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {void* esr; void* dar; void* srr1; void* srr0; void* sprg3; void* sprg2; void* sprg1; void* sprg0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_12)
{
 VAR_12->arch.eplc = FUNC_1(VAR_0);
 VAR_12->arch.epsc = FUNC_1(VAR_1);

 VAR_12->arch.shared->sprg0 = FUNC_1(VAR_5);
 VAR_12->arch.shared->sprg1 = FUNC_1(VAR_6);
 VAR_12->arch.shared->sprg2 = FUNC_1(VAR_7);
 VAR_12->arch.shared->sprg3 = FUNC_1(VAR_8);

 VAR_12->arch.shared->srr0 = FUNC_1(VAR_9);
 VAR_12->arch.shared->srr1 = FUNC_1(VAR_10);

 VAR_12->arch.epr = FUNC_1(VAR_3);
 VAR_12->arch.shared->dar = FUNC_1(VAR_2);
 VAR_12->arch.shared->esr = FUNC_1(VAR_4);

 VAR_12->arch.oldpir = FUNC_1(VAR_11);

 FUNC_0(VAR_12);
}
