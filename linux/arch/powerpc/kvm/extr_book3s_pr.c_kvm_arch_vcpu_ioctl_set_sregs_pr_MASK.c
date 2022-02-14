
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct kvmppc_vcpu_book3s {int * dbat; int * ibat; int sdr1; } ;
struct TYPE_10__ {int (* mtsrin ) (struct kvm_vcpu*,int,int ) ;int (* slbmte ) (struct kvm_vcpu*,int,int) ;int (* slbia ) (struct kvm_vcpu*) ;} ;
struct TYPE_11__ {int hflags; TYPE_3__ mmu; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_12__ {int* ibat; int* dbat; int * sr; } ;
struct TYPE_9__ {TYPE_1__* slb; } ;
struct TYPE_13__ {TYPE_5__ ppc32; TYPE_2__ ppc64; int sdr1; } ;
struct TYPE_14__ {TYPE_6__ s; } ;
struct kvm_sregs {TYPE_7__ u; int pvr; } ;
struct TYPE_8__ {int slbe; int slbv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int *,int,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int,int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int,int) ;
 int FUNC_6 (struct kvm_vcpu*,int,int ) ;
 struct kvmppc_vcpu_book3s* FUNC_7 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_2,
         struct kvm_sregs *VAR_3)
{
 struct kvmppc_vcpu_book3s *VAR_4 = FUNC_7(VAR_2);
 int VAR_5;

 FUNC_2(VAR_2, VAR_3->pvr);

 VAR_4->sdr1 = VAR_3->u.s.sdr1;
 {
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
   VAR_2->arch.mmu.mtsrin(VAR_2, VAR_5, VAR_3->u.s.ppc32.sr[VAR_5]);
  }
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
   FUNC_1(VAR_2, &(VAR_4->ibat[VAR_5]), 0,
           (u32)VAR_3->u.s.ppc32.ibat[VAR_5]);
   FUNC_1(VAR_2, &(VAR_4->ibat[VAR_5]), 1,
           (u32)(VAR_3->u.s.ppc32.ibat[VAR_5] >> 32));
   FUNC_1(VAR_2, &(VAR_4->dbat[VAR_5]), 0,
           (u32)VAR_3->u.s.ppc32.dbat[VAR_5]);
   FUNC_1(VAR_2, &(VAR_4->dbat[VAR_5]), 1,
           (u32)(VAR_3->u.s.ppc32.dbat[VAR_5] >> 32));
  }
 }


 FUNC_0(VAR_2, 0, 0);

 return 0;
}
