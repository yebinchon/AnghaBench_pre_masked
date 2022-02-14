
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int slb_max; TYPE_5__* slb; int pvr; } ;
struct kvm_vcpu {TYPE_6__ arch; } ;
struct TYPE_8__ {TYPE_1__* slb; } ;
struct TYPE_9__ {TYPE_2__ ppc64; } ;
struct TYPE_10__ {TYPE_3__ s; } ;
struct kvm_sregs {TYPE_4__ u; int pvr; } ;
struct TYPE_11__ {int origv; int orige; } ;
struct TYPE_7__ {int slbv; int slbe; } ;


 int FUNC_0 (struct kvm_sregs*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0,
         struct kvm_sregs *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, 0, sizeof(struct kvm_sregs));
 VAR_1->pvr = VAR_0->arch.pvr;
 for (VAR_2 = 0; VAR_2 < VAR_0->arch.slb_max; VAR_2++) {
  VAR_1->u.s.ppc64.slb[VAR_2].slbe = VAR_0->arch.slb[VAR_2].orige;
  VAR_1->u.s.ppc64.slb[VAR_2].slbv = VAR_0->arch.slb[VAR_2].origv;
 }

 return 0;
}
