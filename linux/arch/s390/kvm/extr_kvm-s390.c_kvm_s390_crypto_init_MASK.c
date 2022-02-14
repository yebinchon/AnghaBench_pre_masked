
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int aes_kw; int dea_kw; TYPE_2__* crycb; } ;
struct TYPE_8__ {TYPE_1__ crypto; TYPE_3__* sie_page2; } ;
struct kvm {TYPE_4__ arch; } ;
struct TYPE_6__ {int dea_wrapping_key_mask; int aes_wrapping_key_mask; } ;
struct TYPE_7__ {TYPE_2__ crycb; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm*,int) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_0)
{
 VAR_0->arch.crypto.crycb = &VAR_0->arch.sie_page2->crycb;
 FUNC_1(VAR_0);

 if (!FUNC_2(VAR_0, 76))
  return;


 VAR_0->arch.crypto.aes_kw = 1;
 VAR_0->arch.crypto.dea_kw = 1;
 FUNC_0(VAR_0->arch.crypto.crycb->aes_wrapping_key_mask,
    sizeof(VAR_0->arch.crypto.crycb->aes_wrapping_key_mask));
 FUNC_0(VAR_0->arch.crypto.crycb->dea_wrapping_key_mask,
    sizeof(VAR_0->arch.crypto.crycb->dea_wrapping_key_mask));
}
