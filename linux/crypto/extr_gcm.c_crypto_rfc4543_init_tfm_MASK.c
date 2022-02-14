
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_sync_skcipher {int dummy; } ;
struct crypto_rfc4543_req_ctx {int dummy; } ;
struct crypto_aead_spawn {int dummy; } ;
struct crypto_rfc4543_instance_ctx {struct crypto_aead_spawn aead; } ;
struct crypto_rfc4543_ctx {struct crypto_sync_skcipher* null; struct crypto_sync_skcipher* child; } ;
typedef struct crypto_sync_skcipher crypto_aead ;
struct aead_instance {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct crypto_sync_skcipher*) ;
 int FUNC_2 (struct crypto_sync_skcipher*) ;
 struct aead_instance* FUNC_3 (struct crypto_sync_skcipher*) ;
 struct crypto_rfc4543_instance_ctx* FUNC_4 (struct aead_instance*) ;
 unsigned long FUNC_5 (struct crypto_sync_skcipher*) ;
 struct crypto_rfc4543_ctx* FUNC_6 (struct crypto_sync_skcipher*) ;
 int FUNC_7 (struct crypto_sync_skcipher*) ;
 int FUNC_8 (struct crypto_sync_skcipher*,scalar_t__) ;
 int FUNC_9 (struct crypto_sync_skcipher*) ;
 struct crypto_sync_skcipher* FUNC_10 () ;
 struct crypto_sync_skcipher* FUNC_11 (struct crypto_aead_spawn*) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct crypto_aead *VAR_1)
{
 struct aead_instance *VAR_2 = FUNC_3(VAR_1);
 struct crypto_rfc4543_instance_ctx *VAR_3 = FUNC_4(VAR_2);
 struct crypto_aead_spawn *VAR_4 = &VAR_3->aead;
 struct crypto_rfc4543_ctx *VAR_5 = FUNC_6(VAR_1);
 struct crypto_aead *VAR_6;
 struct crypto_sync_skcipher *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 VAR_6 = FUNC_11(VAR_4);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_7 = FUNC_10();
 VAR_9 = FUNC_2(VAR_7);
 if (FUNC_1(VAR_7))
  goto err_free_aead;

 VAR_5->child = VAR_6;
 VAR_5->null = VAR_7;

 VAR_8 = FUNC_5(VAR_6);
 VAR_8 &= ~(FUNC_12() - 1);
 FUNC_8(
  VAR_1,
  sizeof(struct crypto_rfc4543_req_ctx) +
  FUNC_0(FUNC_7(VAR_6), FUNC_12()) +
  VAR_8 + VAR_0);

 return 0;

err_free_aead:
 FUNC_9(VAR_6);
 return VAR_9;
}
