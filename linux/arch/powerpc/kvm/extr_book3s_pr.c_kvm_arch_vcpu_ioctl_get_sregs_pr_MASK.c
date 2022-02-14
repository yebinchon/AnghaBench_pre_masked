
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct kvmppc_vcpu_book3s {TYPE_9__* dbat; TYPE_5__* ibat; int sdr1; } ;
struct TYPE_13__ {int hflags; TYPE_3__* slb; int pvr; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_15__ {int * dbat; int * ibat; int * sr; } ;
struct TYPE_11__ {TYPE_1__* slb; } ;
struct TYPE_16__ {TYPE_6__ ppc32; TYPE_2__ ppc64; int sdr1; } ;
struct TYPE_17__ {TYPE_7__ s; } ;
struct kvm_sregs {TYPE_8__ u; int pvr; } ;
struct TYPE_18__ {int raw; } ;
struct TYPE_14__ {int raw; } ;
struct TYPE_12__ {int orige; int origv; } ;
struct TYPE_10__ {int slbe; int slbv; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 struct kvmppc_vcpu_book3s* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1,
         struct kvm_sregs *VAR_2)
{
 struct kvmppc_vcpu_book3s *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_2->pvr = VAR_1->arch.pvr;

 VAR_2->u.s.sdr1 = FUNC_1(VAR_1)->sdr1;
 if (VAR_1->arch.hflags & VAR_0) {
  for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
   VAR_2->u.s.ppc64.slb[VAR_4].slbe = VAR_1->arch.slb[VAR_4].orige | VAR_4;
   VAR_2->u.s.ppc64.slb[VAR_4].slbv = VAR_1->arch.slb[VAR_4].origv;
  }
 } else {
  for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
   VAR_2->u.s.ppc32.sr[VAR_4] = FUNC_0(VAR_1, VAR_4);

  for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
   VAR_2->u.s.ppc32.ibat[VAR_4] = VAR_3->ibat[VAR_4].raw;
   VAR_2->u.s.ppc32.dbat[VAR_4] = VAR_3->dbat[VAR_4].raw;
  }
 }

 return 0;
}
