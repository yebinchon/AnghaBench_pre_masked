
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct skcipher_request {scalar_t__ iv; } ;
struct crypto_skcipher {int dummy; } ;
struct chacha_ctx {int nrounds; int key; } ;


 int FUNC_0 (struct skcipher_request*,struct chacha_ctx*,int *) ;
 int FUNC_1 (int *,struct chacha_ctx*,scalar_t__) ;
 struct chacha_ctx* FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,scalar_t__,int) ;

int FUNC_6(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_3(VAR_0);
 struct chacha_ctx *VAR_2 = FUNC_2(VAR_1);
 struct chacha_ctx VAR_3;
 u32 VAR_4[16];
 u8 VAR_5[16];


 FUNC_1(VAR_4, VAR_2, VAR_0->iv);
 FUNC_4(VAR_4, VAR_3.key, VAR_2->nrounds);
 VAR_3.nrounds = VAR_2->nrounds;


 FUNC_5(&VAR_5[0], VAR_0->iv + 24, 8);
 FUNC_5(&VAR_5[8], VAR_0->iv + 16, 8);


 return FUNC_0(VAR_0, &VAR_3, VAR_5);
}
