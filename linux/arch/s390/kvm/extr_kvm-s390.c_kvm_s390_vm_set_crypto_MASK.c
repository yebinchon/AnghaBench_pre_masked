
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_device_attr {int attr; } ;
struct TYPE_5__ {int aes_kw; int dea_kw; int apie; TYPE_1__* crycb; } ;
struct TYPE_6__ {TYPE_2__ crypto; } ;
struct kvm {int lock; TYPE_3__ arch; } ;
struct TYPE_4__ {int dea_wrapping_key_mask; int aes_wrapping_key_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (struct kvm*,int,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct kvm*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct kvm*,int) ;

__attribute__((used)) static int FUNC_8(struct kvm *VAR_3, struct kvm_device_attr *VAR_4)
{
 FUNC_5(&VAR_3->lock);
 switch (VAR_4->attr) {
 case 130:
  if (!FUNC_7(VAR_3, 76)) {
   FUNC_6(&VAR_3->lock);
   return -VAR_0;
  }
  FUNC_2(
   VAR_3->arch.crypto.crycb->aes_wrapping_key_mask,
   sizeof(VAR_3->arch.crypto.crycb->aes_wrapping_key_mask));
  VAR_3->arch.crypto.aes_kw = 1;
  FUNC_0(VAR_3, 3, "%s", "ENABLE: AES keywrapping support");
  break;
 case 128:
  if (!FUNC_7(VAR_3, 76)) {
   FUNC_6(&VAR_3->lock);
   return -VAR_0;
  }
  FUNC_2(
   VAR_3->arch.crypto.crycb->dea_wrapping_key_mask,
   sizeof(VAR_3->arch.crypto.crycb->dea_wrapping_key_mask));
  VAR_3->arch.crypto.dea_kw = 1;
  FUNC_0(VAR_3, 3, "%s", "ENABLE: DEA keywrapping support");
  break;
 case 133:
  if (!FUNC_7(VAR_3, 76)) {
   FUNC_6(&VAR_3->lock);
   return -VAR_0;
  }
  VAR_3->arch.crypto.aes_kw = 0;
  FUNC_4(VAR_3->arch.crypto.crycb->aes_wrapping_key_mask, 0,
   sizeof(VAR_3->arch.crypto.crycb->aes_wrapping_key_mask));
  FUNC_0(VAR_3, 3, "%s", "DISABLE: AES keywrapping support");
  break;
 case 131:
  if (!FUNC_7(VAR_3, 76)) {
   FUNC_6(&VAR_3->lock);
   return -VAR_0;
  }
  VAR_3->arch.crypto.dea_kw = 0;
  FUNC_4(VAR_3->arch.crypto.crycb->dea_wrapping_key_mask, 0,
   sizeof(VAR_3->arch.crypto.crycb->dea_wrapping_key_mask));
  FUNC_0(VAR_3, 3, "%s", "DISABLE: DEA keywrapping support");
  break;
 case 129:
  if (!FUNC_1()) {
   FUNC_6(&VAR_3->lock);
   return -VAR_2;
  }
  VAR_3->arch.crypto.apie = 1;
  break;
 case 132:
  if (!FUNC_1()) {
   FUNC_6(&VAR_3->lock);
   return -VAR_2;
  }
  VAR_3->arch.crypto.apie = 0;
  break;
 default:
  FUNC_6(&VAR_3->lock);
  return -VAR_1;
 }

 FUNC_3(VAR_3);
 FUNC_6(&VAR_3->lock);
 return 0;
}
