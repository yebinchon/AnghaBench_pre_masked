
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


struct TYPE_12__ {scalar_t__ pvr; int slb_nr; int slb_max; TYPE_1__* slb; } ;
struct kvm_vcpu {TYPE_6__ arch; } ;
struct TYPE_9__ {TYPE_2__* slb; } ;
struct TYPE_10__ {TYPE_3__ ppc64; } ;
struct TYPE_11__ {TYPE_4__ s; } ;
struct kvm_sregs {scalar_t__ pvr; TYPE_5__ u; } ;
struct TYPE_8__ {int slbe; int slbv; } ;
struct TYPE_7__ {int orige; int origv; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_2,
         struct kvm_sregs *VAR_3)
{
 int VAR_4, VAR_5;


 if (VAR_3->pvr != VAR_2->arch.pvr)
  return -VAR_0;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2->arch.slb_nr; VAR_4++) {
  if (VAR_3->u.s.ppc64.slb[VAR_4].slbe & VAR_1) {
   VAR_2->arch.slb[VAR_5].orige = VAR_3->u.s.ppc64.slb[VAR_4].slbe;
   VAR_2->arch.slb[VAR_5].origv = VAR_3->u.s.ppc64.slb[VAR_4].slbv;
   ++VAR_5;
  }
 }
 VAR_2->arch.slb_max = VAR_5;

 return 0;
}
