
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct cc_hkey_info {unsigned int keylen; unsigned int hw_key1; unsigned int hw_key2; } ;
struct TYPE_5__ {void* slot; void* alg; } ;
struct TYPE_4__ {void* key2_slot; void* key1_slot; } ;
struct cc_cipher_ctx {unsigned int keylen; int key_type; TYPE_2__ cpp; int flow_mode; int cipher_mode; TYPE_3__* drvdata; TYPE_1__ hw; } ;
typedef int hki ;
struct TYPE_6__ {int hw_rev; } ;


 void* VAR_0 ;
 void* VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (unsigned int) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 struct crypto_tfm* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct crypto_tfm*) ;
 struct cc_cipher_ctx* FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (struct crypto_tfm*,int ) ;
 int FUNC_7 (struct device*,char*,struct cc_cipher_ctx*,void*,...) ;
 int FUNC_8 (struct device*,char*,...) ;
 struct device* FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char*,int *,unsigned int) ;
 int FUNC_11 (struct cc_hkey_info*,int const*,unsigned int) ;
 scalar_t__ FUNC_12 (struct cc_cipher_ctx*,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct crypto_skcipher *VAR_13, const u8 *VAR_14,
        unsigned int VAR_15)
{
 struct crypto_tfm *VAR_16 = FUNC_3(VAR_13);
 struct cc_cipher_ctx *VAR_17 = FUNC_5(VAR_16);
 struct device *VAR_18 = FUNC_9(VAR_17->drvdata);
 struct cc_hkey_info VAR_19;

 FUNC_7(VAR_18, "Setting HW key in context @%p for %s. keylen=%u\n",
  VAR_17, FUNC_4(VAR_16), VAR_15);
 FUNC_10("key", (u8 *)VAR_14, VAR_15);




 if (VAR_15 != sizeof(VAR_19)) {
  FUNC_8(VAR_18, "Unsupported protected key size %d.\n", VAR_15);
  FUNC_6(VAR_16, VAR_3);
  return -VAR_9;
 }

 FUNC_11(&VAR_19, VAR_14, VAR_15);




 VAR_15 = VAR_19.keylen;

 if (FUNC_12(VAR_17, VAR_15)) {
  FUNC_8(VAR_18, "Unsupported key size %d.\n", VAR_15);
  FUNC_6(VAR_16, VAR_3);
  return -VAR_9;
 }

 VAR_17->keylen = VAR_15;

 switch (FUNC_2(VAR_19.hw_key1)) {
 case 129:
  if (VAR_17->flow_mode == VAR_12) {
   FUNC_8(VAR_18, "Only AES HW protected keys are supported\n");
   return -VAR_9;
  }

  VAR_17->hw.key1_slot = FUNC_1(VAR_19.hw_key1);
  if (VAR_17->hw.key1_slot == VAR_10) {
   FUNC_8(VAR_18, "Unsupported hw key1 number (%d)\n",
    VAR_19.hw_key1);
   return -VAR_9;
  }

  if (VAR_17->cipher_mode == VAR_8 ||
      VAR_17->cipher_mode == VAR_7 ||
      VAR_17->cipher_mode == VAR_4) {
   if (VAR_19.hw_key1 == VAR_19.hw_key2) {
    FUNC_8(VAR_18, "Illegal hw key numbers (%d,%d)\n",
     VAR_19.hw_key1, VAR_19.hw_key2);
    return -VAR_9;
   }

   VAR_17->hw.key2_slot = FUNC_1(VAR_19.hw_key2);
   if (VAR_17->hw.key2_slot == VAR_10) {
    FUNC_8(VAR_18, "Unsupported hw key2 number (%d)\n",
     VAR_19.hw_key2);
    return -VAR_9;
   }
  }

  VAR_17->key_type = 129;
  FUNC_7(VAR_18, "HW protected key  %d/%d set\n.",
   VAR_17->hw.key1_slot, VAR_17->hw.key2_slot);
  break;

 case 128:
  if (VAR_17->drvdata->hw_rev < VAR_2) {
   FUNC_8(VAR_18, "CPP keys not supported in this hardware revision.\n");
   return -VAR_9;
  }

  if (VAR_17->cipher_mode != VAR_5 &&
      VAR_17->cipher_mode != VAR_6) {
   FUNC_8(VAR_18, "CPP keys only supported in CBC or CTR modes.\n");
   return -VAR_9;
  }

  VAR_17->cpp.slot = FUNC_0(VAR_19.hw_key1);
  if (VAR_17->flow_mode == VAR_11)
   VAR_17->cpp.alg = VAR_0;
  else
   VAR_17->cpp.alg = VAR_1;
  VAR_17->key_type = 128;
  FUNC_7(VAR_18, "policy protected key alg: %d slot: %d.\n",
   VAR_17->cpp.alg, VAR_17->cpp.slot);
  break;

 default:
  FUNC_8(VAR_18, "Unsupported protected key (%d)\n", VAR_19.hw_key1);
  return -VAR_9;
 }

 return 0;
}
