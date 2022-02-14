
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int adm; int aqm; int apm; } ;
struct TYPE_7__ {int adm; int aqm; int apm; } ;
struct kvm_s390_crypto_cb {TYPE_4__ apcb0; TYPE_3__ apcb1; } ;
struct TYPE_5__ {int crycbd; struct kvm_s390_crypto_cb* crycb; } ;
struct TYPE_6__ {TYPE_1__ crypto; } ;
struct kvm {int lock; TYPE_2__ arch; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*,int,char*,unsigned long,unsigned short,unsigned short,...) ;
 int FUNC_1 (struct kvm*,int ) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*) ;
 int FUNC_4 (int ,unsigned long*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct kvm *VAR_2, unsigned long *VAR_3,
          unsigned long *VAR_4, unsigned long *VAR_5)
{
 struct kvm_s390_crypto_cb *VAR_6 = VAR_2->arch.crypto.crycb;

 FUNC_5(&VAR_2->lock);
 FUNC_2(VAR_2);

 switch (VAR_2->arch.crypto.crycbd & VAR_0) {
 case 128:
  FUNC_4(VAR_6->apcb1.apm, VAR_3, 32);
  FUNC_0(VAR_2, 3, "SET CRYCB: apm %016lx %016lx %016lx %016lx",
    VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);
  FUNC_4(VAR_6->apcb1.aqm, VAR_4, 32);
  FUNC_0(VAR_2, 3, "SET CRYCB: aqm %016lx %016lx %016lx %016lx",
    VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3]);
  FUNC_4(VAR_6->apcb1.adm, VAR_5, 32);
  FUNC_0(VAR_2, 3, "SET CRYCB: adm %016lx %016lx %016lx %016lx",
    VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
  break;
 case 129:
 case 130:
  FUNC_4(VAR_6->apcb0.apm, VAR_3, 8);
  FUNC_4(VAR_6->apcb0.aqm, VAR_4, 2);
  FUNC_4(VAR_6->apcb0.adm, VAR_5, 2);
  FUNC_0(VAR_2, 3, "SET CRYCB: apm %016lx aqm %04x adm %04x",
    VAR_3[0], *((unsigned short *)VAR_4),
    *((unsigned short *)VAR_5));
  break;
 default:
  break;
 }


 FUNC_1(VAR_2, VAR_1);
 FUNC_3(VAR_2);
 FUNC_6(&VAR_2->lock);
}
