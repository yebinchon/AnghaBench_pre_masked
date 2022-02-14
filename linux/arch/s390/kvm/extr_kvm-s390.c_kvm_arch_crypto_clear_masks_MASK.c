
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* crycb; } ;
struct TYPE_4__ {TYPE_3__ crypto; } ;
struct kvm {int lock; TYPE_1__ arch; } ;
struct TYPE_5__ {int apcb1; int apcb0; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*,int,char*,char*) ;
 int FUNC_1 (struct kvm*,int ) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct kvm *VAR_1)
{
 FUNC_5(&VAR_1->lock);
 FUNC_2(VAR_1);

 FUNC_4(&VAR_1->arch.crypto.crycb->apcb0, 0,
        sizeof(VAR_1->arch.crypto.crycb->apcb0));
 FUNC_4(&VAR_1->arch.crypto.crycb->apcb1, 0,
        sizeof(VAR_1->arch.crypto.crycb->apcb1));

 FUNC_0(VAR_1, 3, "%s", "CLR CRYCB:");

 FUNC_1(VAR_1, VAR_0);
 FUNC_3(VAR_1);
 FUNC_6(&VAR_1->lock);
}
