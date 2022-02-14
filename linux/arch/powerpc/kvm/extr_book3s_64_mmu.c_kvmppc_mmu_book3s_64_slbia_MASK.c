
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int slb_nr; TYPE_1__* slb; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int valid; scalar_t__ origv; scalar_t__ orige; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1)
{
 int VAR_2;

 FUNC_0("KVM MMU: slbia()\n");

 for (VAR_2 = 1; VAR_2 < VAR_1->arch.slb_nr; VAR_2++) {
  VAR_1->arch.slb[VAR_2].valid = 0;
  VAR_1->arch.slb[VAR_2].orige = 0;
  VAR_1->arch.slb[VAR_2].origv = 0;
 }

 if (FUNC_1(VAR_1) & VAR_0) {
  FUNC_3(VAR_1);
  FUNC_4(VAR_1, FUNC_2(VAR_1));
 }
}
