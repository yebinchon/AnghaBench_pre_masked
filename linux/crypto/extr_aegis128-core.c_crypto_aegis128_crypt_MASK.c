
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union aegis_block {int dummy; } aegis_block ;
struct crypto_aead {int dummy; } ;
struct aegis_state {int dummy; } ;
struct aegis_ctx {int key; } ;
struct aegis128_ops {int dummy; } ;
struct aead_request {int assoclen; int src; int iv; } ;


 struct aegis_ctx* FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aegis_state*,union aegis_block*,int ,unsigned int) ;
 int FUNC_3 (struct aegis_state*,int *,int ) ;
 int FUNC_4 (struct aegis_state*,int ,int ) ;
 int FUNC_5 (struct aegis_state*,struct aead_request*,struct aegis128_ops const*) ;

__attribute__((used)) static void FUNC_6(struct aead_request *VAR_0,
      union aegis_block *VAR_1,
      unsigned int VAR_2,
      const struct aegis128_ops *VAR_3)
{
 struct crypto_aead *VAR_4 = FUNC_1(VAR_0);
 struct aegis_ctx *VAR_5 = FUNC_0(VAR_4);
 struct aegis_state VAR_6;

 FUNC_3(&VAR_6, &VAR_5->key, VAR_0->iv);
 FUNC_4(&VAR_6, VAR_0->src, VAR_0->assoclen);
 FUNC_5(&VAR_6, VAR_0, VAR_3);
 FUNC_2(&VAR_6, VAR_1, VAR_0->assoclen, VAR_2);
}
