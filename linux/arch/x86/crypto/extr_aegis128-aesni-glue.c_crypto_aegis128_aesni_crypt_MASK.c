
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_walk {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aegis_state {int dummy; } ;
struct TYPE_2__ {int bytes; } ;
struct aegis_ctx {TYPE_1__ key; } ;
struct aegis_crypt_ops {int (* skcipher_walk_init ) (struct skcipher_walk*,struct aead_request*,int) ;} ;
struct aegis_block {int dummy; } ;
struct aead_request {int assoclen; int src; int iv; } ;


 struct crypto_aead* FUNC_0 (struct aead_request*) ;
 struct aegis_ctx* FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct aegis_state*,struct aegis_block*,int ,unsigned int) ;
 int FUNC_3 (struct aegis_state*,int ,int ) ;
 int FUNC_4 (struct aegis_state*,int ,int ) ;
 int FUNC_5 (struct aegis_state*,struct skcipher_walk*,struct aegis_crypt_ops const*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct skcipher_walk*,struct aead_request*,int) ;

__attribute__((used)) static void FUNC_9(struct aead_request *VAR_0,
     struct aegis_block *VAR_1,
     unsigned int VAR_2,
     const struct aegis_crypt_ops *VAR_3)
{
 struct crypto_aead *VAR_4 = FUNC_0(VAR_0);
 struct aegis_ctx *VAR_5 = FUNC_1(VAR_4);
 struct skcipher_walk VAR_6;
 struct aegis_state VAR_7;

 VAR_3->skcipher_walk_init(&VAR_6, VAR_0, 1);

 FUNC_6();

 FUNC_3(&VAR_7, VAR_5->key.bytes, VAR_0->iv);
 FUNC_4(&VAR_7, VAR_0->src, VAR_0->assoclen);
 FUNC_5(&VAR_7, &VAR_6, VAR_3);
 FUNC_2(&VAR_7, VAR_1, VAR_0->assoclen, VAR_2);

 FUNC_7();
}
