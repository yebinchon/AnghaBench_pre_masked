
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct skcipher_request {scalar_t__ cryptlen; scalar_t__ iv; } ;
struct crypto_skcipher {int dummy; } ;
struct chacha_ctx {int nrounds; int key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct skcipher_request*,struct chacha_ctx*,int *) ;
 int FUNC_1 (int *,struct chacha_ctx*,scalar_t__) ;
 int FUNC_2 () ;
 struct chacha_ctx* FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_10(struct skcipher_request *VAR_1)
{
 struct crypto_skcipher *VAR_2 = FUNC_4(VAR_1);
 struct chacha_ctx *VAR_3 = FUNC_3(VAR_2);
 struct chacha_ctx VAR_4;
 u32 VAR_5[16];
 u8 VAR_6[16];

 if (VAR_1->cryptlen <= VAR_0 || !FUNC_2())
  return FUNC_5(VAR_1);

 FUNC_1(VAR_5, VAR_3, VAR_1->iv);

 FUNC_7();
 FUNC_6(VAR_5, VAR_4.key, VAR_3->nrounds);
 FUNC_8();
 VAR_4.nrounds = VAR_3->nrounds;

 FUNC_9(&VAR_6[0], VAR_1->iv + 24, 8);
 FUNC_9(&VAR_6[8], VAR_1->iv + 16, 8);
 return FUNC_0(VAR_1, &VAR_4, VAR_6);
}
