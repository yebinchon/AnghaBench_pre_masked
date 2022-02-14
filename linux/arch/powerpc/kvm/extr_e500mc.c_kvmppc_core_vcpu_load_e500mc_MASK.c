
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {int dummy; } ;
struct TYPE_4__ {unsigned long shadow_epcr; unsigned long shadow_msrp; size_t eplc; size_t epsc; unsigned long ivpr; unsigned long* ivor; unsigned long epr; scalar_t__ oldpir; TYPE_1__* shared; } ;
struct kvm_vcpu {unsigned long vcpu_id; TYPE_2__ arch; } ;
struct TYPE_3__ {unsigned long srr0; unsigned long srr1; unsigned long dar; unsigned long esr; scalar_t__ sprg3; scalar_t__ sprg2; scalar_t__ sprg1; scalar_t__ sprg0; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct kvm_vcpu* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 size_t FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvmppc_vcpu_e500*) ;
 int * VAR_23 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;
 struct kvmppc_vcpu_e500* FUNC_7 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_24, int VAR_25)
{
 struct kvmppc_vcpu_e500 *VAR_26 = FUNC_7(VAR_24);

 FUNC_3(VAR_24, VAR_25);

 FUNC_6(VAR_20, FUNC_2(VAR_24));
 FUNC_6(VAR_4, VAR_24->arch.shadow_epcr);
 FUNC_6(VAR_13, VAR_24->vcpu_id);
 FUNC_6(VAR_21, VAR_24->arch.shadow_msrp);
 VAR_24->arch.eplc = VAR_2 | (FUNC_2(VAR_24) << VAR_3);
 VAR_24->arch.epsc = VAR_24->arch.eplc;
 FUNC_6(VAR_5, VAR_24->arch.eplc);
 FUNC_6(VAR_6, VAR_24->arch.epsc);

 FUNC_6(VAR_12, VAR_24->arch.ivpr);
 FUNC_6(VAR_10, VAR_24->arch.ivor[VAR_0]);
 FUNC_6(VAR_11, VAR_24->arch.ivor[VAR_1]);
 FUNC_6(VAR_14, (unsigned long)VAR_24->arch.shared->sprg0);
 FUNC_6(VAR_15, (unsigned long)VAR_24->arch.shared->sprg1);
 FUNC_6(VAR_16, (unsigned long)VAR_24->arch.shared->sprg2);
 FUNC_6(VAR_17, (unsigned long)VAR_24->arch.shared->sprg3);

 FUNC_6(VAR_18, VAR_24->arch.shared->srr0);
 FUNC_6(VAR_19, VAR_24->arch.shared->srr1);

 FUNC_6(VAR_8, VAR_24->arch.epr);
 FUNC_6(VAR_7, VAR_24->arch.shared->dar);
 FUNC_6(VAR_9, VAR_24->arch.shared->esr);

 if (VAR_24->arch.oldpir != FUNC_5(VAR_22) ||
     FUNC_0(VAR_23[FUNC_2(VAR_24)]) != VAR_24) {
  FUNC_4(VAR_26);
  FUNC_1(VAR_23[FUNC_2(VAR_24)], VAR_24);
 }
}
