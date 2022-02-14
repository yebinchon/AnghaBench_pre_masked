
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xts_instance_ctx {int name; int spawn; } ;
struct skcipher_instance {int dummy; } ;
struct rctx {int dummy; } ;
struct priv {struct crypto_skcipher* tweak; struct crypto_skcipher* child; } ;
struct crypto_skcipher {int dummy; } ;
typedef struct crypto_skcipher crypto_cipher ;


 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct crypto_skcipher*) ;
 struct priv* FUNC_4 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_5 (struct crypto_skcipher*) ;
 int FUNC_6 (struct crypto_skcipher*,scalar_t__) ;
 struct crypto_skcipher* FUNC_7 (int *) ;
 struct skcipher_instance* FUNC_8 (struct crypto_skcipher*) ;
 struct xts_instance_ctx* FUNC_9 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_10(struct crypto_skcipher *VAR_0)
{
 struct skcipher_instance *VAR_1 = FUNC_8(VAR_0);
 struct xts_instance_ctx *VAR_2 = FUNC_9(VAR_1);
 struct priv *VAR_3 = FUNC_4(VAR_0);
 struct crypto_skcipher *VAR_4;
 struct crypto_cipher *VAR_5;

 VAR_4 = FUNC_7(&VAR_2->spawn);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->child = VAR_4;

 VAR_5 = FUNC_2(VAR_2->name, 0, 0);
 if (FUNC_0(VAR_5)) {
  FUNC_3(VAR_3->child);
  return FUNC_1(VAR_5);
 }

 VAR_3->tweak = VAR_5;

 FUNC_6(VAR_0, FUNC_5(VAR_4) +
      sizeof(struct rctx));

 return 0;
}
